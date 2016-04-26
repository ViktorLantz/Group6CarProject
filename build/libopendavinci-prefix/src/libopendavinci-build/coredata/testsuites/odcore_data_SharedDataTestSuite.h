/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_SHAREDDATA_TESTSUITE_H
#define ODCORE_DATA_SHAREDDATA_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/SharedData.h"


class odcore_data_SharedData_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data;
	
			SharedData obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), ""));
			TS_ASSERT(obj1.getSize() == 0);
	
			obj1.setName("Hello World!");
			obj1.setSize(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), "Hello World!"));
			TS_ASSERT(obj1.getSize() == 4000);
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data;
	
			SharedData obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), ""));
			TS_ASSERT(obj1.getSize() == 0);
	
			SharedData obj2(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), obj2.getName()));
			TS_ASSERT(obj1.getSize() == obj2.getSize());
	
			obj1.setName("Hello World!");
			obj1.setSize(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), "Hello World!"));
			TS_ASSERT(obj1.getSize() == 4000);
	
			SharedData obj3(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), obj3.getName()));
			TS_ASSERT(obj1.getSize() == obj3.getSize());
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getName(), "Hello World!"));
			TS_ASSERT(obj3.getSize() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data;
	
			SharedData obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), ""));
			TS_ASSERT(obj1.getSize() == 0);
	
			SharedData obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getName(), ""));
			TS_ASSERT(obj2.getSize() == 0);
	
			obj1.setName("Hello World!");
			obj1.setSize(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), "Hello World!"));
			TS_ASSERT(obj1.getSize() == 4000);
	
			obj2 = obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), obj2.getName()));
			TS_ASSERT(obj1.getSize() == obj2.getSize());
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getName(), "Hello World!"));
			TS_ASSERT(obj2.getSize() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data;
	
			SharedData obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), ""));
			TS_ASSERT(obj1.getSize() == 0);
	
			SharedData obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getName(), ""));
			TS_ASSERT(obj2.getSize() == 0);
	
			obj1.setName("Hello World!");
			obj1.setSize(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), "Hello World!"));
			TS_ASSERT(obj1.getSize() == 4000);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), obj2.getName()));
			TS_ASSERT(obj1.getSize() == obj2.getSize());
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getName(), "Hello World!"));
			TS_ASSERT(obj2.getSize() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_SHAREDDATA_TESTSUITE_H*/
