/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_REFLECTION_ABSTRACTFIELD_TESTSUITE_H
#define ODCORE_DATA_REFLECTION_ABSTRACTFIELD_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/reflection/AbstractField.h"


class odcore_data_reflection_AbstractField_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data::reflection;
	
			AbstractField obj1;
			TS_ASSERT(obj1.getLongFieldIdentifier() == 0);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), ""));
	
			obj1.setLongFieldIdentifier(4000);
			obj1.setShortFieldIdentifier(4);
			obj1.setLongFieldName("Hello World!");
			obj1.setShortFieldName("Hello World!");
			obj1.setSize(-3);
	
			TS_ASSERT(obj1.getLongFieldIdentifier() == 4000);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), "Hello World!"));
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data::reflection;
	
			AbstractField obj1;
			TS_ASSERT(obj1.getLongFieldIdentifier() == 0);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), ""));
	
			AbstractField obj2(obj1);
			TS_ASSERT(obj1.getLongFieldIdentifier() == obj2.getLongFieldIdentifier());
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), obj2.getLongFieldName()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), obj2.getShortFieldName()));
	
			obj1.setLongFieldIdentifier(4000);
			obj1.setShortFieldIdentifier(4);
			obj1.setLongFieldName("Hello World!");
			obj1.setShortFieldName("Hello World!");
			obj1.setSize(-3);
	
			TS_ASSERT(obj1.getLongFieldIdentifier() == 4000);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), "Hello World!"));
	
			AbstractField obj3(obj1);
			TS_ASSERT(obj1.getLongFieldIdentifier() == obj3.getLongFieldIdentifier());
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), obj3.getLongFieldName()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), obj3.getShortFieldName()));
	
			TS_ASSERT(obj3.getLongFieldIdentifier() == 4000);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getLongFieldName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getShortFieldName(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data::reflection;
	
			AbstractField obj1;
			TS_ASSERT(obj1.getLongFieldIdentifier() == 0);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), ""));
	
			AbstractField obj2;
			TS_ASSERT(obj2.getLongFieldIdentifier() == 0);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getLongFieldName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getShortFieldName(), ""));
	
			obj1.setLongFieldIdentifier(4000);
			obj1.setShortFieldIdentifier(4);
			obj1.setLongFieldName("Hello World!");
			obj1.setShortFieldName("Hello World!");
			obj1.setSize(-3);
	
			TS_ASSERT(obj1.getLongFieldIdentifier() == 4000);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), "Hello World!"));
	
			obj2 = obj1;
			TS_ASSERT(obj1.getLongFieldIdentifier() == obj2.getLongFieldIdentifier());
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), obj2.getLongFieldName()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), obj2.getShortFieldName()));
	
			TS_ASSERT(obj2.getLongFieldIdentifier() == 4000);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getLongFieldName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getShortFieldName(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data::reflection;
	
			AbstractField obj1;
			TS_ASSERT(obj1.getLongFieldIdentifier() == 0);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), ""));
	
			AbstractField obj2;
			TS_ASSERT(obj2.getLongFieldIdentifier() == 0);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getLongFieldName(), ""));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getShortFieldName(), ""));
	
			obj1.setLongFieldIdentifier(4000);
			obj1.setShortFieldIdentifier(4);
			obj1.setLongFieldName("Hello World!");
			obj1.setShortFieldName("Hello World!");
			obj1.setSize(-3);
	
			TS_ASSERT(obj1.getLongFieldIdentifier() == 4000);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), "Hello World!"));
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getLongFieldIdentifier() == obj2.getLongFieldIdentifier());
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getLongFieldName(), obj2.getLongFieldName()));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getShortFieldName(), obj2.getShortFieldName()));
	
			TS_ASSERT(obj2.getLongFieldIdentifier() == 4000);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getLongFieldName(), "Hello World!"));
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getShortFieldName(), "Hello World!"));
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_REFLECTION_ABSTRACTFIELD_TESTSUITE_H*/
