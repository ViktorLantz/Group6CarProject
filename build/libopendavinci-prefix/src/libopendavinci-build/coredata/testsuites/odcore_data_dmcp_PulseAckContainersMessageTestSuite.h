/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_PULSEACKCONTAINERSMESSAGE_TESTSUITE_H
#define ODCORE_DATA_DMCP_PULSEACKCONTAINERSMESSAGE_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/dmcp/PulseAckContainersMessage.h"

#include "opendavinci/odcore/data/Container.h"

class odcore_data_dmcp_PulseAckContainersMessage_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data::dmcp;
	
			PulseAckContainersMessage obj1;
			TS_ASSERT(obj1.getListOfContainers().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfContainers());
	
	
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data::dmcp;
	
			PulseAckContainersMessage obj1;
			TS_ASSERT(obj1.getListOfContainers().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfContainers());
	
			PulseAckContainersMessage obj2(obj1);
			TS_ASSERT(obj1.getSize_ListOfContainers() == obj2.getSize_ListOfContainers());
			TS_ASSERT(obj1.isEmpty_ListOfContainers() == obj2.isEmpty_ListOfContainers());
	
	
	
			PulseAckContainersMessage obj3(obj1);
			TS_ASSERT(obj1.getSize_ListOfContainers() == obj3.getSize_ListOfContainers());
			TS_ASSERT(obj1.isEmpty_ListOfContainers() == obj3.isEmpty_ListOfContainers());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data::dmcp;
	
			PulseAckContainersMessage obj1;
			TS_ASSERT(obj1.getListOfContainers().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfContainers());
	
			PulseAckContainersMessage obj2;
			TS_ASSERT(obj2.getListOfContainers().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfContainers());
	
	
	
			obj2 = obj1;
			TS_ASSERT(obj1.getSize_ListOfContainers() == obj2.getSize_ListOfContainers());
			TS_ASSERT(obj1.isEmpty_ListOfContainers() == obj2.isEmpty_ListOfContainers());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data::dmcp;
	
			PulseAckContainersMessage obj1;
			TS_ASSERT(obj1.getListOfContainers().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfContainers());
	
			PulseAckContainersMessage obj2;
			TS_ASSERT(obj2.getListOfContainers().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfContainers() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfContainers());
	
	
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getSize_ListOfContainers() == obj2.getSize_ListOfContainers());
			TS_ASSERT(obj1.isEmpty_ListOfContainers() == obj2.isEmpty_ListOfContainers());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_DMCP_PULSEACKCONTAINERSMESSAGE_TESTSUITE_H*/
