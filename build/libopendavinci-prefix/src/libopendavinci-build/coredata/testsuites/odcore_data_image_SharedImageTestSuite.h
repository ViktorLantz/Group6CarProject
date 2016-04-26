/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_IMAGE_SHAREDIMAGE_TESTSUITE_H
#define ODCORE_DATA_IMAGE_SHAREDIMAGE_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/image/SharedImage.h"


class odcore_data_image_SharedImage_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data::image;
	
			SharedImage obj1;
			TS_ASSERT(obj1.getWidth() == 0);
			TS_ASSERT(obj1.getHeight() == 0);
			TS_ASSERT(obj1.getBytesPerPixel() == 0);
	
			obj1.setWidth(4000);
			obj1.setHeight(4000);
			obj1.setBytesPerPixel(4000);
	
			TS_ASSERT(obj1.getWidth() == 4000);
			TS_ASSERT(obj1.getHeight() == 4000);
			TS_ASSERT(obj1.getBytesPerPixel() == 4000);
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data::image;
	
			SharedImage obj1;
			TS_ASSERT(obj1.getWidth() == 0);
			TS_ASSERT(obj1.getHeight() == 0);
			TS_ASSERT(obj1.getBytesPerPixel() == 0);
	
			SharedImage obj2(obj1);
			TS_ASSERT(obj1.getWidth() == obj2.getWidth());
			TS_ASSERT(obj1.getHeight() == obj2.getHeight());
			TS_ASSERT(obj1.getBytesPerPixel() == obj2.getBytesPerPixel());
	
			obj1.setWidth(4000);
			obj1.setHeight(4000);
			obj1.setBytesPerPixel(4000);
	
			TS_ASSERT(obj1.getWidth() == 4000);
			TS_ASSERT(obj1.getHeight() == 4000);
			TS_ASSERT(obj1.getBytesPerPixel() == 4000);
	
			SharedImage obj3(obj1);
			TS_ASSERT(obj1.getWidth() == obj3.getWidth());
			TS_ASSERT(obj1.getHeight() == obj3.getHeight());
			TS_ASSERT(obj1.getBytesPerPixel() == obj3.getBytesPerPixel());
	
			TS_ASSERT(obj3.getWidth() == 4000);
			TS_ASSERT(obj3.getHeight() == 4000);
			TS_ASSERT(obj3.getBytesPerPixel() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data::image;
	
			SharedImage obj1;
			TS_ASSERT(obj1.getWidth() == 0);
			TS_ASSERT(obj1.getHeight() == 0);
			TS_ASSERT(obj1.getBytesPerPixel() == 0);
	
			SharedImage obj2;
			TS_ASSERT(obj2.getWidth() == 0);
			TS_ASSERT(obj2.getHeight() == 0);
			TS_ASSERT(obj2.getBytesPerPixel() == 0);
	
			obj1.setWidth(4000);
			obj1.setHeight(4000);
			obj1.setBytesPerPixel(4000);
	
			TS_ASSERT(obj1.getWidth() == 4000);
			TS_ASSERT(obj1.getHeight() == 4000);
			TS_ASSERT(obj1.getBytesPerPixel() == 4000);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getWidth() == obj2.getWidth());
			TS_ASSERT(obj1.getHeight() == obj2.getHeight());
			TS_ASSERT(obj1.getBytesPerPixel() == obj2.getBytesPerPixel());
	
			TS_ASSERT(obj2.getWidth() == 4000);
			TS_ASSERT(obj2.getHeight() == 4000);
			TS_ASSERT(obj2.getBytesPerPixel() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data::image;
	
			SharedImage obj1;
			TS_ASSERT(obj1.getWidth() == 0);
			TS_ASSERT(obj1.getHeight() == 0);
			TS_ASSERT(obj1.getBytesPerPixel() == 0);
	
			SharedImage obj2;
			TS_ASSERT(obj2.getWidth() == 0);
			TS_ASSERT(obj2.getHeight() == 0);
			TS_ASSERT(obj2.getBytesPerPixel() == 0);
	
			obj1.setWidth(4000);
			obj1.setHeight(4000);
			obj1.setBytesPerPixel(4000);
	
			TS_ASSERT(obj1.getWidth() == 4000);
			TS_ASSERT(obj1.getHeight() == 4000);
			TS_ASSERT(obj1.getBytesPerPixel() == 4000);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getWidth() == obj2.getWidth());
			TS_ASSERT(obj1.getHeight() == obj2.getHeight());
			TS_ASSERT(obj1.getBytesPerPixel() == obj2.getBytesPerPixel());
	
			TS_ASSERT(obj2.getWidth() == 4000);
			TS_ASSERT(obj2.getHeight() == 4000);
			TS_ASSERT(obj2.getBytesPerPixel() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_IMAGE_SHAREDIMAGE_TESTSUITE_H*/
