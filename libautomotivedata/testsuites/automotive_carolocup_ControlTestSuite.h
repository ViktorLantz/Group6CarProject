/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_CAROLOCUP_CONTROL_TESTSUITE_H
#define AUTOMOTIVE_CAROLOCUP_CONTROL_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/carolocup/Control.h"


class automotive_carolocup_Control_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive::carolocup;
	
			Control obj1;
			TS_ASSERT(obj1.getSteering() == 0);
			TS_ASSERT(obj1.getSpeed() == 0);
			TS_ASSERT(obj1.getLights() == 0);
			TS_ASSERT(obj1.getGyroTrigger() == 0);
	
			obj1.setSteering(4000);
			obj1.setSpeed(4000);
			obj1.setLights(4000);
			obj1.setGyroTrigger(4000);
	
			TS_ASSERT(obj1.getSteering() == 4000);
			TS_ASSERT(obj1.getSpeed() == 4000);
			TS_ASSERT(obj1.getLights() == 4000);
			TS_ASSERT(obj1.getGyroTrigger() == 4000);
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive::carolocup;
	
			Control obj1;
			TS_ASSERT(obj1.getSteering() == 0);
			TS_ASSERT(obj1.getSpeed() == 0);
			TS_ASSERT(obj1.getLights() == 0);
			TS_ASSERT(obj1.getGyroTrigger() == 0);
	
			Control obj2(obj1);
			TS_ASSERT(obj1.getSteering() == obj2.getSteering());
			TS_ASSERT(obj1.getSpeed() == obj2.getSpeed());
			TS_ASSERT(obj1.getLights() == obj2.getLights());
			TS_ASSERT(obj1.getGyroTrigger() == obj2.getGyroTrigger());
	
			obj1.setSteering(4000);
			obj1.setSpeed(4000);
			obj1.setLights(4000);
			obj1.setGyroTrigger(4000);
	
			TS_ASSERT(obj1.getSteering() == 4000);
			TS_ASSERT(obj1.getSpeed() == 4000);
			TS_ASSERT(obj1.getLights() == 4000);
			TS_ASSERT(obj1.getGyroTrigger() == 4000);
	
			Control obj3(obj1);
			TS_ASSERT(obj1.getSteering() == obj3.getSteering());
			TS_ASSERT(obj1.getSpeed() == obj3.getSpeed());
			TS_ASSERT(obj1.getLights() == obj3.getLights());
			TS_ASSERT(obj1.getGyroTrigger() == obj3.getGyroTrigger());
	
			TS_ASSERT(obj3.getSteering() == 4000);
			TS_ASSERT(obj3.getSpeed() == 4000);
			TS_ASSERT(obj3.getLights() == 4000);
			TS_ASSERT(obj3.getGyroTrigger() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive::carolocup;
	
			Control obj1;
			TS_ASSERT(obj1.getSteering() == 0);
			TS_ASSERT(obj1.getSpeed() == 0);
			TS_ASSERT(obj1.getLights() == 0);
			TS_ASSERT(obj1.getGyroTrigger() == 0);
	
			Control obj2;
			TS_ASSERT(obj2.getSteering() == 0);
			TS_ASSERT(obj2.getSpeed() == 0);
			TS_ASSERT(obj2.getLights() == 0);
			TS_ASSERT(obj2.getGyroTrigger() == 0);
	
			obj1.setSteering(4000);
			obj1.setSpeed(4000);
			obj1.setLights(4000);
			obj1.setGyroTrigger(4000);
	
			TS_ASSERT(obj1.getSteering() == 4000);
			TS_ASSERT(obj1.getSpeed() == 4000);
			TS_ASSERT(obj1.getLights() == 4000);
			TS_ASSERT(obj1.getGyroTrigger() == 4000);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getSteering() == obj2.getSteering());
			TS_ASSERT(obj1.getSpeed() == obj2.getSpeed());
			TS_ASSERT(obj1.getLights() == obj2.getLights());
			TS_ASSERT(obj1.getGyroTrigger() == obj2.getGyroTrigger());
	
			TS_ASSERT(obj2.getSteering() == 4000);
			TS_ASSERT(obj2.getSpeed() == 4000);
			TS_ASSERT(obj2.getLights() == 4000);
			TS_ASSERT(obj2.getGyroTrigger() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive::carolocup;
	
			Control obj1;
			TS_ASSERT(obj1.getSteering() == 0);
			TS_ASSERT(obj1.getSpeed() == 0);
			TS_ASSERT(obj1.getLights() == 0);
			TS_ASSERT(obj1.getGyroTrigger() == 0);
	
			Control obj2;
			TS_ASSERT(obj2.getSteering() == 0);
			TS_ASSERT(obj2.getSpeed() == 0);
			TS_ASSERT(obj2.getLights() == 0);
			TS_ASSERT(obj2.getGyroTrigger() == 0);
	
			obj1.setSteering(4000);
			obj1.setSpeed(4000);
			obj1.setLights(4000);
			obj1.setGyroTrigger(4000);
	
			TS_ASSERT(obj1.getSteering() == 4000);
			TS_ASSERT(obj1.getSpeed() == 4000);
			TS_ASSERT(obj1.getLights() == 4000);
			TS_ASSERT(obj1.getGyroTrigger() == 4000);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getSteering() == obj2.getSteering());
			TS_ASSERT(obj1.getSpeed() == obj2.getSpeed());
			TS_ASSERT(obj1.getLights() == obj2.getLights());
			TS_ASSERT(obj1.getGyroTrigger() == obj2.getGyroTrigger());
	
			TS_ASSERT(obj2.getSteering() == 4000);
			TS_ASSERT(obj2.getSpeed() == 4000);
			TS_ASSERT(obj2.getLights() == 4000);
			TS_ASSERT(obj2.getGyroTrigger() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_CAROLOCUP_CONTROL_TESTSUITE_H*/
