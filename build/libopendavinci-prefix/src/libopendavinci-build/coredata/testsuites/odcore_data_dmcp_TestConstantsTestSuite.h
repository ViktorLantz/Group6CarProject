/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_TESTCONSTANTS_TESTSUITE_H
#define ODCORE_DATA_DMCP_TESTCONSTANTS_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/dmcp/TestConstants.h"


class odcore_data_dmcp_TestConstants_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data::dmcp;
	
			TestConstants obj1;
	
	
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data::dmcp;
	
			TestConstants obj1;
	
			TestConstants obj2(obj1);
	
	
	
			TestConstants obj3(obj1);
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data::dmcp;
	
			TestConstants obj1;
	
			TestConstants obj2;
	
	
	
			obj2 = obj1;
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data::dmcp;
	
			TestConstants obj1;
	
			TestConstants obj2;
	
	
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_DMCP_TESTCONSTANTS_TESTSUITE_H*/
