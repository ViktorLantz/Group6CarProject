/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_MINIATURE_STM32F4DATA_TESTSUITE_H
#define AUTOMOTIVE_MINIATURE_STM32F4DATA_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/miniature/STM32F4Data.h"


class automotive_miniature_STM32F4Data_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive::miniature;
	
			STM32F4Data obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), ""));
	
			obj1.setRawData("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), "Hello World!"));
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive::miniature;
	
			STM32F4Data obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), ""));
	
			STM32F4Data obj2(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), obj2.getRawData()));
	
			obj1.setRawData("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), "Hello World!"));
	
			STM32F4Data obj3(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), obj3.getRawData()));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getRawData(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive::miniature;
	
			STM32F4Data obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), ""));
	
			STM32F4Data obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getRawData(), ""));
	
			obj1.setRawData("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), "Hello World!"));
	
			obj2 = obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), obj2.getRawData()));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getRawData(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive::miniature;
	
			STM32F4Data obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), ""));
	
			STM32F4Data obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getRawData(), ""));
	
			obj1.setRawData("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), "Hello World!"));
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getRawData(), obj2.getRawData()));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getRawData(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_MINIATURE_STM32F4DATA_TESTSUITE_H*/
