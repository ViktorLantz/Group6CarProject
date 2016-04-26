/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_VEHICLEDATA_TESTSUITE_H
#define AUTOMOTIVE_VEHICLEDATA_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/VehicleData.h"

#include "automotivedata/generated/cartesian/Point2.h"
#include "automotivedata/generated/cartesian/Point2.h"

class automotive_VehicleData_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive;
	
			VehicleData obj1;
			TS_ASSERT_DELTA(obj1.getHeading(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), 0.0, 1e-5);
	
			obj1.setHeading(1.0);
			obj1.setAbsTraveledPath(1.0);
			obj1.setRelTraveledPath(1.0);
			obj1.setSpeed(1.0);
			obj1.setV_log(1.0);
			obj1.setV_batt(1.0);
			obj1.setTemp(1.0);
	
			TS_ASSERT_DELTA(obj1.getHeading(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), 1.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive;
	
			VehicleData obj1;
			TS_ASSERT_DELTA(obj1.getHeading(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), 0.0, 1e-5);
	
			VehicleData obj2(obj1);
			TS_ASSERT_DELTA(obj1.getHeading(), obj2.getHeading(), 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), obj2.getAbsTraveledPath(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), obj2.getRelTraveledPath(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), obj2.getSpeed(), 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), obj2.getV_log(), 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), obj2.getV_batt(), 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), obj2.getTemp(), 1e-5);
	
			obj1.setHeading(1.0);
			obj1.setAbsTraveledPath(1.0);
			obj1.setRelTraveledPath(1.0);
			obj1.setSpeed(1.0);
			obj1.setV_log(1.0);
			obj1.setV_batt(1.0);
			obj1.setTemp(1.0);
	
			TS_ASSERT_DELTA(obj1.getHeading(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), 1.0, 1e-5);
	
			VehicleData obj3(obj1);
			TS_ASSERT_DELTA(obj1.getHeading(), obj3.getHeading(), 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), obj3.getAbsTraveledPath(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), obj3.getRelTraveledPath(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), obj3.getSpeed(), 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), obj3.getV_log(), 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), obj3.getV_batt(), 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), obj3.getTemp(), 1e-5);
	
			TS_ASSERT_DELTA(obj3.getHeading(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getAbsTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getRelTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getSpeed(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getV_log(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getV_batt(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getTemp(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive;
	
			VehicleData obj1;
			TS_ASSERT_DELTA(obj1.getHeading(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), 0.0, 1e-5);
	
			VehicleData obj2;
			TS_ASSERT_DELTA(obj2.getHeading(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getAbsTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getRelTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSpeed(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getV_log(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getV_batt(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getTemp(), 0.0, 1e-5);
	
			obj1.setHeading(1.0);
			obj1.setAbsTraveledPath(1.0);
			obj1.setRelTraveledPath(1.0);
			obj1.setSpeed(1.0);
			obj1.setV_log(1.0);
			obj1.setV_batt(1.0);
			obj1.setTemp(1.0);
	
			TS_ASSERT_DELTA(obj1.getHeading(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), 1.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT_DELTA(obj1.getHeading(), obj2.getHeading(), 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), obj2.getAbsTraveledPath(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), obj2.getRelTraveledPath(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), obj2.getSpeed(), 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), obj2.getV_log(), 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), obj2.getV_batt(), 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), obj2.getTemp(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getHeading(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getAbsTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getRelTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSpeed(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getV_log(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getV_batt(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getTemp(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive;
	
			VehicleData obj1;
			TS_ASSERT_DELTA(obj1.getHeading(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), 0.0, 1e-5);
	
			VehicleData obj2;
			TS_ASSERT_DELTA(obj2.getHeading(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getAbsTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getRelTraveledPath(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSpeed(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getV_log(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getV_batt(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getTemp(), 0.0, 1e-5);
	
			obj1.setHeading(1.0);
			obj1.setAbsTraveledPath(1.0);
			obj1.setRelTraveledPath(1.0);
			obj1.setSpeed(1.0);
			obj1.setV_log(1.0);
			obj1.setV_batt(1.0);
			obj1.setTemp(1.0);
	
			TS_ASSERT_DELTA(obj1.getHeading(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), 1.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT_DELTA(obj1.getHeading(), obj2.getHeading(), 1e-5);
			TS_ASSERT_DELTA(obj1.getAbsTraveledPath(), obj2.getAbsTraveledPath(), 1e-5);
			TS_ASSERT_DELTA(obj1.getRelTraveledPath(), obj2.getRelTraveledPath(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSpeed(), obj2.getSpeed(), 1e-5);
			TS_ASSERT_DELTA(obj1.getV_log(), obj2.getV_log(), 1e-5);
			TS_ASSERT_DELTA(obj1.getV_batt(), obj2.getV_batt(), 1e-5);
			TS_ASSERT_DELTA(obj1.getTemp(), obj2.getTemp(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getHeading(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getAbsTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getRelTraveledPath(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSpeed(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getV_log(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getV_batt(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getTemp(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_VEHICLEDATA_TESTSUITE_H*/
