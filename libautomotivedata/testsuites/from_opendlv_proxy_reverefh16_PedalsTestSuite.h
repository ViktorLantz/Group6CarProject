/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FROM_OPENDLV_PROXY_REVEREFH16_PEDALS_TESTSUITE_H
#define FROM_OPENDLV_PROXY_REVEREFH16_PEDALS_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/from/opendlv/proxy/reverefh16/Pedals.h"


class from_opendlv_proxy_reverefh16_Pedals_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Pedals obj1;
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), 0.0, 1e-5);
	
			obj1.setAccelerationpedalposition(1.0);
			obj1.setBrakepedalposition(1.0);
			obj1.setTorsionbartorque(1.0);
	
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), 1.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Pedals obj1;
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), 0.0, 1e-5);
	
			Pedals obj2(obj1);
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), obj2.getAccelerationpedalposition(), 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), obj2.getBrakepedalposition(), 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), obj2.getTorsionbartorque(), 1e-5);
	
			obj1.setAccelerationpedalposition(1.0);
			obj1.setBrakepedalposition(1.0);
			obj1.setTorsionbartorque(1.0);
	
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), 1.0, 1e-5);
	
			Pedals obj3(obj1);
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), obj3.getAccelerationpedalposition(), 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), obj3.getBrakepedalposition(), 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), obj3.getTorsionbartorque(), 1e-5);
	
			TS_ASSERT_DELTA(obj3.getAccelerationpedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getBrakepedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getTorsionbartorque(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Pedals obj1;
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), 0.0, 1e-5);
	
			Pedals obj2;
			TS_ASSERT_DELTA(obj2.getAccelerationpedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getBrakepedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getTorsionbartorque(), 0.0, 1e-5);
	
			obj1.setAccelerationpedalposition(1.0);
			obj1.setBrakepedalposition(1.0);
			obj1.setTorsionbartorque(1.0);
	
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), 1.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), obj2.getAccelerationpedalposition(), 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), obj2.getBrakepedalposition(), 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), obj2.getTorsionbartorque(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getAccelerationpedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getBrakepedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getTorsionbartorque(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Pedals obj1;
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), 0.0, 1e-5);
	
			Pedals obj2;
			TS_ASSERT_DELTA(obj2.getAccelerationpedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getBrakepedalposition(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getTorsionbartorque(), 0.0, 1e-5);
	
			obj1.setAccelerationpedalposition(1.0);
			obj1.setBrakepedalposition(1.0);
			obj1.setTorsionbartorque(1.0);
	
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), 1.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT_DELTA(obj1.getAccelerationpedalposition(), obj2.getAccelerationpedalposition(), 1e-5);
			TS_ASSERT_DELTA(obj1.getBrakepedalposition(), obj2.getBrakepedalposition(), 1e-5);
			TS_ASSERT_DELTA(obj1.getTorsionbartorque(), obj2.getTorsionbartorque(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getAccelerationpedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getBrakepedalposition(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getTorsionbartorque(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*FROM_OPENDLV_PROXY_REVEREFH16_PEDALS_TESTSUITE_H*/
