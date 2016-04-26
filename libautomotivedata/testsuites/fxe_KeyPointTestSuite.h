/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FXE_KEYPOINT_TESTSUITE_H
#define FXE_KEYPOINT_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/fxe/KeyPoint.h"

#include "automotivedata/generated/cartesian/Point2.h"

class fxe_KeyPoint_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace fxe;
	
			KeyPoint obj1;
			TS_ASSERT_DELTA(obj1.getSize(), 0, 1e-5);
	
			obj1.setSize(2.5);
	
			TS_ASSERT_DELTA(obj1.getSize(), 2.5, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace fxe;
	
			KeyPoint obj1;
			TS_ASSERT_DELTA(obj1.getSize(), 0, 1e-5);
	
			KeyPoint obj2(obj1);
			TS_ASSERT_DELTA(obj1.getSize(), obj2.getSize(), 1e-5);
	
			obj1.setSize(2.5);
	
			TS_ASSERT_DELTA(obj1.getSize(), 2.5, 1e-5);
	
			KeyPoint obj3(obj1);
			TS_ASSERT_DELTA(obj1.getSize(), obj3.getSize(), 1e-5);
	
			TS_ASSERT_DELTA(obj3.getSize(), 2.5, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace fxe;
	
			KeyPoint obj1;
			TS_ASSERT_DELTA(obj1.getSize(), 0, 1e-5);
	
			KeyPoint obj2;
			TS_ASSERT_DELTA(obj2.getSize(), 0, 1e-5);
	
			obj1.setSize(2.5);
	
			TS_ASSERT_DELTA(obj1.getSize(), 2.5, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT_DELTA(obj1.getSize(), obj2.getSize(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getSize(), 2.5, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace fxe;
	
			KeyPoint obj1;
			TS_ASSERT_DELTA(obj1.getSize(), 0, 1e-5);
	
			KeyPoint obj2;
			TS_ASSERT_DELTA(obj2.getSize(), 0, 1e-5);
	
			obj1.setSize(2.5);
	
			TS_ASSERT_DELTA(obj1.getSize(), 2.5, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT_DELTA(obj1.getSize(), obj2.getSize(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getSize(), 2.5, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*FXE_KEYPOINT_TESTSUITE_H*/
