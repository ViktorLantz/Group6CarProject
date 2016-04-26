/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_MODULEDESCRIPTOR_TESTSUITE_H
#define ODCORE_DATA_DMCP_MODULEDESCRIPTOR_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/dmcp/ModuleDescriptor.h"


class odcore_data_dmcp_ModuleDescriptor_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data::dmcp;
	
			ModuleDescriptor obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), ""));
			TS_ASSERT_DELTA(obj1.getFrequency(), 0, 1e-5);
	
			obj1.setName("Hello World!");
			obj1.setIdentifier("Hello World!");
			obj1.setVersion("Hello World!");
			obj1.setFrequency(2.5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), "Hello World!"));
			TS_ASSERT_DELTA(obj1.getFrequency(), 2.5, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data::dmcp;
	
			ModuleDescriptor obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), ""));
			TS_ASSERT_DELTA(obj1.getFrequency(), 0, 1e-5);
	
			ModuleDescriptor obj2(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), obj2.getName()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), obj2.getIdentifier()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), obj2.getVersion()));
			TS_ASSERT_DELTA(obj1.getFrequency(), obj2.getFrequency(), 1e-5);
	
			obj1.setName("Hello World!");
			obj1.setIdentifier("Hello World!");
			obj1.setVersion("Hello World!");
			obj1.setFrequency(2.5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), "Hello World!"));
			TS_ASSERT_DELTA(obj1.getFrequency(), 2.5, 1e-5);
	
			ModuleDescriptor obj3(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), obj3.getName()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), obj3.getIdentifier()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), obj3.getVersion()));
			TS_ASSERT_DELTA(obj1.getFrequency(), obj3.getFrequency(), 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getIdentifier(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getVersion(), "Hello World!"));
			TS_ASSERT_DELTA(obj3.getFrequency(), 2.5, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data::dmcp;
	
			ModuleDescriptor obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), ""));
			TS_ASSERT_DELTA(obj1.getFrequency(), 0, 1e-5);
	
			ModuleDescriptor obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getIdentifier(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getVersion(), ""));
			TS_ASSERT_DELTA(obj2.getFrequency(), 0, 1e-5);
	
			obj1.setName("Hello World!");
			obj1.setIdentifier("Hello World!");
			obj1.setVersion("Hello World!");
			obj1.setFrequency(2.5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), "Hello World!"));
			TS_ASSERT_DELTA(obj1.getFrequency(), 2.5, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), obj2.getName()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), obj2.getIdentifier()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), obj2.getVersion()));
			TS_ASSERT_DELTA(obj1.getFrequency(), obj2.getFrequency(), 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getIdentifier(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getVersion(), "Hello World!"));
			TS_ASSERT_DELTA(obj2.getFrequency(), 2.5, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data::dmcp;
	
			ModuleDescriptor obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), ""));
			TS_ASSERT_DELTA(obj1.getFrequency(), 0, 1e-5);
	
			ModuleDescriptor obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getIdentifier(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getVersion(), ""));
			TS_ASSERT_DELTA(obj2.getFrequency(), 0, 1e-5);
	
			obj1.setName("Hello World!");
			obj1.setIdentifier("Hello World!");
			obj1.setVersion("Hello World!");
			obj1.setFrequency(2.5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), "Hello World!"));
			TS_ASSERT_DELTA(obj1.getFrequency(), 2.5, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getName(), obj2.getName()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getIdentifier(), obj2.getIdentifier()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getVersion(), obj2.getVersion()));
			TS_ASSERT_DELTA(obj1.getFrequency(), obj2.getFrequency(), 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getIdentifier(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getVersion(), "Hello World!"));
			TS_ASSERT_DELTA(obj2.getFrequency(), 2.5, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_DMCP_MODULEDESCRIPTOR_TESTSUITE_H*/
