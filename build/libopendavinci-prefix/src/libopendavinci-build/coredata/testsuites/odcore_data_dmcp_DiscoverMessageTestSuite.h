/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_DISCOVERMESSAGE_TESTSUITE_H
#define ODCORE_DATA_DMCP_DISCOVERMESSAGE_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/dmcp/DiscoverMessage.h"

#include "opendavinci/generated/odcore/data/dmcp/ServerInformation.h"

class odcore_data_dmcp_DiscoverMessage_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data::dmcp;
	
			DiscoverMessage obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), ""));
	
			obj1.setModuleName("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), "Hello World!"));
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data::dmcp;
	
			DiscoverMessage obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), ""));
	
			DiscoverMessage obj2(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), obj2.getModuleName()));
	
			obj1.setModuleName("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), "Hello World!"));
	
			DiscoverMessage obj3(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), obj3.getModuleName()));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getModuleName(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data::dmcp;
	
			DiscoverMessage obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), ""));
	
			DiscoverMessage obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getModuleName(), ""));
	
			obj1.setModuleName("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), "Hello World!"));
	
			obj2 = obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), obj2.getModuleName()));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getModuleName(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data::dmcp;
	
			DiscoverMessage obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), ""));
	
			DiscoverMessage obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getModuleName(), ""));
	
			obj1.setModuleName("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), "Hello World!"));
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getModuleName(), obj2.getModuleName()));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getModuleName(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_DMCP_DISCOVERMESSAGE_TESTSUITE_H*/
