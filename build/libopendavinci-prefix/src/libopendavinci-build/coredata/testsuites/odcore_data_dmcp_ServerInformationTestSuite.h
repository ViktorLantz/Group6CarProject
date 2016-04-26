/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_SERVERINFORMATION_TESTSUITE_H
#define ODCORE_DATA_DMCP_SERVERINFORMATION_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/dmcp/ServerInformation.h"


class odcore_data_dmcp_ServerInformation_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data::dmcp;
	
			ServerInformation obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), ""));
			TS_ASSERT(obj1.getPort() == 0);
	
			obj1.setIP("Hello World!");
			obj1.setPort(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), "Hello World!"));
			TS_ASSERT(obj1.getPort() == 4000);
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data::dmcp;
	
			ServerInformation obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), ""));
			TS_ASSERT(obj1.getPort() == 0);
	
			ServerInformation obj2(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), obj2.getIP()));
			TS_ASSERT(obj1.getPort() == obj2.getPort());
	
			obj1.setIP("Hello World!");
			obj1.setPort(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), "Hello World!"));
			TS_ASSERT(obj1.getPort() == 4000);
	
			ServerInformation obj3(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), obj3.getIP()));
			TS_ASSERT(obj1.getPort() == obj3.getPort());
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getIP(), "Hello World!"));
			TS_ASSERT(obj3.getPort() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data::dmcp;
	
			ServerInformation obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), ""));
			TS_ASSERT(obj1.getPort() == 0);
	
			ServerInformation obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getIP(), ""));
			TS_ASSERT(obj2.getPort() == 0);
	
			obj1.setIP("Hello World!");
			obj1.setPort(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), "Hello World!"));
			TS_ASSERT(obj1.getPort() == 4000);
	
			obj2 = obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), obj2.getIP()));
			TS_ASSERT(obj1.getPort() == obj2.getPort());
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getIP(), "Hello World!"));
			TS_ASSERT(obj2.getPort() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data::dmcp;
	
			ServerInformation obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), ""));
			TS_ASSERT(obj1.getPort() == 0);
	
			ServerInformation obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getIP(), ""));
			TS_ASSERT(obj2.getPort() == 0);
	
			obj1.setIP("Hello World!");
			obj1.setPort(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), "Hello World!"));
			TS_ASSERT(obj1.getPort() == 4000);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIP(), obj2.getIP()));
			TS_ASSERT(obj1.getPort() == obj2.getPort());
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getIP(), "Hello World!"));
			TS_ASSERT(obj2.getPort() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_DMCP_SERVERINFORMATION_TESTSUITE_H*/
