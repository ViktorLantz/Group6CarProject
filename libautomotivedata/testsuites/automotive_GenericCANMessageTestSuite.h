/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_GENERICCANMESSAGE_TESTSUITE_H
#define AUTOMOTIVE_GENERICCANMESSAGE_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/GenericCANMessage.h"

#include "opendavinci/odcore/data/TimeStamp.h"

class automotive_GenericCANMessage_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive;
	
			GenericCANMessage obj1;
	
			obj1.setIdentifier(40000);
			obj1.setLength(4);
			obj1.setData(40000);
	
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive;
	
			GenericCANMessage obj1;
	
			GenericCANMessage obj2(obj1);
	
			obj1.setIdentifier(40000);
			obj1.setLength(4);
			obj1.setData(40000);
	
	
			GenericCANMessage obj3(obj1);
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive;
	
			GenericCANMessage obj1;
	
			GenericCANMessage obj2;
	
			obj1.setIdentifier(40000);
			obj1.setLength(4);
			obj1.setData(40000);
	
	
			obj2 = obj1;
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive;
	
			GenericCANMessage obj1;
	
			GenericCANMessage obj2;
	
			obj1.setIdentifier(40000);
			obj1.setLength(4);
			obj1.setData(40000);
	
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_GENERICCANMESSAGE_TESTSUITE_H*/
