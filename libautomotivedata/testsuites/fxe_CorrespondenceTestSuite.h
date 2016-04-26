/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FXE_CORRESPONDENCE_TESTSUITE_H
#define FXE_CORRESPONDENCE_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/fxe/Correspondence.h"

#include "automotivedata/generated/fxe/Recording.h"
#include "automotivedata/generated/fxe/Recording.h"

class fxe_Correspondence_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace fxe;
	
			Correspondence obj1;
			TS_ASSERT(obj1.getListOfRealRecordings().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfRealRecordings() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfRealRecordings());
	
	
		}
	
		void testCreateAndCopyObject() {
			using namespace fxe;
	
			Correspondence obj1;
			TS_ASSERT(obj1.getListOfRealRecordings().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfRealRecordings() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfRealRecordings());
	
			Correspondence obj2(obj1);
			TS_ASSERT(obj1.getSize_ListOfRealRecordings() == obj2.getSize_ListOfRealRecordings());
			TS_ASSERT(obj1.isEmpty_ListOfRealRecordings() == obj2.isEmpty_ListOfRealRecordings());
	
	
	
			Correspondence obj3(obj1);
			TS_ASSERT(obj1.getSize_ListOfRealRecordings() == obj3.getSize_ListOfRealRecordings());
			TS_ASSERT(obj1.isEmpty_ListOfRealRecordings() == obj3.isEmpty_ListOfRealRecordings());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace fxe;
	
			Correspondence obj1;
			TS_ASSERT(obj1.getListOfRealRecordings().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfRealRecordings() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfRealRecordings());
	
			Correspondence obj2;
			TS_ASSERT(obj2.getListOfRealRecordings().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfRealRecordings() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfRealRecordings());
	
	
	
			obj2 = obj1;
			TS_ASSERT(obj1.getSize_ListOfRealRecordings() == obj2.getSize_ListOfRealRecordings());
			TS_ASSERT(obj1.isEmpty_ListOfRealRecordings() == obj2.isEmpty_ListOfRealRecordings());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace fxe;
	
			Correspondence obj1;
			TS_ASSERT(obj1.getListOfRealRecordings().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfRealRecordings() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfRealRecordings());
	
			Correspondence obj2;
			TS_ASSERT(obj2.getListOfRealRecordings().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfRealRecordings() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfRealRecordings());
	
	
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getSize_ListOfRealRecordings() == obj2.getSize_ListOfRealRecordings());
			TS_ASSERT(obj1.isEmpty_ListOfRealRecordings() == obj2.isEmpty_ListOfRealRecordings());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*FXE_CORRESPONDENCE_TESTSUITE_H*/
