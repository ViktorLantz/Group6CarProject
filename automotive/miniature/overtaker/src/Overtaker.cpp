  /**
   * overtaker - Sample application for overtaking obstacles.
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
   *
   *
   *
   * This is what the code looked like when we showcased it with the motor running
   * with counters, using only the US FRONT CENTER to detect the obstacle.
   * Within the code are many printouts for testing purposes. There are also commented out
   * lines of code that we were using to test with the sensors. Unfortunately that did not work
   * and we have been back and forth with the values and the sensors to use and the values that 
   * are there did work at some point but not at the day of showcasing the overtaker part.
   */

  #include <cstdio>
  #include <cmath>
  #include <iostream>
  #include "opendavinci/odcore/io/conference/ContainerConference.h"
  #include "opendavinci/odcore/data/Container.h"

  #include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
  #include "automotivedata/GeneratedHeaders_AutomotiveData.h"

  #include "Overtaker.h"


   namespace automotive {
    namespace miniature {

      using namespace std;
      using namespace odcore::base;
      using namespace odcore::data;
      using namespace automotive;
      using namespace automotive::miniature;

      Overtaker::Overtaker(const int32_t &argc, char **argv) :
      TimeTriggeredConferenceClientModule(argc, argv, "overtaker")
      {}

      Overtaker::~Overtaker() {}

      void Overtaker::setUp() {
              // This method will be call automatically _before_ running body().
      }

      void Overtaker::tearDown() {
        VehicleControl vc;

              // This method will be call automatically _after_ return from body().
        for(int i = 0; i<200; i++){
          vc.setSpeed(0);

          Container c(vc);
                  // Send container.
          getConference().send(c);
        }

      }

          // This method will do the main data processing job.
      odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode Overtaker::body() {


              // FOR THE CAR
        const int32_t ULTRASONIC_FRONT_CENTER = 4;
        // const int32_t ULTRASONIC_FRONT_RIGHT = 3;
        const int32_t INFRARED_FRONT_RIGHT = 2;
        const int32_t INFRARED_REAR_RIGHT = 0; 

              //FOR THE SIMULATOR
        //  const int32_t ULTRASONIC_FRONT_CENTER = 3;
        //  const int32_t ULTRASONIC_FRONT_RIGHT = 4;
        //  const int32_t INFRARED_FRONT_RIGHT = 0;
        //  const int32_t INFRARED_REAR_RIGHT = 2;

       int m_state = m_startingStage; // setting the initial state 

        // COUNTERS USED FOR HARDCODED OVERTAKE
        
        int turnLeftFromRightLaneCounter = 0;
        int turnRightOnLeftLaneCounter = 0;
        int straightCounter = 0;
        int backToRightLaneCounter = 0;
        int leftOnRightLaneCounter = 0;
        int startingcounter = 0;
        // int backsensorcounter = 0;
        // int irdistanceOld = 0;
        // int irdistance = 0;



        while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {
                  
                  // 1. Get most recent vehicle data:
          Container containerVehicleData = getKeyValueDataStore().get(VehicleData::ID());
          VehicleData vd = containerVehicleData.getData<VehicleData> ();

                  // 2. Get most recent sensor board data:
          Container containerSensorBoardData = getKeyValueDataStore().get(automotive::miniature::SensorBoardData::ID());
          SensorBoardData sbd = containerSensorBoardData.getData<SensorBoardData> ();

                  // 3. Get the most recent steering data:
          Container containerSteeringData = getKeyValueDataStore().get(automotive::miniature::SteeringData::ID());
          SteeringData sd = containerSteeringData.getData<SteeringData> ();

          // GETTING THE VALUES FOR THE SENSORS
          //  int usright = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_RIGHT);
          int uscenter = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);
          int irfront = sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT);
          int irback = sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT);
          
          //  int angle; // Variable to use with lanefollowing

          //  const double irfrontleftlane = sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT);
          //  const double irbackleftlane = sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT);
          
          // Create vehicle control data.
          VehicleControl vc;

          
          vc.setSpeed(1);
          //cout << "USFRONT :" << uscenter << endl;
          // cout << "USRIGHT :" << usright << endl;
          // cout << "IRFRONT :" << irfront << endl;
          // cout << "IRBACK :" << irback << endl;
          // cout << "IRFRONT in FOLLOWLANE:" << irfront << endl;
          // cout << "IRBACK in FOLLOWLANE:" << irback << endl;
          if(uscenter){
                
            switch(m_state)
            {
              case m_startingStage :
              // THE STARTING STATE WHERE THE CAR DRIVES STRAIGHT UNTIL THE US FRONT DETECTS AN OBSTACLE
              // cout << "*******In STARTING stage*******" << endl;
              // cout << "IRFRONT in STARTING :" << irfront << endl;
              // cout << "IRBACK in STARTING :" << irback << endl;
              // cout << "USFRONT in STARTING :" << uscenter << endl;
              
              //IF USING THE LANEDETECTOR

              // angle = sd.getExampleData();
              // vc.setSteeringWheelAngle(angle);

              vc.setSteeringWheelAngle(5);
              if((uscenter < 55) && (uscenter > 20)){
                startingcounter++;
                m_state = m_moveToLeftLane;
              }
                      
                //This if statement was to get three values within our range to prevent 
                //the car to turn on noice values. 

              // if(startingcounter == 3){
              //     m_state = m_moveToLeftLane;
              // }

              break;
              case m_moveToLeftLane :
              // TURNING LEFT OVER TO THE LEFT LANE
            
              turnLeftFromRightLaneCounter++;
              // cout << "IRFRONT in FOLLOWLANE:" << irfront << endl;
              // cout << "IRBACK in FOLLOWLANE:" << irback << endl;
              // cout << "turnLeftFromRightLaneCounter :" <<turnLeftFromRightLaneCounter << endl;
              // cout << "*****In MOVETOLEFTLANE stage******" << endl;
              // cout << "IRFRONT :" << irfront << endl;
              // cout << "IRBACK :" << irback << endl;
              // cout << "*****USCENTER :" << uscenter << endl;
                
              vc.setSteeringWheelAngle(-1);

              turnLeftFromRightLaneCounter++;

              // IF USING IR FRONT SENSOR
              // if ((irfront > 0) && (irfront < 20) && (irback < 20) && (irback > 0)) {

              // if ((irfront > 0) && (irfront < 30) && (irback > 0)) {
              // m_state = m_turnCarOnLeftLane;
              // }

              if(turnLeftFromRightLaneCounter == 60){
                //   vc.setSpeed(0);
                //   vc.setSteeringWheelAngle(25);
                m_state = m_turnCarOnLeftLane;
              }

              break;

              case m_turnCarOnLeftLane :
              // TURNING RIGHT ON LEFT LANE 

              // cout << "******In TURNCARONLEFTLANE stage******" << endl;
              // cout << "IRFRONT :" << irfrontleftlane << endl;
              // cout << "IRBACK :" << irbackleftlane << endl;
              vc.setSteeringWheelAngle(1);
                           
              turnRightOnLeftLaneCounter++;
              //  cout << "turnRightOnLeftLaneCounter :"<< turnRightOnLeftLaneCounter << endl;

              //IF USING THE INFRARED TO STRAIGHTEN THE CAR
              // if(fabs(irfrontleftlane - irbackleftlane) < 1){
              //     m_state= m_straighten;
              // }

              //USING A COUNTER
              if(turnRightOnLeftLaneCounter == 24){ // || (turnRightOnLeftLaneCounter == 17)){            
                m_state = m_straighten;
                }
              break;
                              
              case m_straighten :
              // DRIVING PAST THE OBSTACLE
              vc.setSteeringWheelAngle(5);
              straightCounter++;    

              //IF USING LANEDETECTOR
              // angle = sd.getExampleData();
              // vc.setSteeringWheelAngle(angle);
              
              // cout << "******In STRAIGHTEN stage******" << endl;
              // cout << "IRFRONT :" << irfront << endl;
              // cout << "IRBACK :" << irback << endl;
              // cout << "USRIGHT in STRAIGHTEN :" << usright << endl;
              // cout << "straightCounter :" << straightCounter << endl;
                              
              //IF USING THE INFRARED FRONT SENSOR
              // if ( irfront < 0)  {
              // m_state = m_turnBackToRightLane;
              // }

              //IF USING THE COUNTER AND THE US RIGHT SENSOR
              //if(((straightCounter > 20) && (usright < 0)) || ((straightCounter > 20)&&(usright > 80))){
              if((straightCounter > 25) && (irback < 0)) {
              // cout << "FRONT RIGHT :" << irfront << endl;
              // cout << "REAR RIGHT :" << irback << endl;
              // cout << "US RIGHT :" << usright << endl;
              m_state = m_turnBackToRightLane;
              }
              break;
                          
              case m_turnBackToRightLane :
                // TURNING BACK TO RIGHT LANE
                // cout << "*****In TURN BACK stage*****" << endl;
                // cout << "IRFRONT :" << irfront << endl;
                // cout << "IRBACK :" << irback << endl;

                vc.setSteeringWheelAngle(1);
                backToRightLaneCounter++;
                // cout << "backToRightLaneCounter :" << backToRightLaneCounter << endl;

                //if using the infrared back right sensor
                // if  (irback < 0){
                //   backsensorcounter++;
                // }

                //IF USING THE COUNTER FROM TURNING LEFT
               /* turnLeftFromRightLaneCounter--;
                if{(turnLeftFromRightLaneCounter == 0){
                  m_state = m_returnNormal;
                }*/

                if(backToRightLaneCounter == 70) {
                  m_state = m_returnNormal;
                  }
                break;

                case m_returnNormal :
                // ADJUSTING THE CAR A LITTLE BIT BEFORE THE LANEDETECTOR TAKES OVER
                // cout << "*****In RETURN NORMAL stage******" << endl;
                // cout << "IRFRONT in RETURN :" << irfront << endl;
                // cout << "IRBACK in RETURN:" << irback << endl;

                leftOnRightLaneCounter++;
                vc.setSteeringWheelAngle(-1);
                // cout << "leftOnRightLaneCounter :" << leftOnRightLaneCounter << endl;
                if(leftOnRightLaneCounter == 60){
                  m_state = m_startingStage;
                  // vc.setSteeringWheelAngle(angle);
                  // vc.setSteeringWheelAngle(sd.getExampleData()); //iswiching back to lanedetector
                  }
                break;
                }
              }

                  // Create container for finally sending the data.
                        Container c(vc);
                  // Send container.
                        getConference().send(c);
                      }

                      return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
                    }

                  }
  } // automotive::miniature

