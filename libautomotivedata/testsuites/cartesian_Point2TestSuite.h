/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef CARTESIAN_POINT2_TESTSUITE_H
#define CARTESIAN_POINT2_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/cartesian/Point2.h"


class cartesian_Point2_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace cartesian;
	
			Point2 obj1;
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 0, 1e-5);
			}
	
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				obj1.getP()[i] = 2.5 + (1.0+i);
			}
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 2.5 + (1.0+i), 1e-5);
			}
	
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 2.5 + (1.0+i), 1e-5);
			}
		}
	
		void testCreateAndCopyObject() {
			using namespace cartesian;
	
			Point2 obj1;
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 0, 1e-5);
			}
	
			Point2 obj2(obj1);
			TS_ASSERT(obj1.getSize_P() == obj2.getSize_P());
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], obj2.getP()[i], 1e-5);
			}
	
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				obj1.getP()[i] = 2.5 + (1.0+i);
			}
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 2.5 + (1.0+i), 1e-5);
			}
	
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 2.5 + (1.0+i), 1e-5);
			}
	
			Point2 obj3(obj1);
			TS_ASSERT(obj1.getSize_P() == obj3.getSize_P());
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], obj3.getP()[i], 1e-5);
			}
	
			for(uint32_t i = 0; i < obj3.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj3.getP()[i], 2.5 + (1.0+i), 1e-5);
			}
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace cartesian;
	
			Point2 obj1;
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 0, 1e-5);
			}
	
			Point2 obj2;
			for(uint32_t i = 0; i < obj2.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj2.getP()[i], 0, 1e-5);
			}
	
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				obj1.getP()[i] = 2.5 + (1.0+i);
			}
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 2.5 + (1.0+i), 1e-5);
			}
	
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 2.5 + (1.0+i), 1e-5);
			}
	
			obj2 = obj1;
			TS_ASSERT(obj1.getSize_P() == obj2.getSize_P());
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], obj2.getP()[i], 1e-5);
			}
	
			for(uint32_t i = 0; i < obj2.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj2.getP()[i], 2.5 + (1.0+i), 1e-5);
			}
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace cartesian;
	
			Point2 obj1;
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 0, 1e-5);
			}
	
			Point2 obj2;
			for(uint32_t i = 0; i < obj2.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj2.getP()[i], 0, 1e-5);
			}
	
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				obj1.getP()[i] = 2.5 + (1.0+i);
			}
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 2.5 + (1.0+i), 1e-5);
			}
	
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], 2.5 + (1.0+i), 1e-5);
			}
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getSize_P() == obj2.getSize_P());
			for(uint32_t i = 0; i < obj1.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj1.getP()[i], obj2.getP()[i], 1e-5);
			}
	
			for(uint32_t i = 0; i < obj2.getSize_P(); i++) {
				TS_ASSERT_DELTA(obj2.getP()[i], 2.5 + (1.0+i), 1e-5);
			}
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*CARTESIAN_POINT2_TESTSUITE_H*/
