/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_SHAREDPOINTCLOUD_TESTSUITE_H
#define ODCORE_DATA_SHAREDPOINTCLOUD_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/SharedPointCloud.h"


class odcore_data_SharedPointCloud_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data;
	
			SharedPointCloud obj1;
			TS_ASSERT(obj1.getWidth() == 0);
			TS_ASSERT(obj1.getHeight() == 0);
			TS_ASSERT(obj1.getUserInfo() == 0);
	
			obj1.setWidth(4000);
			obj1.setHeight(4000);
			obj1.setNumberOfComponentsPerPoint(4);
			obj1.setUserInfo(4000);
	
			TS_ASSERT(obj1.getWidth() == 4000);
			TS_ASSERT(obj1.getHeight() == 4000);
			TS_ASSERT(obj1.getUserInfo() == 4000);
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data;
	
			SharedPointCloud obj1;
			TS_ASSERT(obj1.getWidth() == 0);
			TS_ASSERT(obj1.getHeight() == 0);
			TS_ASSERT(obj1.getUserInfo() == 0);
	
			SharedPointCloud obj2(obj1);
			TS_ASSERT(obj1.getWidth() == obj2.getWidth());
			TS_ASSERT(obj1.getHeight() == obj2.getHeight());
			TS_ASSERT(obj1.getUserInfo() == obj2.getUserInfo());
	
			obj1.setWidth(4000);
			obj1.setHeight(4000);
			obj1.setNumberOfComponentsPerPoint(4);
			obj1.setUserInfo(4000);
	
			TS_ASSERT(obj1.getWidth() == 4000);
			TS_ASSERT(obj1.getHeight() == 4000);
			TS_ASSERT(obj1.getUserInfo() == 4000);
	
			SharedPointCloud obj3(obj1);
			TS_ASSERT(obj1.getWidth() == obj3.getWidth());
			TS_ASSERT(obj1.getHeight() == obj3.getHeight());
			TS_ASSERT(obj1.getUserInfo() == obj3.getUserInfo());
	
			TS_ASSERT(obj3.getWidth() == 4000);
			TS_ASSERT(obj3.getHeight() == 4000);
			TS_ASSERT(obj3.getUserInfo() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data;
	
			SharedPointCloud obj1;
			TS_ASSERT(obj1.getWidth() == 0);
			TS_ASSERT(obj1.getHeight() == 0);
			TS_ASSERT(obj1.getUserInfo() == 0);
	
			SharedPointCloud obj2;
			TS_ASSERT(obj2.getWidth() == 0);
			TS_ASSERT(obj2.getHeight() == 0);
			TS_ASSERT(obj2.getUserInfo() == 0);
	
			obj1.setWidth(4000);
			obj1.setHeight(4000);
			obj1.setNumberOfComponentsPerPoint(4);
			obj1.setUserInfo(4000);
	
			TS_ASSERT(obj1.getWidth() == 4000);
			TS_ASSERT(obj1.getHeight() == 4000);
			TS_ASSERT(obj1.getUserInfo() == 4000);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getWidth() == obj2.getWidth());
			TS_ASSERT(obj1.getHeight() == obj2.getHeight());
			TS_ASSERT(obj1.getUserInfo() == obj2.getUserInfo());
	
			TS_ASSERT(obj2.getWidth() == 4000);
			TS_ASSERT(obj2.getHeight() == 4000);
			TS_ASSERT(obj2.getUserInfo() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data;
	
			SharedPointCloud obj1;
			TS_ASSERT(obj1.getWidth() == 0);
			TS_ASSERT(obj1.getHeight() == 0);
			TS_ASSERT(obj1.getUserInfo() == 0);
	
			SharedPointCloud obj2;
			TS_ASSERT(obj2.getWidth() == 0);
			TS_ASSERT(obj2.getHeight() == 0);
			TS_ASSERT(obj2.getUserInfo() == 0);
	
			obj1.setWidth(4000);
			obj1.setHeight(4000);
			obj1.setNumberOfComponentsPerPoint(4);
			obj1.setUserInfo(4000);
	
			TS_ASSERT(obj1.getWidth() == 4000);
			TS_ASSERT(obj1.getHeight() == 4000);
			TS_ASSERT(obj1.getUserInfo() == 4000);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getWidth() == obj2.getWidth());
			TS_ASSERT(obj1.getHeight() == obj2.getHeight());
			TS_ASSERT(obj1.getUserInfo() == obj2.getUserInfo());
	
			TS_ASSERT(obj2.getWidth() == 4000);
			TS_ASSERT(obj2.getHeight() == 4000);
			TS_ASSERT(obj2.getUserInfo() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_SHAREDPOINTCLOUD_TESTSUITE_H*/
