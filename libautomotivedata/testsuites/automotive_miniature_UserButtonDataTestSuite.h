/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_MINIATURE_USERBUTTONDATA_TESTSUITE_H
#define AUTOMOTIVE_MINIATURE_USERBUTTONDATA_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/miniature/UserButtonData.h"


class automotive_miniature_UserButtonData_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive::miniature;
	
			UserButtonData obj1;
			TS_ASSERT_DELTA(obj1.getDuration(), 0.0, 1e-5);
	
			obj1.setDuration(1.0);
	
			TS_ASSERT_DELTA(obj1.getDuration(), 1.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive::miniature;
	
			UserButtonData obj1;
			TS_ASSERT_DELTA(obj1.getDuration(), 0.0, 1e-5);
	
			UserButtonData obj2(obj1);
			TS_ASSERT_DELTA(obj1.getDuration(), obj2.getDuration(), 1e-5);
	
			obj1.setDuration(1.0);
	
			TS_ASSERT_DELTA(obj1.getDuration(), 1.0, 1e-5);
	
			UserButtonData obj3(obj1);
			TS_ASSERT_DELTA(obj1.getDuration(), obj3.getDuration(), 1e-5);
	
			TS_ASSERT_DELTA(obj3.getDuration(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive::miniature;
	
			UserButtonData obj1;
			TS_ASSERT_DELTA(obj1.getDuration(), 0.0, 1e-5);
	
			UserButtonData obj2;
			TS_ASSERT_DELTA(obj2.getDuration(), 0.0, 1e-5);
	
			obj1.setDuration(1.0);
	
			TS_ASSERT_DELTA(obj1.getDuration(), 1.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT_DELTA(obj1.getDuration(), obj2.getDuration(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getDuration(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive::miniature;
	
			UserButtonData obj1;
			TS_ASSERT_DELTA(obj1.getDuration(), 0.0, 1e-5);
	
			UserButtonData obj2;
			TS_ASSERT_DELTA(obj2.getDuration(), 0.0, 1e-5);
	
			obj1.setDuration(1.0);
	
			TS_ASSERT_DELTA(obj1.getDuration(), 1.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT_DELTA(obj1.getDuration(), obj2.getDuration(), 1e-5);
	
			TS_ASSERT_DELTA(obj2.getDuration(), 1.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_MINIATURE_USERBUTTONDATA_TESTSUITE_H*/
