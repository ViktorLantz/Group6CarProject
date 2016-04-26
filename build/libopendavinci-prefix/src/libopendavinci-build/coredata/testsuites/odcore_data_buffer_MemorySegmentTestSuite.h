/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_BUFFER_MEMORYSEGMENT_TESTSUITE_H
#define ODCORE_DATA_BUFFER_MEMORYSEGMENT_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/buffer/MemorySegment.h"

#include "opendavinci/odcore/data/Container.h"

class odcore_data_buffer_MemorySegment_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data::buffer;
	
			MemorySegment obj1;
			TS_ASSERT(obj1.getSize() == 0);
			TS_ASSERT(obj1.getConsumedSize() == 0);
	
			obj1.setSize(4000);
			obj1.setConsumedSize(4000);
			obj1.setIdentifier(400);
	
			TS_ASSERT(obj1.getSize() == 4000);
			TS_ASSERT(obj1.getConsumedSize() == 4000);
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data::buffer;
	
			MemorySegment obj1;
			TS_ASSERT(obj1.getSize() == 0);
			TS_ASSERT(obj1.getConsumedSize() == 0);
	
			MemorySegment obj2(obj1);
			TS_ASSERT(obj1.getSize() == obj2.getSize());
			TS_ASSERT(obj1.getConsumedSize() == obj2.getConsumedSize());
	
			obj1.setSize(4000);
			obj1.setConsumedSize(4000);
			obj1.setIdentifier(400);
	
			TS_ASSERT(obj1.getSize() == 4000);
			TS_ASSERT(obj1.getConsumedSize() == 4000);
	
			MemorySegment obj3(obj1);
			TS_ASSERT(obj1.getSize() == obj3.getSize());
			TS_ASSERT(obj1.getConsumedSize() == obj3.getConsumedSize());
	
			TS_ASSERT(obj3.getSize() == 4000);
			TS_ASSERT(obj3.getConsumedSize() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data::buffer;
	
			MemorySegment obj1;
			TS_ASSERT(obj1.getSize() == 0);
			TS_ASSERT(obj1.getConsumedSize() == 0);
	
			MemorySegment obj2;
			TS_ASSERT(obj2.getSize() == 0);
			TS_ASSERT(obj2.getConsumedSize() == 0);
	
			obj1.setSize(4000);
			obj1.setConsumedSize(4000);
			obj1.setIdentifier(400);
	
			TS_ASSERT(obj1.getSize() == 4000);
			TS_ASSERT(obj1.getConsumedSize() == 4000);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getSize() == obj2.getSize());
			TS_ASSERT(obj1.getConsumedSize() == obj2.getConsumedSize());
	
			TS_ASSERT(obj2.getSize() == 4000);
			TS_ASSERT(obj2.getConsumedSize() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data::buffer;
	
			MemorySegment obj1;
			TS_ASSERT(obj1.getSize() == 0);
			TS_ASSERT(obj1.getConsumedSize() == 0);
	
			MemorySegment obj2;
			TS_ASSERT(obj2.getSize() == 0);
			TS_ASSERT(obj2.getConsumedSize() == 0);
	
			obj1.setSize(4000);
			obj1.setConsumedSize(4000);
			obj1.setIdentifier(400);
	
			TS_ASSERT(obj1.getSize() == 4000);
			TS_ASSERT(obj1.getConsumedSize() == 4000);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getSize() == obj2.getSize());
			TS_ASSERT(obj1.getConsumedSize() == obj2.getConsumedSize());
	
			TS_ASSERT(obj2.getSize() == 4000);
			TS_ASSERT(obj2.getConsumedSize() == 4000);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_BUFFER_MEMORYSEGMENT_TESTSUITE_H*/
