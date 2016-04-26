/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef CARTESIAN_MATRIX3X3_TESTSUITE_H
#define CARTESIAN_MATRIX3X3_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/cartesian/Matrix3x3.h"


class cartesian_Matrix3x3_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace cartesian;
	
			Matrix3x3 obj1;
			TS_ASSERT_DELTA(obj1.getXX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), 0.0, 1e-5);
	
			obj1.setXX(1.0);
			obj1.setXY(1.0);
			obj1.setXZ(1.0);
			obj1.setYX(1.0);
			obj1.setYY(1.0);
			obj1.setYZ(1.0);
			obj1.setZX(1.0);
			obj1.setZY(1.0);
			obj1.setZZ(1.0);
	
			TS_ASSERT_DELTA(obj1.getXX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), 1.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace cartesian;
	
			Matrix3x3 obj1;
			TS_ASSERT_DELTA(obj1.getXX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), 0.0, 1e-5);
	
			Matrix3x3 obj2(obj1);
			TS_ASSERT_DELTA(obj1.getXX(), obj2.getXX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), obj2.getXY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), obj2.getXZ(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), obj2.getYX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), obj2.getYY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), obj2.getYZ(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), obj2.getZX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), obj2.getZY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), obj2.getZZ(), 1e-5);
	
			obj1.setXX(1.0);
			obj1.setXY(1.0);
			obj1.setXZ(1.0);
			obj1.setYX(1.0);
			obj1.setYY(1.0);
			obj1.setYZ(1.0);
			obj1.setZX(1.0);
			obj1.setZY(1.0);
			obj1.setZZ(1.0);
	
			TS_ASSERT_DELTA(obj1.getXX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), 1.0, 1e-5);
	
			Matrix3x3 obj3(obj1);
			TS_ASSERT_DELTA(obj1.getXX(), obj3.getXX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), obj3.getXY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), obj3.getXZ(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), obj3.getYX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), obj3.getYY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), obj3.getYZ(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), obj3.getZX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), obj3.getZY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), obj3.getZZ(), 1e-5);
	
			TS_ASSERT_DELTA(obj3.getXX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getXY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getXZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getYX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getYY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getYZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getZX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getZY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getZZ(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace cartesian;
	
			Matrix3x3 obj1;
			TS_ASSERT_DELTA(obj1.getXX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), 0.0, 1e-5);
	
			Matrix3x3 obj2;
			TS_ASSERT_DELTA(obj2.getXX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getXY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getXZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZZ(), 0.0, 1e-5);
	
			obj1.setXX(1.0);
			obj1.setXY(1.0);
			obj1.setXZ(1.0);
			obj1.setYX(1.0);
			obj1.setYY(1.0);
			obj1.setYZ(1.0);
			obj1.setZX(1.0);
			obj1.setZY(1.0);
			obj1.setZZ(1.0);
	
			TS_ASSERT_DELTA(obj1.getXX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), 1.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT_DELTA(obj1.getXX(), obj2.getXX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), obj2.getXY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), obj2.getXZ(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), obj2.getYX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), obj2.getYY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), obj2.getYZ(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), obj2.getZX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), obj2.getZY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), obj2.getZZ(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getXX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getXY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getXZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZZ(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace cartesian;
	
			Matrix3x3 obj1;
			TS_ASSERT_DELTA(obj1.getXX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), 0.0, 1e-5);
	
			Matrix3x3 obj2;
			TS_ASSERT_DELTA(obj2.getXX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getXY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getXZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYZ(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZX(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZY(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZZ(), 0.0, 1e-5);
	
			obj1.setXX(1.0);
			obj1.setXY(1.0);
			obj1.setXZ(1.0);
			obj1.setYX(1.0);
			obj1.setYY(1.0);
			obj1.setYZ(1.0);
			obj1.setZX(1.0);
			obj1.setZY(1.0);
			obj1.setZZ(1.0);
	
			TS_ASSERT_DELTA(obj1.getXX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), 1.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT_DELTA(obj1.getXX(), obj2.getXX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getXY(), obj2.getXY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getXZ(), obj2.getXZ(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYX(), obj2.getYX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYY(), obj2.getYY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYZ(), obj2.getYZ(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZX(), obj2.getZX(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZY(), obj2.getZY(), 1e-5);
			TS_ASSERT_DELTA(obj1.getZZ(), obj2.getZZ(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getXX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getXY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getXZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYZ(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZX(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZY(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getZZ(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*CARTESIAN_MATRIX3X3_TESTSUITE_H*/
