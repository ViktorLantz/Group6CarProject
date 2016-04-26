/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FROM_OPENDLV_PROXY_REVEREFH16_WHEELS_TESTSUITE_H
#define FROM_OPENDLV_PROXY_REVEREFH16_WHEELS_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/from/opendlv/proxy/reverefh16/Wheels.h"


class from_opendlv_proxy_reverefh16_Wheels_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Wheels obj1;
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), 0.0, 1e-5);
	
			obj1.setFrontaxle1wheelspeedleft(1.0);
			obj1.setFrontaxle1wheelspeedright(1.0);
			obj1.setDriveaxle1wheelspeedleft(1.0);
			obj1.setDriveaxle1wheelspeedright(1.0);
			obj1.setDriveaxle2wheelspeedleft(1.0);
			obj1.setDriveaxle2wheelspeedright(1.0);
	
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), 1.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Wheels obj1;
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), 0.0, 1e-5);
	
			Wheels obj2(obj1);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), obj2.getFrontaxle1wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), obj2.getFrontaxle1wheelspeedright(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), obj2.getDriveaxle1wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), obj2.getDriveaxle1wheelspeedright(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), obj2.getDriveaxle2wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), obj2.getDriveaxle2wheelspeedright(), 1e-5);
	
			obj1.setFrontaxle1wheelspeedleft(1.0);
			obj1.setFrontaxle1wheelspeedright(1.0);
			obj1.setDriveaxle1wheelspeedleft(1.0);
			obj1.setDriveaxle1wheelspeedright(1.0);
			obj1.setDriveaxle2wheelspeedleft(1.0);
			obj1.setDriveaxle2wheelspeedright(1.0);
	
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), 1.0, 1e-5);
	
			Wheels obj3(obj1);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), obj3.getFrontaxle1wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), obj3.getFrontaxle1wheelspeedright(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), obj3.getDriveaxle1wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), obj3.getDriveaxle1wheelspeedright(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), obj3.getDriveaxle2wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), obj3.getDriveaxle2wheelspeedright(), 1e-5);
	
			TS_ASSERT_DELTA(obj3.getFrontaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getFrontaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getDriveaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getDriveaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getDriveaxle2wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getDriveaxle2wheelspeedright(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Wheels obj1;
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), 0.0, 1e-5);
	
			Wheels obj2;
			TS_ASSERT_DELTA(obj2.getFrontaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getFrontaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2wheelspeedright(), 0.0, 1e-5);
	
			obj1.setFrontaxle1wheelspeedleft(1.0);
			obj1.setFrontaxle1wheelspeedright(1.0);
			obj1.setDriveaxle1wheelspeedleft(1.0);
			obj1.setDriveaxle1wheelspeedright(1.0);
			obj1.setDriveaxle2wheelspeedleft(1.0);
			obj1.setDriveaxle2wheelspeedright(1.0);
	
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), 1.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), obj2.getFrontaxle1wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), obj2.getFrontaxle1wheelspeedright(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), obj2.getDriveaxle1wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), obj2.getDriveaxle1wheelspeedright(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), obj2.getDriveaxle2wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), obj2.getDriveaxle2wheelspeedright(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getFrontaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getFrontaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2wheelspeedright(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Wheels obj1;
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), 0.0, 1e-5);
	
			Wheels obj2;
			TS_ASSERT_DELTA(obj2.getFrontaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getFrontaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1wheelspeedright(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2wheelspeedleft(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2wheelspeedright(), 0.0, 1e-5);
	
			obj1.setFrontaxle1wheelspeedleft(1.0);
			obj1.setFrontaxle1wheelspeedright(1.0);
			obj1.setDriveaxle1wheelspeedleft(1.0);
			obj1.setDriveaxle1wheelspeedright(1.0);
			obj1.setDriveaxle2wheelspeedleft(1.0);
			obj1.setDriveaxle2wheelspeedright(1.0);
	
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), 1.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedleft(), obj2.getFrontaxle1wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getFrontaxle1wheelspeedright(), obj2.getFrontaxle1wheelspeedright(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedleft(), obj2.getDriveaxle1wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1wheelspeedright(), obj2.getDriveaxle1wheelspeedright(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedleft(), obj2.getDriveaxle2wheelspeedleft(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2wheelspeedright(), obj2.getDriveaxle2wheelspeedright(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getFrontaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getFrontaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1wheelspeedright(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2wheelspeedleft(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2wheelspeedright(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*FROM_OPENDLV_PROXY_REVEREFH16_WHEELS_TESTSUITE_H*/
