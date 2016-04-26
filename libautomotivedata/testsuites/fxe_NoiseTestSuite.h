/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FXE_NOISE_TESTSUITE_H
#define FXE_NOISE_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/fxe/Noise.h"

#include "automotivedata/generated/fxe/KeyPoint.h"

class fxe_Noise_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace fxe;
	
			Noise obj1;
			TS_ASSERT(obj1.getListOfNoisePerFrame().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfNoisePerFrame() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfNoisePerFrame());
	
	
		}
	
		void testCreateAndCopyObject() {
			using namespace fxe;
	
			Noise obj1;
			TS_ASSERT(obj1.getListOfNoisePerFrame().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfNoisePerFrame() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfNoisePerFrame());
	
			Noise obj2(obj1);
			TS_ASSERT(obj1.getSize_ListOfNoisePerFrame() == obj2.getSize_ListOfNoisePerFrame());
			TS_ASSERT(obj1.isEmpty_ListOfNoisePerFrame() == obj2.isEmpty_ListOfNoisePerFrame());
	
	
	
			Noise obj3(obj1);
			TS_ASSERT(obj1.getSize_ListOfNoisePerFrame() == obj3.getSize_ListOfNoisePerFrame());
			TS_ASSERT(obj1.isEmpty_ListOfNoisePerFrame() == obj3.isEmpty_ListOfNoisePerFrame());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace fxe;
	
			Noise obj1;
			TS_ASSERT(obj1.getListOfNoisePerFrame().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfNoisePerFrame() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfNoisePerFrame());
	
			Noise obj2;
			TS_ASSERT(obj2.getListOfNoisePerFrame().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfNoisePerFrame() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfNoisePerFrame());
	
	
	
			obj2 = obj1;
			TS_ASSERT(obj1.getSize_ListOfNoisePerFrame() == obj2.getSize_ListOfNoisePerFrame());
			TS_ASSERT(obj1.isEmpty_ListOfNoisePerFrame() == obj2.isEmpty_ListOfNoisePerFrame());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace fxe;
	
			Noise obj1;
			TS_ASSERT(obj1.getListOfNoisePerFrame().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfNoisePerFrame() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfNoisePerFrame());
	
			Noise obj2;
			TS_ASSERT(obj2.getListOfNoisePerFrame().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfNoisePerFrame() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfNoisePerFrame());
	
	
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getSize_ListOfNoisePerFrame() == obj2.getSize_ListOfNoisePerFrame());
			TS_ASSERT(obj1.isEmpty_ListOfNoisePerFrame() == obj2.isEmpty_ListOfNoisePerFrame());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*FXE_NOISE_TESTSUITE_H*/
