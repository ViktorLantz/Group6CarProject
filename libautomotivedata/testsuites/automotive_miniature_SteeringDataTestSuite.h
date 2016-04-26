/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_MINIATURE_STEERINGDATA_TESTSUITE_H
#define AUTOMOTIVE_MINIATURE_STEERINGDATA_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/miniature/SteeringData.h"


class automotive_miniature_SteeringData_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive::miniature;
	
			SteeringData obj1;
			TS_ASSERT_DELTA(obj1.getExampleData(), 0.0, 1e-5);
	
			obj1.setExampleData(1.0);
	
			TS_ASSERT_DELTA(obj1.getExampleData(), 1.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive::miniature;
	
			SteeringData obj1;
			TS_ASSERT_DELTA(obj1.getExampleData(), 0.0, 1e-5);
	
			SteeringData obj2(obj1);
			TS_ASSERT_DELTA(obj1.getExampleData(), obj2.getExampleData(), 1e-5);
	
			obj1.setExampleData(1.0);
	
			TS_ASSERT_DELTA(obj1.getExampleData(), 1.0, 1e-5);
	
			SteeringData obj3(obj1);
			TS_ASSERT_DELTA(obj1.getExampleData(), obj3.getExampleData(), 1e-5);
	
			TS_ASSERT_DELTA(obj3.getExampleData(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive::miniature;
	
			SteeringData obj1;
			TS_ASSERT_DELTA(obj1.getExampleData(), 0.0, 1e-5);
	
			SteeringData obj2;
			TS_ASSERT_DELTA(obj2.getExampleData(), 0.0, 1e-5);
	
			obj1.setExampleData(1.0);
	
			TS_ASSERT_DELTA(obj1.getExampleData(), 1.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT_DELTA(obj1.getExampleData(), obj2.getExampleData(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getExampleData(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive::miniature;
	
			SteeringData obj1;
			TS_ASSERT_DELTA(obj1.getExampleData(), 0.0, 1e-5);
	
			SteeringData obj2;
			TS_ASSERT_DELTA(obj2.getExampleData(), 0.0, 1e-5);
	
			obj1.setExampleData(1.0);
	
			TS_ASSERT_DELTA(obj1.getExampleData(), 1.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT_DELTA(obj1.getExampleData(), obj2.getExampleData(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getExampleData(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_MINIATURE_STEERINGDATA_TESTSUITE_H*/
