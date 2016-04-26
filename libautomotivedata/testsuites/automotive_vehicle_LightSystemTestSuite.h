/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_VEHICLE_LIGHTSYSTEM_TESTSUITE_H
#define AUTOMOTIVE_VEHICLE_LIGHTSYSTEM_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/vehicle/LightSystem.h"


class automotive_vehicle_LightSystem_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive::vehicle;
	
			LightSystem obj1;
	
			obj1.setHeadlights(4);
	
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive::vehicle;
	
			LightSystem obj1;
	
			LightSystem obj2(obj1);
	
			obj1.setHeadlights(4);
	
	
			LightSystem obj3(obj1);
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive::vehicle;
	
			LightSystem obj1;
	
			LightSystem obj2;
	
			obj1.setHeadlights(4);
	
	
			obj2 = obj1;
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive::vehicle;
	
			LightSystem obj1;
	
			LightSystem obj2;
	
			obj1.setHeadlights(4);
	
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_VEHICLE_LIGHTSYSTEM_TESTSUITE_H*/
