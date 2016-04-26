/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_LOGMESSAGE_TESTSUITE_H
#define ODCORE_DATA_LOGMESSAGE_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/LogMessage.h"


class odcore_data_LogMessage_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data;
	
			LogMessage obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), ""));
	
			obj1.setLogMessage("Hello World!");
			obj1.setComponentName("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), "Hello World!"));
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data;
	
			LogMessage obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), ""));
	
			LogMessage obj2(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), obj2.getLogMessage()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), obj2.getComponentName()));
	
			obj1.setLogMessage("Hello World!");
			obj1.setComponentName("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), "Hello World!"));
	
			LogMessage obj3(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), obj3.getLogMessage()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), obj3.getComponentName()));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getLogMessage(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getComponentName(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data;
	
			LogMessage obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), ""));
	
			LogMessage obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getLogMessage(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getComponentName(), ""));
	
			obj1.setLogMessage("Hello World!");
			obj1.setComponentName("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), "Hello World!"));
	
			obj2 = obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), obj2.getLogMessage()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), obj2.getComponentName()));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getLogMessage(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getComponentName(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data;
	
			LogMessage obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), ""));
	
			LogMessage obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getLogMessage(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getComponentName(), ""));
	
			obj1.setLogMessage("Hello World!");
			obj1.setComponentName("Hello World!");
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), "Hello World!"));
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLogMessage(), obj2.getLogMessage()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getComponentName(), obj2.getComponentName()));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getLogMessage(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getComponentName(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_LOGMESSAGE_TESTSUITE_H*/
