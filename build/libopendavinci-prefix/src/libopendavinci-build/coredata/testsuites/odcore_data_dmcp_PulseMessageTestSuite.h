/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_PULSEMESSAGE_TESTSUITE_H
#define ODCORE_DATA_DMCP_PULSEMESSAGE_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/dmcp/PulseMessage.h"

#include "opendavinci/odcore/data/TimeStamp.h"
#include "opendavinci/odcore/data/Container.h"

class odcore_data_dmcp_PulseMessage_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data::dmcp;
	
			PulseMessage obj1;
			TS_ASSERT(obj1.getNominalTimeSlice() == 0);
			TS_ASSERT(obj1.getCumulatedTimeSlice() == 0);
			TS_ASSERT(obj1.getListOfContainers().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfContainers());
	
			obj1.setNominalTimeSlice(4000);
			obj1.setCumulatedTimeSlice(4000);
	
			TS_ASSERT(obj1.getNominalTimeSlice() == 4000);
			TS_ASSERT(obj1.getCumulatedTimeSlice() == 4000);
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data::dmcp;
	
			PulseMessage obj1;
			TS_ASSERT(obj1.getNominalTimeSlice() == 0);
			TS_ASSERT(obj1.getCumulatedTimeSlice() == 0);
			TS_ASSERT(obj1.getListOfContainers().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfContainers());
	
			PulseMessage obj2(obj1);
			TS_ASSERT(obj1.getNominalTimeSlice() == obj2.getNominalTimeSlice());
			TS_ASSERT(obj1.getCumulatedTimeSlice() == obj2.getCumulatedTimeSlice());
			TS_ASSERT(obj1.getSize_ListOfContainers() == obj2.getSize_ListOfContainers());
			TS_ASSERT(obj1.isEmpty_ListOfContainers() == obj2.isEmpty_ListOfContainers());
	
			obj1.setNominalTimeSlice(4000);
			obj1.setCumulatedTimeSlice(4000);
	
			TS_ASSERT(obj1.getNominalTimeSlice() == 4000);
			TS_ASSERT(obj1.getCumulatedTimeSlice() == 4000);
	
			PulseMessage obj3(obj1);
			TS_ASSERT(obj1.getNominalTimeSlice() == obj3.getNominalTimeSlice());
			TS_ASSERT(obj1.getCumulatedTimeSlice() == obj3.getCumulatedTimeSlice());
			TS_ASSERT(obj1.getSize_ListOfContainers() == obj3.getSize_ListOfContainers());
			TS_ASSERT(obj1.isEmpty_ListOfContainers() == obj3.isEmpty_ListOfContainers());
	
			TS_ASSERT(obj3.getNominalTimeSlice() == 4000);
			TS_ASSERT(obj3.getCumulatedTimeSlice() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data::dmcp;
	
			PulseMessage obj1;
			TS_ASSERT(obj1.getNominalTimeSlice() == 0);
			TS_ASSERT(obj1.getCumulatedTimeSlice() == 0);
			TS_ASSERT(obj1.getListOfContainers().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfContainers());
	
			PulseMessage obj2;
			TS_ASSERT(obj2.getNominalTimeSlice() == 0);
			TS_ASSERT(obj2.getCumulatedTimeSlice() == 0);
			TS_ASSERT(obj2.getListOfContainers().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfContainers());
	
			obj1.setNominalTimeSlice(4000);
			obj1.setCumulatedTimeSlice(4000);
	
			TS_ASSERT(obj1.getNominalTimeSlice() == 4000);
			TS_ASSERT(obj1.getCumulatedTimeSlice() == 4000);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getNominalTimeSlice() == obj2.getNominalTimeSlice());
			TS_ASSERT(obj1.getCumulatedTimeSlice() == obj2.getCumulatedTimeSlice());
			TS_ASSERT(obj1.getSize_ListOfContainers() == obj2.getSize_ListOfContainers());
			TS_ASSERT(obj1.isEmpty_ListOfContainers() == obj2.isEmpty_ListOfContainers());
	
			TS_ASSERT(obj2.getNominalTimeSlice() == 4000);
			TS_ASSERT(obj2.getCumulatedTimeSlice() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data::dmcp;
	
			PulseMessage obj1;
			TS_ASSERT(obj1.getNominalTimeSlice() == 0);
			TS_ASSERT(obj1.getCumulatedTimeSlice() == 0);
			TS_ASSERT(obj1.getListOfContainers().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfContainers());
	
			PulseMessage obj2;
			TS_ASSERT(obj2.getNominalTimeSlice() == 0);
			TS_ASSERT(obj2.getCumulatedTimeSlice() == 0);
			TS_ASSERT(obj2.getListOfContainers().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfContainers());
	
			obj1.setNominalTimeSlice(4000);
			obj1.setCumulatedTimeSlice(4000);
	
			TS_ASSERT(obj1.getNominalTimeSlice() == 4000);
			TS_ASSERT(obj1.getCumulatedTimeSlice() == 4000);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getNominalTimeSlice() == obj2.getNominalTimeSlice());
			TS_ASSERT(obj1.getCumulatedTimeSlice() == obj2.getCumulatedTimeSlice());
			TS_ASSERT(obj1.getSize_ListOfContainers() == obj2.getSize_ListOfContainers());
			TS_ASSERT(obj1.isEmpty_ListOfContainers() == obj2.isEmpty_ListOfContainers());
	
			TS_ASSERT(obj2.getNominalTimeSlice() == 4000);
			TS_ASSERT(obj2.getCumulatedTimeSlice() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_DMCP_PULSEMESSAGE_TESTSUITE_H*/
