/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FROM_OPENDLV_PROXY_REVEREFH16_VEHICLESTATE_TESTSUITE_H
#define FROM_OPENDLV_PROXY_REVEREFH16_VEHICLESTATE_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/from/opendlv/proxy/reverefh16/VehicleState.h"


class from_opendlv_proxy_reverefh16_VehicleState_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			VehicleState obj1;
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), 0.0, 1e-5);
	
			obj1.setAcceleration_x(1.0);
			obj1.setAcceleration_y(1.0);
			obj1.setYawrate(1.0);
	
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), 1.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			VehicleState obj1;
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), 0.0, 1e-5);
	
			VehicleState obj2(obj1);
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), obj2.getAcceleration_x(), 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), obj2.getAcceleration_y(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), obj2.getYawrate(), 1e-5);
	
			obj1.setAcceleration_x(1.0);
			obj1.setAcceleration_y(1.0);
			obj1.setYawrate(1.0);
	
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), 1.0, 1e-5);
	
			VehicleState obj3(obj1);
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), obj3.getAcceleration_x(), 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), obj3.getAcceleration_y(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), obj3.getYawrate(), 1e-5);
	
			TS_ASSERT_DELTA(obj3.getAcceleration_x(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getAcceleration_y(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getYawrate(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			VehicleState obj1;
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), 0.0, 1e-5);
	
			VehicleState obj2;
			TS_ASSERT_DELTA(obj2.getAcceleration_x(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getAcceleration_y(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYawrate(), 0.0, 1e-5);
	
			obj1.setAcceleration_x(1.0);
			obj1.setAcceleration_y(1.0);
			obj1.setYawrate(1.0);
	
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), 1.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), obj2.getAcceleration_x(), 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), obj2.getAcceleration_y(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), obj2.getYawrate(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getAcceleration_x(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getAcceleration_y(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYawrate(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			VehicleState obj1;
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), 0.0, 1e-5);
	
			VehicleState obj2;
			TS_ASSERT_DELTA(obj2.getAcceleration_x(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getAcceleration_y(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYawrate(), 0.0, 1e-5);
	
			obj1.setAcceleration_x(1.0);
			obj1.setAcceleration_y(1.0);
			obj1.setYawrate(1.0);
	
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), 1.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT_DELTA(obj1.getAcceleration_x(), obj2.getAcceleration_x(), 1e-5);
			TS_ASSERT_DELTA(obj1.getAcceleration_y(), obj2.getAcceleration_y(), 1e-5);
			TS_ASSERT_DELTA(obj1.getYawrate(), obj2.getYawrate(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getAcceleration_x(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getAcceleration_y(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getYawrate(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*FROM_OPENDLV_PROXY_REVEREFH16_VEHICLESTATE_TESTSUITE_H*/
