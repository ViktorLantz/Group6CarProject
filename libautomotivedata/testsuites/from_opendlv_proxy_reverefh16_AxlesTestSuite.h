/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FROM_OPENDLV_PROXY_REVEREFH16_AXLES_TESTSUITE_H
#define FROM_OPENDLV_PROXY_REVEREFH16_AXLES_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/from/opendlv/proxy/reverefh16/Axles.h"


class from_opendlv_proxy_reverefh16_Axles_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Axles obj1;
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), 0.0, 1e-5);
	
			obj1.setFrontaxle1load(1.0);
			obj1.setDriveaxle1load(1.0);
			obj1.setDriveaxle2load(1.0);
	
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), 1.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Axles obj1;
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), 0.0, 1e-5);
	
			Axles obj2(obj1);
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), obj2.getFrontaxle1load(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), obj2.getDriveaxle1load(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), obj2.getDriveaxle2load(), 1e-5);
	
			obj1.setFrontaxle1load(1.0);
			obj1.setDriveaxle1load(1.0);
			obj1.setDriveaxle2load(1.0);
	
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), 1.0, 1e-5);
	
			Axles obj3(obj1);
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), obj3.getFrontaxle1load(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), obj3.getDriveaxle1load(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), obj3.getDriveaxle2load(), 1e-5);
	
			TS_ASSERT_DELTA(obj3.getFrontaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getDriveaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj3.getDriveaxle2load(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Axles obj1;
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), 0.0, 1e-5);
	
			Axles obj2;
			TS_ASSERT_DELTA(obj2.getFrontaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2load(), 0.0, 1e-5);
	
			obj1.setFrontaxle1load(1.0);
			obj1.setDriveaxle1load(1.0);
			obj1.setDriveaxle2load(1.0);
	
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), 1.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), obj2.getFrontaxle1load(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), obj2.getDriveaxle1load(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), obj2.getDriveaxle2load(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getFrontaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2load(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace from::opendlv::proxy::reverefh16;
	
			Axles obj1;
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), 0.0, 1e-5);
	
			Axles obj2;
			TS_ASSERT_DELTA(obj2.getFrontaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1load(), 0.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2load(), 0.0, 1e-5);
	
			obj1.setFrontaxle1load(1.0);
			obj1.setDriveaxle1load(1.0);
			obj1.setDriveaxle2load(1.0);
	
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), 1.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT_DELTA(obj1.getFrontaxle1load(), obj2.getFrontaxle1load(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle1load(), obj2.getDriveaxle1load(), 1e-5);
			TS_ASSERT_DELTA(obj1.getDriveaxle2load(), obj2.getDriveaxle2load(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getFrontaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle1load(), 1.0, 1e-5);
			TS_ASSERT_DELTA(obj2.getDriveaxle2load(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*FROM_OPENDLV_PROXY_REVEREFH16_AXLES_TESTSUITE_H*/
