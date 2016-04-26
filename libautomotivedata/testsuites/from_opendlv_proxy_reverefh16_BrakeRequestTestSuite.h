/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FROM_OPENDLV_PROXY_REVEREFH16_BRAKEREQUEST_TESTSUITE_H
#define FROM_OPENDLV_PROXY_REVEREFH16_BRAKEREQUEST_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/from/opendlv/proxy/reverefh16/BrakeRequest.h"


class from_opendlv_proxy_reverefh16_BrakeRequest_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			BrakeRequest obj1;
			TS_ASSERT(obj1.getEnable_brakerequest() == false);
			TS_ASSERT_DELTA(obj1.getBrakerequest(), 0.0, 1e-5);
	
			obj1.setEnable_brakerequest(true);
			obj1.setBrakerequest(1.0);
	
			TS_ASSERT(obj1.getEnable_brakerequest() == true);
			TS_ASSERT_DELTA(obj1.getBrakerequest(), 1.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			BrakeRequest obj1;
			TS_ASSERT(obj1.getEnable_brakerequest() == false);
			TS_ASSERT_DELTA(obj1.getBrakerequest(), 0.0, 1e-5);
	
			BrakeRequest obj2(obj1);
			TS_ASSERT(obj1.getEnable_brakerequest() == obj2.getEnable_brakerequest());
			TS_ASSERT_DELTA(obj1.getBrakerequest(), obj2.getBrakerequest(), 1e-5);
	
			obj1.setEnable_brakerequest(true);
			obj1.setBrakerequest(1.0);
	
			TS_ASSERT(obj1.getEnable_brakerequest() == true);
			TS_ASSERT_DELTA(obj1.getBrakerequest(), 1.0, 1e-5);
	
			BrakeRequest obj3(obj1);
			TS_ASSERT(obj1.getEnable_brakerequest() == obj3.getEnable_brakerequest());
			TS_ASSERT_DELTA(obj1.getBrakerequest(), obj3.getBrakerequest(), 1e-5);
	
			TS_ASSERT(obj3.getEnable_brakerequest() == true);
			TS_ASSERT_DELTA(obj3.getBrakerequest(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			BrakeRequest obj1;
			TS_ASSERT(obj1.getEnable_brakerequest() == false);
			TS_ASSERT_DELTA(obj1.getBrakerequest(), 0.0, 1e-5);
	
			BrakeRequest obj2;
			TS_ASSERT(obj2.getEnable_brakerequest() == false);
			TS_ASSERT_DELTA(obj2.getBrakerequest(), 0.0, 1e-5);
	
			obj1.setEnable_brakerequest(true);
			obj1.setBrakerequest(1.0);
	
			TS_ASSERT(obj1.getEnable_brakerequest() == true);
			TS_ASSERT_DELTA(obj1.getBrakerequest(), 1.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getEnable_brakerequest() == obj2.getEnable_brakerequest());
			TS_ASSERT_DELTA(obj1.getBrakerequest(), obj2.getBrakerequest(), 1e-5);
	
			TS_ASSERT(obj2.getEnable_brakerequest() == true);
			TS_ASSERT_DELTA(obj2.getBrakerequest(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			BrakeRequest obj1;
			TS_ASSERT(obj1.getEnable_brakerequest() == false);
			TS_ASSERT_DELTA(obj1.getBrakerequest(), 0.0, 1e-5);
	
			BrakeRequest obj2;
			TS_ASSERT(obj2.getEnable_brakerequest() == false);
			TS_ASSERT_DELTA(obj2.getBrakerequest(), 0.0, 1e-5);
	
			obj1.setEnable_brakerequest(true);
			obj1.setBrakerequest(1.0);
	
			TS_ASSERT(obj1.getEnable_brakerequest() == true);
			TS_ASSERT_DELTA(obj1.getBrakerequest(), 1.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getEnable_brakerequest() == obj2.getEnable_brakerequest());
			TS_ASSERT_DELTA(obj1.getBrakerequest(), obj2.getBrakerequest(), 1e-5);
	
			TS_ASSERT(obj2.getEnable_brakerequest() == true);
			TS_ASSERT_DELTA(obj2.getBrakerequest(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*FROM_OPENDLV_PROXY_REVEREFH16_BRAKEREQUEST_TESTSUITE_H*/
