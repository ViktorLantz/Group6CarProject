/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_MINIATURE_STM32F4CONTROL_TESTSUITE_H
#define AUTOMOTIVE_MINIATURE_STM32F4CONTROL_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/miniature/STM32F4Control.h"


class automotive_miniature_STM32F4Control_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive::miniature;
	
			STM32F4Control obj1;
			TS_ASSERT(obj1.getDataFeed() == 0);
	
			obj1.setDataFeed(4000);
	
			TS_ASSERT(obj1.getDataFeed() == 4000);
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive::miniature;
	
			STM32F4Control obj1;
			TS_ASSERT(obj1.getDataFeed() == 0);
	
			STM32F4Control obj2(obj1);
			TS_ASSERT(obj1.getDataFeed() == obj2.getDataFeed());
	
			obj1.setDataFeed(4000);
	
			TS_ASSERT(obj1.getDataFeed() == 4000);
	
			STM32F4Control obj3(obj1);
			TS_ASSERT(obj1.getDataFeed() == obj3.getDataFeed());
	
			TS_ASSERT(obj3.getDataFeed() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive::miniature;
	
			STM32F4Control obj1;
			TS_ASSERT(obj1.getDataFeed() == 0);
	
			STM32F4Control obj2;
			TS_ASSERT(obj2.getDataFeed() == 0);
	
			obj1.setDataFeed(4000);
	
			TS_ASSERT(obj1.getDataFeed() == 4000);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getDataFeed() == obj2.getDataFeed());
	
			TS_ASSERT(obj2.getDataFeed() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive::miniature;
	
			STM32F4Control obj1;
			TS_ASSERT(obj1.getDataFeed() == 0);
	
			STM32F4Control obj2;
			TS_ASSERT(obj2.getDataFeed() == 0);
	
			obj1.setDataFeed(4000);
	
			TS_ASSERT(obj1.getDataFeed() == 4000);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getDataFeed() == obj2.getDataFeed());
	
			TS_ASSERT(obj2.getDataFeed() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_MINIATURE_STM32F4CONTROL_TESTSUITE_H*/
