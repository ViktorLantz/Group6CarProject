/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_CAROLOCUP_SENSORS_TESTSUITE_H
#define AUTOMOTIVE_CAROLOCUP_SENSORS_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/carolocup/Sensors.h"


class automotive_carolocup_Sensors_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive::carolocup;
	
			Sensors obj1;
			TS_ASSERT(obj1.getUsFront() == 0);
			TS_ASSERT(obj1.getUsRear() == 0);
			TS_ASSERT(obj1.getIrFrontRight() == 0);
			TS_ASSERT(obj1.getIrRearRight() == 0);
			TS_ASSERT(obj1.getIrBackLeft() == 0);
			TS_ASSERT(obj1.getIrBackRight() == 0);
			TS_ASSERT(obj1.getGyroHeading() == 0);
			TS_ASSERT(obj1.getWheelRearLeft() == 0);
			TS_ASSERT(obj1.getWheelRearRight() == 0);
			TS_ASSERT(obj1.getButtonState() == 0);
			TS_ASSERT(obj1.getLightReading() == 0);
	
			obj1.setUsFront(4000);
			obj1.setUsRear(4000);
			obj1.setIrFrontRight(4000);
			obj1.setIrRearRight(4000);
			obj1.setIrBackLeft(4000);
			obj1.setIrBackRight(4000);
			obj1.setGyroHeading(4000);
			obj1.setWheelRearLeft(4000);
			obj1.setWheelRearRight(4000);
			obj1.setButtonState(4000);
			obj1.setLightReading(4000);
	
			TS_ASSERT(obj1.getUsFront() == 4000);
			TS_ASSERT(obj1.getUsRear() == 4000);
			TS_ASSERT(obj1.getIrFrontRight() == 4000);
			TS_ASSERT(obj1.getIrRearRight() == 4000);
			TS_ASSERT(obj1.getIrBackLeft() == 4000);
			TS_ASSERT(obj1.getIrBackRight() == 4000);
			TS_ASSERT(obj1.getGyroHeading() == 4000);
			TS_ASSERT(obj1.getWheelRearLeft() == 4000);
			TS_ASSERT(obj1.getWheelRearRight() == 4000);
			TS_ASSERT(obj1.getButtonState() == 4000);
			TS_ASSERT(obj1.getLightReading() == 4000);
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive::carolocup;
	
			Sensors obj1;
			TS_ASSERT(obj1.getUsFront() == 0);
			TS_ASSERT(obj1.getUsRear() == 0);
			TS_ASSERT(obj1.getIrFrontRight() == 0);
			TS_ASSERT(obj1.getIrRearRight() == 0);
			TS_ASSERT(obj1.getIrBackLeft() == 0);
			TS_ASSERT(obj1.getIrBackRight() == 0);
			TS_ASSERT(obj1.getGyroHeading() == 0);
			TS_ASSERT(obj1.getWheelRearLeft() == 0);
			TS_ASSERT(obj1.getWheelRearRight() == 0);
			TS_ASSERT(obj1.getButtonState() == 0);
			TS_ASSERT(obj1.getLightReading() == 0);
	
			Sensors obj2(obj1);
			TS_ASSERT(obj1.getUsFront() == obj2.getUsFront());
			TS_ASSERT(obj1.getUsRear() == obj2.getUsRear());
			TS_ASSERT(obj1.getIrFrontRight() == obj2.getIrFrontRight());
			TS_ASSERT(obj1.getIrRearRight() == obj2.getIrRearRight());
			TS_ASSERT(obj1.getIrBackLeft() == obj2.getIrBackLeft());
			TS_ASSERT(obj1.getIrBackRight() == obj2.getIrBackRight());
			TS_ASSERT(obj1.getGyroHeading() == obj2.getGyroHeading());
			TS_ASSERT(obj1.getWheelRearLeft() == obj2.getWheelRearLeft());
			TS_ASSERT(obj1.getWheelRearRight() == obj2.getWheelRearRight());
			TS_ASSERT(obj1.getButtonState() == obj2.getButtonState());
			TS_ASSERT(obj1.getLightReading() == obj2.getLightReading());
	
			obj1.setUsFront(4000);
			obj1.setUsRear(4000);
			obj1.setIrFrontRight(4000);
			obj1.setIrRearRight(4000);
			obj1.setIrBackLeft(4000);
			obj1.setIrBackRight(4000);
			obj1.setGyroHeading(4000);
			obj1.setWheelRearLeft(4000);
			obj1.setWheelRearRight(4000);
			obj1.setButtonState(4000);
			obj1.setLightReading(4000);
	
			TS_ASSERT(obj1.getUsFront() == 4000);
			TS_ASSERT(obj1.getUsRear() == 4000);
			TS_ASSERT(obj1.getIrFrontRight() == 4000);
			TS_ASSERT(obj1.getIrRearRight() == 4000);
			TS_ASSERT(obj1.getIrBackLeft() == 4000);
			TS_ASSERT(obj1.getIrBackRight() == 4000);
			TS_ASSERT(obj1.getGyroHeading() == 4000);
			TS_ASSERT(obj1.getWheelRearLeft() == 4000);
			TS_ASSERT(obj1.getWheelRearRight() == 4000);
			TS_ASSERT(obj1.getButtonState() == 4000);
			TS_ASSERT(obj1.getLightReading() == 4000);
	
			Sensors obj3(obj1);
			TS_ASSERT(obj1.getUsFront() == obj3.getUsFront());
			TS_ASSERT(obj1.getUsRear() == obj3.getUsRear());
			TS_ASSERT(obj1.getIrFrontRight() == obj3.getIrFrontRight());
			TS_ASSERT(obj1.getIrRearRight() == obj3.getIrRearRight());
			TS_ASSERT(obj1.getIrBackLeft() == obj3.getIrBackLeft());
			TS_ASSERT(obj1.getIrBackRight() == obj3.getIrBackRight());
			TS_ASSERT(obj1.getGyroHeading() == obj3.getGyroHeading());
			TS_ASSERT(obj1.getWheelRearLeft() == obj3.getWheelRearLeft());
			TS_ASSERT(obj1.getWheelRearRight() == obj3.getWheelRearRight());
			TS_ASSERT(obj1.getButtonState() == obj3.getButtonState());
			TS_ASSERT(obj1.getLightReading() == obj3.getLightReading());
	
			TS_ASSERT(obj3.getUsFront() == 4000);
			TS_ASSERT(obj3.getUsRear() == 4000);
			TS_ASSERT(obj3.getIrFrontRight() == 4000);
			TS_ASSERT(obj3.getIrRearRight() == 4000);
			TS_ASSERT(obj3.getIrBackLeft() == 4000);
			TS_ASSERT(obj3.getIrBackRight() == 4000);
			TS_ASSERT(obj3.getGyroHeading() == 4000);
			TS_ASSERT(obj3.getWheelRearLeft() == 4000);
			TS_ASSERT(obj3.getWheelRearRight() == 4000);
			TS_ASSERT(obj3.getButtonState() == 4000);
			TS_ASSERT(obj3.getLightReading() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive::carolocup;
	
			Sensors obj1;
			TS_ASSERT(obj1.getUsFront() == 0);
			TS_ASSERT(obj1.getUsRear() == 0);
			TS_ASSERT(obj1.getIrFrontRight() == 0);
			TS_ASSERT(obj1.getIrRearRight() == 0);
			TS_ASSERT(obj1.getIrBackLeft() == 0);
			TS_ASSERT(obj1.getIrBackRight() == 0);
			TS_ASSERT(obj1.getGyroHeading() == 0);
			TS_ASSERT(obj1.getWheelRearLeft() == 0);
			TS_ASSERT(obj1.getWheelRearRight() == 0);
			TS_ASSERT(obj1.getButtonState() == 0);
			TS_ASSERT(obj1.getLightReading() == 0);
	
			Sensors obj2;
			TS_ASSERT(obj2.getUsFront() == 0);
			TS_ASSERT(obj2.getUsRear() == 0);
			TS_ASSERT(obj2.getIrFrontRight() == 0);
			TS_ASSERT(obj2.getIrRearRight() == 0);
			TS_ASSERT(obj2.getIrBackLeft() == 0);
			TS_ASSERT(obj2.getIrBackRight() == 0);
			TS_ASSERT(obj2.getGyroHeading() == 0);
			TS_ASSERT(obj2.getWheelRearLeft() == 0);
			TS_ASSERT(obj2.getWheelRearRight() == 0);
			TS_ASSERT(obj2.getButtonState() == 0);
			TS_ASSERT(obj2.getLightReading() == 0);
	
			obj1.setUsFront(4000);
			obj1.setUsRear(4000);
			obj1.setIrFrontRight(4000);
			obj1.setIrRearRight(4000);
			obj1.setIrBackLeft(4000);
			obj1.setIrBackRight(4000);
			obj1.setGyroHeading(4000);
			obj1.setWheelRearLeft(4000);
			obj1.setWheelRearRight(4000);
			obj1.setButtonState(4000);
			obj1.setLightReading(4000);
	
			TS_ASSERT(obj1.getUsFront() == 4000);
			TS_ASSERT(obj1.getUsRear() == 4000);
			TS_ASSERT(obj1.getIrFrontRight() == 4000);
			TS_ASSERT(obj1.getIrRearRight() == 4000);
			TS_ASSERT(obj1.getIrBackLeft() == 4000);
			TS_ASSERT(obj1.getIrBackRight() == 4000);
			TS_ASSERT(obj1.getGyroHeading() == 4000);
			TS_ASSERT(obj1.getWheelRearLeft() == 4000);
			TS_ASSERT(obj1.getWheelRearRight() == 4000);
			TS_ASSERT(obj1.getButtonState() == 4000);
			TS_ASSERT(obj1.getLightReading() == 4000);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getUsFront() == obj2.getUsFront());
			TS_ASSERT(obj1.getUsRear() == obj2.getUsRear());
			TS_ASSERT(obj1.getIrFrontRight() == obj2.getIrFrontRight());
			TS_ASSERT(obj1.getIrRearRight() == obj2.getIrRearRight());
			TS_ASSERT(obj1.getIrBackLeft() == obj2.getIrBackLeft());
			TS_ASSERT(obj1.getIrBackRight() == obj2.getIrBackRight());
			TS_ASSERT(obj1.getGyroHeading() == obj2.getGyroHeading());
			TS_ASSERT(obj1.getWheelRearLeft() == obj2.getWheelRearLeft());
			TS_ASSERT(obj1.getWheelRearRight() == obj2.getWheelRearRight());
			TS_ASSERT(obj1.getButtonState() == obj2.getButtonState());
			TS_ASSERT(obj1.getLightReading() == obj2.getLightReading());
	
			TS_ASSERT(obj2.getUsFront() == 4000);
			TS_ASSERT(obj2.getUsRear() == 4000);
			TS_ASSERT(obj2.getIrFrontRight() == 4000);
			TS_ASSERT(obj2.getIrRearRight() == 4000);
			TS_ASSERT(obj2.getIrBackLeft() == 4000);
			TS_ASSERT(obj2.getIrBackRight() == 4000);
			TS_ASSERT(obj2.getGyroHeading() == 4000);
			TS_ASSERT(obj2.getWheelRearLeft() == 4000);
			TS_ASSERT(obj2.getWheelRearRight() == 4000);
			TS_ASSERT(obj2.getButtonState() == 4000);
			TS_ASSERT(obj2.getLightReading() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive::carolocup;
	
			Sensors obj1;
			TS_ASSERT(obj1.getUsFront() == 0);
			TS_ASSERT(obj1.getUsRear() == 0);
			TS_ASSERT(obj1.getIrFrontRight() == 0);
			TS_ASSERT(obj1.getIrRearRight() == 0);
			TS_ASSERT(obj1.getIrBackLeft() == 0);
			TS_ASSERT(obj1.getIrBackRight() == 0);
			TS_ASSERT(obj1.getGyroHeading() == 0);
			TS_ASSERT(obj1.getWheelRearLeft() == 0);
			TS_ASSERT(obj1.getWheelRearRight() == 0);
			TS_ASSERT(obj1.getButtonState() == 0);
			TS_ASSERT(obj1.getLightReading() == 0);
	
			Sensors obj2;
			TS_ASSERT(obj2.getUsFront() == 0);
			TS_ASSERT(obj2.getUsRear() == 0);
			TS_ASSERT(obj2.getIrFrontRight() == 0);
			TS_ASSERT(obj2.getIrRearRight() == 0);
			TS_ASSERT(obj2.getIrBackLeft() == 0);
			TS_ASSERT(obj2.getIrBackRight() == 0);
			TS_ASSERT(obj2.getGyroHeading() == 0);
			TS_ASSERT(obj2.getWheelRearLeft() == 0);
			TS_ASSERT(obj2.getWheelRearRight() == 0);
			TS_ASSERT(obj2.getButtonState() == 0);
			TS_ASSERT(obj2.getLightReading() == 0);
	
			obj1.setUsFront(4000);
			obj1.setUsRear(4000);
			obj1.setIrFrontRight(4000);
			obj1.setIrRearRight(4000);
			obj1.setIrBackLeft(4000);
			obj1.setIrBackRight(4000);
			obj1.setGyroHeading(4000);
			obj1.setWheelRearLeft(4000);
			obj1.setWheelRearRight(4000);
			obj1.setButtonState(4000);
			obj1.setLightReading(4000);
	
			TS_ASSERT(obj1.getUsFront() == 4000);
			TS_ASSERT(obj1.getUsRear() == 4000);
			TS_ASSERT(obj1.getIrFrontRight() == 4000);
			TS_ASSERT(obj1.getIrRearRight() == 4000);
			TS_ASSERT(obj1.getIrBackLeft() == 4000);
			TS_ASSERT(obj1.getIrBackRight() == 4000);
			TS_ASSERT(obj1.getGyroHeading() == 4000);
			TS_ASSERT(obj1.getWheelRearLeft() == 4000);
			TS_ASSERT(obj1.getWheelRearRight() == 4000);
			TS_ASSERT(obj1.getButtonState() == 4000);
			TS_ASSERT(obj1.getLightReading() == 4000);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getUsFront() == obj2.getUsFront());
			TS_ASSERT(obj1.getUsRear() == obj2.getUsRear());
			TS_ASSERT(obj1.getIrFrontRight() == obj2.getIrFrontRight());
			TS_ASSERT(obj1.getIrRearRight() == obj2.getIrRearRight());
			TS_ASSERT(obj1.getIrBackLeft() == obj2.getIrBackLeft());
			TS_ASSERT(obj1.getIrBackRight() == obj2.getIrBackRight());
			TS_ASSERT(obj1.getGyroHeading() == obj2.getGyroHeading());
			TS_ASSERT(obj1.getWheelRearLeft() == obj2.getWheelRearLeft());
			TS_ASSERT(obj1.getWheelRearRight() == obj2.getWheelRearRight());
			TS_ASSERT(obj1.getButtonState() == obj2.getButtonState());
			TS_ASSERT(obj1.getLightReading() == obj2.getLightReading());
	
			TS_ASSERT(obj2.getUsFront() == 4000);
			TS_ASSERT(obj2.getUsRear() == 4000);
			TS_ASSERT(obj2.getIrFrontRight() == 4000);
			TS_ASSERT(obj2.getIrRearRight() == 4000);
			TS_ASSERT(obj2.getIrBackLeft() == 4000);
			TS_ASSERT(obj2.getIrBackRight() == 4000);
			TS_ASSERT(obj2.getGyroHeading() == 4000);
			TS_ASSERT(obj2.getWheelRearLeft() == 4000);
			TS_ASSERT(obj2.getWheelRearRight() == 4000);
			TS_ASSERT(obj2.getButtonState() == 4000);
			TS_ASSERT(obj2.getLightReading() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_CAROLOCUP_SENSORS_TESTSUITE_H*/
