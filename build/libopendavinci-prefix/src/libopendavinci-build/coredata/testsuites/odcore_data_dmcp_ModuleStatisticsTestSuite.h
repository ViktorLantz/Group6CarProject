/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_MODULESTATISTICS_TESTSUITE_H
#define ODCORE_DATA_DMCP_MODULESTATISTICS_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/dmcp/ModuleStatistics.h"

#include "opendavinci/generated/odcore/data/dmcp/ModuleStatistic.h"

class odcore_data_dmcp_ModuleStatistics_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data::dmcp;
	
			ModuleStatistics obj1;
			TS_ASSERT(obj1.getListOfModuleStatistics().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfModuleStatistics() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfModuleStatistics());
	
	
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data::dmcp;
	
			ModuleStatistics obj1;
			TS_ASSERT(obj1.getListOfModuleStatistics().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfModuleStatistics() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfModuleStatistics());
	
			ModuleStatistics obj2(obj1);
			TS_ASSERT(obj1.getSize_ListOfModuleStatistics() == obj2.getSize_ListOfModuleStatistics());
			TS_ASSERT(obj1.isEmpty_ListOfModuleStatistics() == obj2.isEmpty_ListOfModuleStatistics());
	
	
	
			ModuleStatistics obj3(obj1);
			TS_ASSERT(obj1.getSize_ListOfModuleStatistics() == obj3.getSize_ListOfModuleStatistics());
			TS_ASSERT(obj1.isEmpty_ListOfModuleStatistics() == obj3.isEmpty_ListOfModuleStatistics());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data::dmcp;
	
			ModuleStatistics obj1;
			TS_ASSERT(obj1.getListOfModuleStatistics().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfModuleStatistics() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfModuleStatistics());
	
			ModuleStatistics obj2;
			TS_ASSERT(obj2.getListOfModuleStatistics().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfModuleStatistics() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfModuleStatistics());
	
	
	
			obj2 = obj1;
			TS_ASSERT(obj1.getSize_ListOfModuleStatistics() == obj2.getSize_ListOfModuleStatistics());
			TS_ASSERT(obj1.isEmpty_ListOfModuleStatistics() == obj2.isEmpty_ListOfModuleStatistics());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data::dmcp;
	
			ModuleStatistics obj1;
			TS_ASSERT(obj1.getListOfModuleStatistics().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfModuleStatistics() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfModuleStatistics());
	
			ModuleStatistics obj2;
			TS_ASSERT(obj2.getListOfModuleStatistics().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfModuleStatistics() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfModuleStatistics());
	
	
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getSize_ListOfModuleStatistics() == obj2.getSize_ListOfModuleStatistics());
			TS_ASSERT(obj1.isEmpty_ListOfModuleStatistics() == obj2.isEmpty_ListOfModuleStatistics());
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_DMCP_MODULESTATISTICS_TESTSUITE_H*/
