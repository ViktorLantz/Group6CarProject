/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FXE_RECORDING_TESTSUITE_H
#define FXE_RECORDING_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/fxe/Recording.h"

#include "automotivedata/generated/fxe/Noise.h"

class fxe_Recording_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace fxe;
	
			Recording obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), ""));
			TS_ASSERT(obj1.getStartFrame() == 0);
			TS_ASSERT(obj1.getEndFrame() == 0);
			TS_ASSERT(obj1.getListOfNoises().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfNoises() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfNoises());
	
			obj1.setFilename("Hello World!");
			obj1.setStartFrame(4000);
			obj1.setEndFrame(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), "Hello World!"));
			TS_ASSERT(obj1.getStartFrame() == 4000);
			TS_ASSERT(obj1.getEndFrame() == 4000);
		}
	
		void testCreateAndCopyObject() {
			using namespace fxe;
	
			Recording obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), ""));
			TS_ASSERT(obj1.getStartFrame() == 0);
			TS_ASSERT(obj1.getEndFrame() == 0);
			TS_ASSERT(obj1.getListOfNoises().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfNoises() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfNoises());
	
			Recording obj2(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), obj2.getFilename()));
			TS_ASSERT(obj1.getStartFrame() == obj2.getStartFrame());
			TS_ASSERT(obj1.getEndFrame() == obj2.getEndFrame());
			TS_ASSERT(obj1.getSize_ListOfNoises() == obj2.getSize_ListOfNoises());
			TS_ASSERT(obj1.isEmpty_ListOfNoises() == obj2.isEmpty_ListOfNoises());
	
			obj1.setFilename("Hello World!");
			obj1.setStartFrame(4000);
			obj1.setEndFrame(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), "Hello World!"));
			TS_ASSERT(obj1.getStartFrame() == 4000);
			TS_ASSERT(obj1.getEndFrame() == 4000);
	
			Recording obj3(obj1);
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), obj3.getFilename()));
			TS_ASSERT(obj1.getStartFrame() == obj3.getStartFrame());
			TS_ASSERT(obj1.getEndFrame() == obj3.getEndFrame());
			TS_ASSERT(obj1.getSize_ListOfNoises() == obj3.getSize_ListOfNoises());
			TS_ASSERT(obj1.isEmpty_ListOfNoises() == obj3.isEmpty_ListOfNoises());
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj3.getFilename(), "Hello World!"));
			TS_ASSERT(obj3.getStartFrame() == 4000);
			TS_ASSERT(obj3.getEndFrame() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace fxe;
	
			Recording obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), ""));
			TS_ASSERT(obj1.getStartFrame() == 0);
			TS_ASSERT(obj1.getEndFrame() == 0);
			TS_ASSERT(obj1.getListOfNoises().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfNoises() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfNoises());
	
			Recording obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getFilename(), ""));
			TS_ASSERT(obj2.getStartFrame() == 0);
			TS_ASSERT(obj2.getEndFrame() == 0);
			TS_ASSERT(obj2.getListOfNoises().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfNoises() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfNoises());
	
			obj1.setFilename("Hello World!");
			obj1.setStartFrame(4000);
			obj1.setEndFrame(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), "Hello World!"));
			TS_ASSERT(obj1.getStartFrame() == 4000);
			TS_ASSERT(obj1.getEndFrame() == 4000);
	
			obj2 = obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), obj2.getFilename()));
			TS_ASSERT(obj1.getStartFrame() == obj2.getStartFrame());
			TS_ASSERT(obj1.getEndFrame() == obj2.getEndFrame());
			TS_ASSERT(obj1.getSize_ListOfNoises() == obj2.getSize_ListOfNoises());
			TS_ASSERT(obj1.isEmpty_ListOfNoises() == obj2.isEmpty_ListOfNoises());
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getFilename(), "Hello World!"));
			TS_ASSERT(obj2.getStartFrame() == 4000);
			TS_ASSERT(obj2.getEndFrame() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace fxe;
	
			Recording obj1;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), ""));
			TS_ASSERT(obj1.getStartFrame() == 0);
			TS_ASSERT(obj1.getEndFrame() == 0);
			TS_ASSERT(obj1.getListOfNoises().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfNoises() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfNoises());
	
			Recording obj2;
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getFilename(), ""));
			TS_ASSERT(obj2.getStartFrame() == 0);
			TS_ASSERT(obj2.getEndFrame() == 0);
			TS_ASSERT(obj2.getListOfNoises().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfNoises() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfNoises());
	
			obj1.setFilename("Hello World!");
			obj1.setStartFrame(4000);
			obj1.setEndFrame(4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), "Hello World!"));
			TS_ASSERT(obj1.getStartFrame() == 4000);
			TS_ASSERT(obj1.getEndFrame() == 4000);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.getFilename(), obj2.getFilename()));
			TS_ASSERT(obj1.getStartFrame() == obj2.getStartFrame());
			TS_ASSERT(obj1.getEndFrame() == obj2.getEndFrame());
			TS_ASSERT(obj1.getSize_ListOfNoises() == obj2.getSize_ListOfNoises());
			TS_ASSERT(obj1.isEmpty_ListOfNoises() == obj2.isEmpty_ListOfNoises());
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj2.getFilename(), "Hello World!"));
			TS_ASSERT(obj2.getStartFrame() == 4000);
			TS_ASSERT(obj2.getEndFrame() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*FXE_RECORDING_TESTSUITE_H*/
