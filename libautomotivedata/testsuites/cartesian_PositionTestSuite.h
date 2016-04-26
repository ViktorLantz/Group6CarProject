/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef CARTESIAN_POSITION_TESTSUITE_H
#define CARTESIAN_POSITION_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/cartesian/Position.h"

#include "automotivedata/generated/cartesian/Point2.h"
#include "automotivedata/generated/cartesian/Point2.h"

class cartesian_Position_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace cartesian;
	
			Position obj1;
	
	
		}
	
		void testCreateAndCopyObject() {
			using namespace cartesian;
	
			Position obj1;
	
			Position obj2(obj1);
	
	
	
			Position obj3(obj1);
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace cartesian;
	
			Position obj1;
	
			Position obj2;
	
	
	
			obj2 = obj1;
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace cartesian;
	
			Position obj1;
	
			Position obj2;
	
	
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*CARTESIAN_POSITION_TESTSUITE_H*/
