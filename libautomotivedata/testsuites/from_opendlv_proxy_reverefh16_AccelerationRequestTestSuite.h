/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FROM_OPENDLV_PROXY_REVEREFH16_ACCELERATIONREQUEST_TESTSUITE_H
#define FROM_OPENDLV_PROXY_REVEREFH16_ACCELERATIONREQUEST_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/from/opendlv/proxy/reverefh16/AccelerationRequest.h"


class from_opendlv_proxy_reverefh16_AccelerationRequest_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			AccelerationRequest obj1;
			TS_ASSERT(obj1.getEnable_accrequest() == false);
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), 0.0, 1e-5);
	
			obj1.setEnable_accrequest(true);
			obj1.setAccelerationrequest(1.0);
	
			TS_ASSERT(obj1.getEnable_accrequest() == true);
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), 1.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			AccelerationRequest obj1;
			TS_ASSERT(obj1.getEnable_accrequest() == false);
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), 0.0, 1e-5);
	
			AccelerationRequest obj2(obj1);
			TS_ASSERT(obj1.getEnable_accrequest() == obj2.getEnable_accrequest());
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), obj2.getAccelerationrequest(), 1e-5);
	
			obj1.setEnable_accrequest(true);
			obj1.setAccelerationrequest(1.0);
	
			TS_ASSERT(obj1.getEnable_accrequest() == true);
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), 1.0, 1e-5);
	
			AccelerationRequest obj3(obj1);
			TS_ASSERT(obj1.getEnable_accrequest() == obj3.getEnable_accrequest());
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), obj3.getAccelerationrequest(), 1e-5);
	
			TS_ASSERT(obj3.getEnable_accrequest() == true);
			TS_ASSERT_DELTA(obj3.getAccelerationrequest(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			AccelerationRequest obj1;
			TS_ASSERT(obj1.getEnable_accrequest() == false);
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), 0.0, 1e-5);
	
			AccelerationRequest obj2;
			TS_ASSERT(obj2.getEnable_accrequest() == false);
			TS_ASSERT_DELTA(obj2.getAccelerationrequest(), 0.0, 1e-5);
	
			obj1.setEnable_accrequest(true);
			obj1.setAccelerationrequest(1.0);
	
			TS_ASSERT(obj1.getEnable_accrequest() == true);
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), 1.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getEnable_accrequest() == obj2.getEnable_accrequest());
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), obj2.getAccelerationrequest(), 1e-5);
	
			TS_ASSERT(obj2.getEnable_accrequest() == true);
			TS_ASSERT_DELTA(obj2.getAccelerationrequest(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			AccelerationRequest obj1;
			TS_ASSERT(obj1.getEnable_accrequest() == false);
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), 0.0, 1e-5);
	
			AccelerationRequest obj2;
			TS_ASSERT(obj2.getEnable_accrequest() == false);
			TS_ASSERT_DELTA(obj2.getAccelerationrequest(), 0.0, 1e-5);
	
			obj1.setEnable_accrequest(true);
			obj1.setAccelerationrequest(1.0);
	
			TS_ASSERT(obj1.getEnable_accrequest() == true);
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), 1.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getEnable_accrequest() == obj2.getEnable_accrequest());
			TS_ASSERT_DELTA(obj1.getAccelerationrequest(), obj2.getAccelerationrequest(), 1e-5);
	
			TS_ASSERT(obj2.getEnable_accrequest() == true);
			TS_ASSERT_DELTA(obj2.getAccelerationrequest(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*FROM_OPENDLV_PROXY_REVEREFH16_ACCELERATIONREQUEST_TESTSUITE_H*/
