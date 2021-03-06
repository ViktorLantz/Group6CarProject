/**
 * lanedetector - Application skeleton for detecting lane markings.
 * Copyright (C) 2012 - 2015 Christian Berger
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <iostream>
#include <memory>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <opencv/cv.h>
#include <opencv/highgui.h>

#include "opendavinci/odcore/base/KeyValueConfiguration.h"
#include "opendavinci/odcore/base/Lock.h"
#include "opendavinci/odcore/data/Container.h"
#include "opendavinci/odcore/wrapper/SharedMemoryFactory.h"

#include "opendavinci/odtools/player/Player.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "LaneDetector.h"

using namespace cv;
using namespace std;

namespace automotive {
    namespace miniature {

        using namespace std;
        using namespace odcore::base;
        using namespace odcore::base::module;
        using namespace odcore::data;
        using namespace odcore::data::image;
        using namespace odtools::player;
        using namespace automotive;
        using namespace automotive::miniature;
        bool stop = false; //boolean used for stoping the car
        int loopCount = 0; //int used for the timer (used at the intersection)


        LaneDetector::LaneDetector(const int32_t &argc, char **argv) :
            TimeTriggeredConferenceClientModule(argc, argv, "LaneDetector"),
            m_hasAttachedToSharedImageMemory(false),
            m_sharedImageMemory(),
            m_image(NULL),
            m_debug(false),
            m_vehicleControl() {}

        LaneDetector::~LaneDetector() {}

        void LaneDetector::setUp() {
	        // This method will be called automatically _before_ running body().

            // If in debug mode, display the image from the camera feed.
	        if (m_debug) {
		        cvNamedWindow("Camera Feed Image", CV_WINDOW_AUTOSIZE);
		        cvMoveWindow("Camera Feed Image", 300, 100);
	        }
        }

        void LaneDetector::tearDown() {
	        // This method will be called automatically _after_ return from body().
	        if (m_image != NULL) {
		        cvReleaseImage(&m_image);
	        }

	        if (m_debug) {
		        cvDestroyWindow("Camera Feed Image");
	        }
        }

        bool LaneDetector::readSharedImage(Container &c) {
	        bool retVal = false;

	        if (c.getDataType() == odcore::data::image::SharedImage::ID()) {
		        SharedImage si = c.getData<SharedImage> ();

		        // Check if we have already attached to the shared memory containing the image from the virtual camera.
		        if (!m_hasAttachedToSharedImageMemory) {
			        m_sharedImageMemory = odcore::wrapper::SharedMemoryFactory::attachToSharedMemory(si.getName());
		        }

		        // Check if we could successfully attach to the shared memory.
		        if (m_sharedImageMemory->isValid()) {
			        // Lock the memory region to gain exclusive access using a scoped lock.
                    Lock l(m_sharedImageMemory);

			        if (m_image == NULL) {
				        m_image = cvCreateImage(cvSize(si.getWidth(), si.getHeight()), IPL_DEPTH_8U, si.getBytesPerPixel());
			        }

			        // Example: Simply copy the image into our process space.
			        if (m_image != NULL) {
				        memcpy(m_image->imageData, m_sharedImageMemory->getSharedMemory(), si.getWidth() * si.getHeight() * si.getBytesPerPixel());
			        }

			        // Mirror the image.
			        cvFlip(m_image, 0, -1);

			        retVal = true;
		        }
	        }
	        return retVal;
        }

        // This method is called to process an image described by the SharedImage data structure.
        void LaneDetector::processImage() {

            if (m_debug) {
  			int32_t img_width, img_height;
  			int dif ;

  			// Get the width and height of the image
  			img_width = m_image->width;
  			img_height = m_image->height;
        
        //Create a single chanel matrix 
  			IplImage *singChannel = cvCreateImage(cvSize(img_width, img_height), IPL_DEPTH_8U, 1);
  			// and apply filters to that channel
        cvCvtColor(m_image, singChannel, COLOR_BGR2GRAY);
  			cvSmooth(singChannel, singChannel, CV_GAUSSIAN, 3, 3);
  			cvCanny(singChannel , singChannel, 50, 200, 3);
        // merge the single channel matrix three times and display it through m_image so that we will have no clashes
        // between our camera/OpenCV and our code.
  			cvMerge(singChannel,singChannel,singChannel,NULL,m_image);

if (m_image != NULL){

  // Scan the image at different heights

  //THIS ALGORITHM WAS TAKEN FROM LaneFollower.cpp AND WAS IMPLEMENTED ACCORDING TO OUR CODE
  //ALL CREDITS GO TO Christian Berger
  for(int y = img_height/6 * 4; y < img_height - 90; y += 5) {
      // Scan from middle to right
      // start at the middle pixel and compare the colour until a white pixel is found
      CvScalar pixelRightCol;
      Point right;
      right.x = -1;
      right.y = y;
      for(int x = img_width/2; x < img_width; x++) {
      	  pixelRightCol = cvGet2D(m_image, y, x);
          if(pixelRightCol.val[0] >= 200) {
              right.x = x;                    // set the x coordinate to the value where a white pixel was detected
              break;
          }
      }

      // Do the same but from middle to left
      CvScalar pixelLeftCol;
      Point left;
      left.x = -1;
      left.y = y;
      for (int x = img_width/2; x > 0; x--) {
        pixelLeftCol = cvGet2D(m_image, y, x);
        if(pixelLeftCol.val[0] >= 200) {
          left.x = x;
          break;
        }
      }

    // If a the lane lines are detected, draw from the middle to that line

    //THIS ALGORITHM WAS TAKEN FROM LaneFollower.cpp AND WAS IMPLEMENTED ACCORDING TO OUR CODE
    //ALL CREDITS GO TO Christian Berger 
    if(left.x > 0) {
      cvLine(m_image, Point(img_width/2, y), left, Scalar(0, 255, 0), 1, 8);     // draw a green line from the middle to left point
    }

    //THIS ALGORITHM WAS TAKEN FROM LaneFollower.cpp AND WAS IMPLEMENTED ACCORDING TO OUR CODE
    //ALL CREDITS GO TO Christian Berger
    if(right.x > 0) {
      cvLine(m_image, Point(img_width/2, y), right, Scalar(0, 0, 255), 1, 8);    // draw a red line from middle to right
    }
    // Calculate differences between right and left lines
    dif = (right.x - img_width/2) - (img_width/2 - left.x);
  }

   //DETETCT THE WHITE LINE BEFORE THE INTERSECTION

   //THIS ALGORITHM WAS TAKEN FROM LaneFollower.cpp AND WAS IMPLEMENTED ACCORDING TO OUR CODE
   //ALL CREDITS GO TO Christian Berger
   for(int yU = img_height/6 * 5; yU < img_height -70; yU += 2) {
    
      CvScalar pixelRightCol2;
      int countWhite = 0;
      for(int i = img_width/2 - 30; i < img_width/2 + 30; i++) {
        pixelRightCol2 = cvGet2D(m_image, yU, i);
        if(pixelRightCol2.val[0] >= 200) {
          countWhite++;
        }
      }
      
     //THIS ALGORITHM WAS TAKEN FROM LaneFollower.cpp AND WAS IMPLEMENTED ACCORDING TO OUR CODE
     //ALL CREDITS GO TO Christian Berger
     if(countWhite > 1) {
        cvLine(m_image, Point(img_width/2 -30, yU), Point(img_width/2 + 30, yU), Scalar(255, 0, 255), 1, 8);
        cout <<"Horizontal lane"<<endl;
        stop = true;   
    }
  }

  	if (m_image != NULL) {
                     cvShowImage("Camera Feed Image", m_image);
                     cvWaitKey(10);
                }

		int avg = dif;
		cout <<"Dif is: "<<avg<<endl;
		int steer = 0;
      	int speed;

      if (!stop){
       speed = 1; 
       cout <<"Going!"<<endl;
       cout <<"The speed is: "<<speed<<endl; 
      }
      else {
        speed = 0;
        if(stop == true && loopCount < 300){
          loopCount++;
        }else{
          stop = false;
          loopCount = 0;
        }
        cout <<"Stopping!"<<endl;
        cout <<"The speed is: "<<speed<<endl; 
      }

      if(avg < -590)
			  {
			 	steer = 0;
			 	cout <<"Forward through the black void!!"<<endl;
			  }
        
			  else if(avg < -10 && avg > -35)
			  {
			 	steer = 0;
			 	cout <<"Middle of road!!"<<endl;
			  }

			  else if(avg > 100 || avg < -321)
			  {
			  	steer = 1;
			    cout <<"Turn Right !!"<<endl;
			  }

			  else if(avg < -120)
			  {
			  	steer = -1;
			  	cout <<"Turn Left !!"<<endl;
			  }

            m_vehicleControl.setSpeed(speed);
            m_vehicleControl.setSteeringWheelAngle(steer);
            Container s(m_vehicleControl);
            getConference().send(s);
       }
    }
}
        // This method will do the main data processing job.
        // Therefore, it tries to open the real camera first. If that fails, the virtual camera images from camgen are used.
        odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode LaneDetector::body() {
	        // Get configuration data.
	        KeyValueConfiguration kv = getKeyValueConfiguration();
	        m_debug = kv.getValue<int32_t> ("lanedetector.debug") == 1;

            unique_ptr<Player> player;
/*
            // Lane-detector can also directly read the data from file. This might be interesting to inspect the algorithm step-wisely.
            odcore::io::URL url("file://record.rec");

            // Size of the memory buffer.
            const uint32_t MEMORY_SEGMENT_SIZE = kv.getValue<uint32_t>("global.buffer.memorySegmentSize");

            // Number of memory segments.
            const uint32_t NUMBER_OF_SEGMENTS = kv.getValue<uint32_t>("global.buffer.numberOfMemorySegments");

            // If AUTO_REWIND is true, the file will be played endlessly.
            const bool AUTO_REWIND = true;

            // We do not want player to run in parallel but we want to process frame by frame sequentially.
            const bool THREADING = false;

            // Construct the player.
            player = unique_ptr<Player>(new Player(url, AUTO_REWIND, MEMORY_SEGMENT_SIZE, NUMBER_OF_SEGMENTS, THREADING));

*/
            // Main data processing loop.
	        while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {
		        bool has_next_frame = false;

		        // Use the shared memory image.
                Container c;
                if (player.get() != NULL) {
		            // Read the next container from file.
                    c = player->getNextContainerToBeSent();
                }
                else {
		            // Get the most recent available container for a SHARED_IMAGE.
		            c = getKeyValueDataStore().get(odcore::data::image::SharedImage::ID());
                }

		        if (c.getDataType() == odcore::data::image::SharedImage::ID()) {
			        // Example for processing the received container.
			        has_next_frame = readSharedImage(c);
		        }

		        // Process the read image.
		        if (true == has_next_frame) {
			        processImage();
		        }
	        }

	        return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
        }

    } // miniature
} // automotive

