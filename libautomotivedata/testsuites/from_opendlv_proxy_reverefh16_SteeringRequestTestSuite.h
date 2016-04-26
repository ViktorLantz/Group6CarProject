/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FROM_OPENDLV_PROXY_REVEREFH16_STEERINGREQUEST_TESTSUITE_H
#define FROM_OPENDLV_PROXY_REVEREFH16_STEERINGREQUEST_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/from/opendlv/proxy/reverefh16/SteeringRequest.h"


class from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			SteeringRequest obj1;
			TS_ASSERT(obj1.getEnable_steerreq() == false);
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), 0.0, 1e-5);
	
			obj1.setEnable_steerreq(true);
			obj1.setSteerreq_rwa(1.0);
			obj1.setSteerreq_deltatrq(1.0);
	
			TS_ASSERT(obj1.getEnable_steerreq() == true);
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), 1.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			SteeringRequest obj1;
			TS_ASSERT(obj1.getEnable_steerreq() == false);
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), 0.0, 1e-5);
	
			SteeringRequest obj2(obj1);
			TS_ASSERT(obj1.getEnable_steerreq() == obj2.getEnable_steerreq());
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), obj2.getSteerreq_rwa(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), obj2.getSteerreq_deltatrq(), 1e-5);
	
			obj1.setEnable_steerreq(true);
			obj1.setSteerreq_rwa(1.0);
			obj1.setSteerreq_deltatrq(1.0);
	
			TS_ASSERT(obj1.getEnable_steerreq() == true);
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), 1.0, 1e-5);
	
			SteeringRequest obj3(obj1);
			TS_ASSERT(obj1.getEnable_steerreq() == obj3.getEnable_steerreq());
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), obj3.getSteerreq_rwa(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), obj3.getSteerreq_deltatrq(), 1e-5);
	
			TS_ASSERT(obj3.getEnable_steerreq() == true);
			TS_ASSERT_DELTA(obj3.getSteerreq_rwa(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getSteerreq_deltatrq(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			SteeringRequest obj1;
			TS_ASSERT(obj1.getEnable_steerreq() == false);
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), 0.0, 1e-5);
	
			SteeringRequest obj2;
			TS_ASSERT(obj2.getEnable_steerreq() == false);
			TS_ASSERT_DELTA(obj2.getSteerreq_rwa(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSteerreq_deltatrq(), 0.0, 1e-5);
	
			obj1.setEnable_steerreq(true);
			obj1.setSteerreq_rwa(1.0);
			obj1.setSteerreq_deltatrq(1.0);
	
			TS_ASSERT(obj1.getEnable_steerreq() == true);
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), 1.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getEnable_steerreq() == obj2.getEnable_steerreq());
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), obj2.getSteerreq_rwa(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), obj2.getSteerreq_deltatrq(), 1e-5);
	
			TS_ASSERT(obj2.getEnable_steerreq() == true);
			TS_ASSERT_DELTA(obj2.getSteerreq_rwa(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSteerreq_deltatrq(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			SteeringRequest obj1;
			TS_ASSERT(obj1.getEnable_steerreq() == false);
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), 0.0, 1e-5);
	
			SteeringRequest obj2;
			TS_ASSERT(obj2.getEnable_steerreq() == false);
			TS_ASSERT_DELTA(obj2.getSteerreq_rwa(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSteerreq_deltatrq(), 0.0, 1e-5);
	
			obj1.setEnable_steerreq(true);
			obj1.setSteerreq_rwa(1.0);
			obj1.setSteerreq_deltatrq(1.0);
	
			TS_ASSERT(obj1.getEnable_steerreq() == true);
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), 1.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getEnable_steerreq() == obj2.getEnable_steerreq());
			TS_ASSERT_DELTA(obj1.getSteerreq_rwa(), obj2.getSteerreq_rwa(), 1e-5);
			TS_ASSERT_DELTA(obj1.getSteerreq_deltatrq(), obj2.getSteerreq_deltatrq(), 1e-5);
	
			TS_ASSERT(obj2.getEnable_steerreq() == true);
			TS_ASSERT_DELTA(obj2.getSteerreq_rwa(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getSteerreq_deltatrq(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*FROM_OPENDLV_PROXY_REVEREFH16_STEERINGREQUEST_TESTSUITE_H*/
