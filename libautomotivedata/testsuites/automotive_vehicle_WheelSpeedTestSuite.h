/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_VEHICLE_WHEELSPEED_TESTSUITE_H
#define AUTOMOTIVE_VEHICLE_WHEELSPEED_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/vehicle/WheelSpeed.h"


class automotive_vehicle_WheelSpeed_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive::vehicle;
	
			WheelSpeed obj1;
			TS_ASSERT_DELTA(obj1.getFrontLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), 0, 1e-5);
	
			obj1.setFrontLeft(2.5);
			obj1.setFrontRight(2.5);
			obj1.setRearLeft(2.5);
			obj1.setRearRight(2.5);
	
			TS_ASSERT_DELTA(obj1.getFrontLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), 2.5, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive::vehicle;
	
			WheelSpeed obj1;
			TS_ASSERT_DELTA(obj1.getFrontLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), 0, 1e-5);
	
			WheelSpeed obj2(obj1);
			TS_ASSERT_DELTA(obj1.getFrontLeft(), obj2.getFrontLeft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), obj2.getFrontRight(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), obj2.getRearLeft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), obj2.getRearRight(), 1e-5);
	
			obj1.setFrontLeft(2.5);
			obj1.setFrontRight(2.5);
			obj1.setRearLeft(2.5);
			obj1.setRearRight(2.5);
	
			TS_ASSERT_DELTA(obj1.getFrontLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), 2.5, 1e-5);
	
			WheelSpeed obj3(obj1);
			TS_ASSERT_DELTA(obj1.getFrontLeft(), obj3.getFrontLeft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), obj3.getFrontRight(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), obj3.getRearLeft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), obj3.getRearRight(), 1e-5);
	
			TS_ASSERT_DELTA(obj3.getFrontLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj3.getFrontRight(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj3.getRearLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj3.getRearRight(), 2.5, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive::vehicle;
	
			WheelSpeed obj1;
			TS_ASSERT_DELTA(obj1.getFrontLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), 0, 1e-5);
	
			WheelSpeed obj2;
			TS_ASSERT_DELTA(obj2.getFrontLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj2.getFrontRight(), 0, 1e-5);
			TS_ASSERT_DELTA(obj2.getRearLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj2.getRearRight(), 0, 1e-5);
	
			obj1.setFrontLeft(2.5);
			obj1.setFrontRight(2.5);
			obj1.setRearLeft(2.5);
			obj1.setRearRight(2.5);
	
			TS_ASSERT_DELTA(obj1.getFrontLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), 2.5, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT_DELTA(obj1.getFrontLeft(), obj2.getFrontLeft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), obj2.getFrontRight(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), obj2.getRearLeft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), obj2.getRearRight(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getFrontLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj2.getFrontRight(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj2.getRearLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj2.getRearRight(), 2.5, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive::vehicle;
	
			WheelSpeed obj1;
			TS_ASSERT_DELTA(obj1.getFrontLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), 0, 1e-5);
	
			WheelSpeed obj2;
			TS_ASSERT_DELTA(obj2.getFrontLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj2.getFrontRight(), 0, 1e-5);
			TS_ASSERT_DELTA(obj2.getRearLeft(), 0, 1e-5);
			TS_ASSERT_DELTA(obj2.getRearRight(), 0, 1e-5);
	
			obj1.setFrontLeft(2.5);
			obj1.setFrontRight(2.5);
			obj1.setRearLeft(2.5);
			obj1.setRearRight(2.5);
	
			TS_ASSERT_DELTA(obj1.getFrontLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), 2.5, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT_DELTA(obj1.getFrontLeft(), obj2.getFrontLeft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontRight(), obj2.getFrontRight(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRearLeft(), obj2.getRearLeft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRearRight(), obj2.getRearRight(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getFrontLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj2.getFrontRight(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj2.getRearLeft(), 2.5, 1e-5);
			TS_ASSERT_DELTA(obj2.getRearRight(), 2.5, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_VEHICLE_WHEELSPEED_TESTSUITE_H*/
