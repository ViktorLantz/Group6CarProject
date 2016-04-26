/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_FORCECONTROL_TESTSUITE_H
#define AUTOMOTIVE_FORCECONTROL_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/ForceControl.h"


class automotive_ForceControl_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive;
	
			ForceControl obj1;
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), 0.0, 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == false);
			TS_ASSERT(obj1.getFlashingLightsLeft() == false);
			TS_ASSERT(obj1.getFlashingLightsRight() == false);
	
			obj1.setAccelerationForce(1.0);
			obj1.setBrakeForce(1.0);
			obj1.setSteeringForce(1.0);
			obj1.setBrakeLights(true);
			obj1.setFlashingLightsLeft(true);
			obj1.setFlashingLightsRight(true);
	
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), 1.0, 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == true);
			TS_ASSERT(obj1.getFlashingLightsLeft() == true);
			TS_ASSERT(obj1.getFlashingLightsRight() == true);
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive;
	
			ForceControl obj1;
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), 0.0, 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == false);
			TS_ASSERT(obj1.getFlashingLightsLeft() == false);
			TS_ASSERT(obj1.getFlashingLightsRight() == false);
	
			ForceControl obj2(obj1);
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), obj2.getAccelerationForce(), 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), obj2.getBrakeForce(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), obj2.getSteeringForce(), 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == obj2.getBrakeLights());
			TS_ASSERT(obj1.getFlashingLightsLeft() == obj2.getFlashingLightsLeft());
			TS_ASSERT(obj1.getFlashingLightsRight() == obj2.getFlashingLightsRight());
	
			obj1.setAccelerationForce(1.0);
			obj1.setBrakeForce(1.0);
			obj1.setSteeringForce(1.0);
			obj1.setBrakeLights(true);
			obj1.setFlashingLightsLeft(true);
			obj1.setFlashingLightsRight(true);
	
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), 1.0, 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == true);
			TS_ASSERT(obj1.getFlashingLightsLeft() == true);
			TS_ASSERT(obj1.getFlashingLightsRight() == true);
	
			ForceControl obj3(obj1);
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), obj3.getAccelerationForce(), 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), obj3.getBrakeForce(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), obj3.getSteeringForce(), 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == obj3.getBrakeLights());
			TS_ASSERT(obj1.getFlashingLightsLeft() == obj3.getFlashingLightsLeft());
			TS_ASSERT(obj1.getFlashingLightsRight() == obj3.getFlashingLightsRight());
	
			TS_ASSERT_DELTA(obj3.getAccelerationForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getBrakeForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getSteeringForce(), 1.0, 1e-5);
			TS_ASSERT(obj3.getBrakeLights() == true);
			TS_ASSERT(obj3.getFlashingLightsLeft() == true);
			TS_ASSERT(obj3.getFlashingLightsRight() == true);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive;
	
			ForceControl obj1;
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), 0.0, 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == false);
			TS_ASSERT(obj1.getFlashingLightsLeft() == false);
			TS_ASSERT(obj1.getFlashingLightsRight() == false);
	
			ForceControl obj2;
			TS_ASSERT_DELTA(obj2.getAccelerationForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getBrakeForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSteeringForce(), 0.0, 1e-5);
			TS_ASSERT(obj2.getBrakeLights() == false);
			TS_ASSERT(obj2.getFlashingLightsLeft() == false);
			TS_ASSERT(obj2.getFlashingLightsRight() == false);
	
			obj1.setAccelerationForce(1.0);
			obj1.setBrakeForce(1.0);
			obj1.setSteeringForce(1.0);
			obj1.setBrakeLights(true);
			obj1.setFlashingLightsLeft(true);
			obj1.setFlashingLightsRight(true);
	
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), 1.0, 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == true);
			TS_ASSERT(obj1.getFlashingLightsLeft() == true);
			TS_ASSERT(obj1.getFlashingLightsRight() == true);
	
			obj2 = obj1;
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), obj2.getAccelerationForce(), 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), obj2.getBrakeForce(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), obj2.getSteeringForce(), 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == obj2.getBrakeLights());
			TS_ASSERT(obj1.getFlashingLightsLeft() == obj2.getFlashingLightsLeft());
			TS_ASSERT(obj1.getFlashingLightsRight() == obj2.getFlashingLightsRight());
	
			TS_ASSERT_DELTA(obj2.getAccelerationForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getBrakeForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSteeringForce(), 1.0, 1e-5);
			TS_ASSERT(obj2.getBrakeLights() == true);
			TS_ASSERT(obj2.getFlashingLightsLeft() == true);
			TS_ASSERT(obj2.getFlashingLightsRight() == true);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive;
	
			ForceControl obj1;
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), 0.0, 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == false);
			TS_ASSERT(obj1.getFlashingLightsLeft() == false);
			TS_ASSERT(obj1.getFlashingLightsRight() == false);
	
			ForceControl obj2;
			TS_ASSERT_DELTA(obj2.getAccelerationForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getBrakeForce(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSteeringForce(), 0.0, 1e-5);
			TS_ASSERT(obj2.getBrakeLights() == false);
			TS_ASSERT(obj2.getFlashingLightsLeft() == false);
			TS_ASSERT(obj2.getFlashingLightsRight() == false);
	
			obj1.setAccelerationForce(1.0);
			obj1.setBrakeForce(1.0);
			obj1.setSteeringForce(1.0);
			obj1.setBrakeLights(true);
			obj1.setFlashingLightsLeft(true);
			obj1.setFlashingLightsRight(true);
	
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), 1.0, 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == true);
			TS_ASSERT(obj1.getFlashingLightsLeft() == true);
			TS_ASSERT(obj1.getFlashingLightsRight() == true);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT_DELTA(obj1.getAccelerationForce(), obj2.getAccelerationForce(), 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakeForce(), obj2.getBrakeForce(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSteeringForce(), obj2.getSteeringForce(), 1e-5);
			TS_ASSERT(obj1.getBrakeLights() == obj2.getBrakeLights());
			TS_ASSERT(obj1.getFlashingLightsLeft() == obj2.getFlashingLightsLeft());
			TS_ASSERT(obj1.getFlashingLightsRight() == obj2.getFlashingLightsRight());
	
			TS_ASSERT_DELTA(obj2.getAccelerationForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getBrakeForce(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSteeringForce(), 1.0, 1e-5);
			TS_ASSERT(obj2.getBrakeLights() == true);
			TS_ASSERT(obj2.getFlashingLightsLeft() == true);
			TS_ASSERT(obj2.getFlashingLightsRight() == true);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_FORCECONTROL_TESTSUITE_H*/
