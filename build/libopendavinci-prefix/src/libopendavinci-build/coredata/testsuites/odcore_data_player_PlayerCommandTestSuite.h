/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_PLAYER_PLAYERCOMMAND_TESTSUITE_H
#define ODCORE_DATA_PLAYER_PLAYERCOMMAND_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "opendavinci/generated/odcore/data/player/PlayerCommand.h"


class odcore_data_player_PlayerCommand_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace odcore::data::player;
	
			PlayerCommand obj1;
	
	
		}
	
		void testCreateAndCopyObject() {
			using namespace odcore::data::player;
	
			PlayerCommand obj1;
	
			PlayerCommand obj2(obj1);
	
	
	
			PlayerCommand obj3(obj1);
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace odcore::data::player;
	
			PlayerCommand obj1;
	
			PlayerCommand obj2;
	
	
	
			obj2 = obj1;
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace odcore::data::player;
	
			PlayerCommand obj1;
	
			PlayerCommand obj2;
	
	
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
	
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*ODCORE_DATA_PLAYER_PLAYERCOMMAND_TESTSUITE_H*/
