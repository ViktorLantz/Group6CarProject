/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_MINIATURE_SENSORBOARDDATA_TESTSUITE_H
#define AUTOMOTIVE_MINIATURE_SENSORBOARDDATA_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "opendavinci/odcore/opendavinci.h"
#include "opendavinci/odcore/strings/StringToolbox.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "automotivedata/generated/automotive/miniature/SensorBoardData.h"


class automotive_miniature_SensorBoardData_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace automotive::miniature;
	
			SensorBoardData obj1;
			TS_ASSERT(obj1.getNumberOfSensors() == 0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfDistances());
	
			obj1.setNumberOfSensors(4000);
			{
				std::map<uint32_t, double> myExternalMap;
				myExternalMap[600] = 1.0;
				myExternalMap[700] = 2.0;
				myExternalMap[800] = 3.0;
			
				obj1.clear_MapOfDistances();
				TS_ASSERT(obj1.getMapOfDistances().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfDistances());
				TS_ASSERT(!obj1.containsKey_MapOfDistances(600));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
				obj1.setMapOfDistances(myExternalMap);
				TS_ASSERT(obj1.getMapOfDistances().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfDistances());
				TS_ASSERT(obj1.containsKey_MapOfDistances(600));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfDistances(700));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfDistances(800));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
			
				obj1.clear_MapOfDistances();
				TS_ASSERT(obj1.getMapOfDistances().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfDistances());
				TS_ASSERT(!obj1.containsKey_MapOfDistances(600));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			}
			obj1.putTo_MapOfDistances(600, 1.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
			TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
			obj1.putTo_MapOfDistances(700, 2.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
			obj1.putTo_MapOfDistances(800, 3.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(800));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
	
			TS_ASSERT(obj1.getNumberOfSensors() == 4000);
			TS_ASSERT(obj1.getMapOfDistances().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(800));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
		}
	
		void testCreateAndCopyObject() {
			using namespace automotive::miniature;
	
			SensorBoardData obj1;
			TS_ASSERT(obj1.getNumberOfSensors() == 0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfDistances());
	
			SensorBoardData obj2(obj1);
			TS_ASSERT(obj1.getNumberOfSensors() == obj2.getNumberOfSensors());
			TS_ASSERT(obj1.getSize_MapOfDistances() == obj2.getSize_MapOfDistances());
			TS_ASSERT(obj1.isEmpty_MapOfDistances() == obj2.isEmpty_MapOfDistances());
	
			obj1.setNumberOfSensors(4000);
			{
				std::map<uint32_t, double> myExternalMap;
				myExternalMap[600] = 1.0;
				myExternalMap[700] = 2.0;
				myExternalMap[800] = 3.0;
			
				obj1.clear_MapOfDistances();
				TS_ASSERT(obj1.getMapOfDistances().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfDistances());
				TS_ASSERT(!obj1.containsKey_MapOfDistances(600));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
				obj1.setMapOfDistances(myExternalMap);
				TS_ASSERT(obj1.getMapOfDistances().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfDistances());
				TS_ASSERT(obj1.containsKey_MapOfDistances(600));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfDistances(700));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfDistances(800));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
			
				obj1.clear_MapOfDistances();
				TS_ASSERT(obj1.getMapOfDistances().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfDistances());
				TS_ASSERT(!obj1.containsKey_MapOfDistances(600));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			}
			obj1.putTo_MapOfDistances(600, 1.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
			TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
			obj1.putTo_MapOfDistances(700, 2.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
			obj1.putTo_MapOfDistances(800, 3.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(800));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
	
			TS_ASSERT(obj1.getNumberOfSensors() == 4000);
			TS_ASSERT(obj1.getMapOfDistances().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(800));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
	
			SensorBoardData obj3(obj1);
			TS_ASSERT(obj1.getNumberOfSensors() == obj3.getNumberOfSensors());
			TS_ASSERT(obj1.getSize_MapOfDistances() == obj3.getSize_MapOfDistances());
			TS_ASSERT(obj1.isEmpty_MapOfDistances() == obj3.isEmpty_MapOfDistances());
	
			TS_ASSERT(obj3.getNumberOfSensors() == 4000);
			TS_ASSERT(obj3.getMapOfDistances().size() == 3);
			TS_ASSERT(obj3.getSize_MapOfDistances() == 3);
			TS_ASSERT(!obj3.isEmpty_MapOfDistances());
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj3.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(obj3.containsKey_MapOfDistances(800));
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace automotive::miniature;
	
			SensorBoardData obj1;
			TS_ASSERT(obj1.getNumberOfSensors() == 0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfDistances());
	
			SensorBoardData obj2;
			TS_ASSERT(obj2.getNumberOfSensors() == 0);
			TS_ASSERT(obj2.getMapOfDistances().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfDistances() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfDistances());
	
			obj1.setNumberOfSensors(4000);
			{
				std::map<uint32_t, double> myExternalMap;
				myExternalMap[600] = 1.0;
				myExternalMap[700] = 2.0;
				myExternalMap[800] = 3.0;
			
				obj1.clear_MapOfDistances();
				TS_ASSERT(obj1.getMapOfDistances().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfDistances());
				TS_ASSERT(!obj1.containsKey_MapOfDistances(600));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
				obj1.setMapOfDistances(myExternalMap);
				TS_ASSERT(obj1.getMapOfDistances().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfDistances());
				TS_ASSERT(obj1.containsKey_MapOfDistances(600));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfDistances(700));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfDistances(800));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
			
				obj1.clear_MapOfDistances();
				TS_ASSERT(obj1.getMapOfDistances().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfDistances());
				TS_ASSERT(!obj1.containsKey_MapOfDistances(600));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			}
			obj1.putTo_MapOfDistances(600, 1.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
			TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
			obj1.putTo_MapOfDistances(700, 2.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
			obj1.putTo_MapOfDistances(800, 3.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(800));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
	
			TS_ASSERT(obj1.getNumberOfSensors() == 4000);
			TS_ASSERT(obj1.getMapOfDistances().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(800));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getNumberOfSensors() == obj2.getNumberOfSensors());
			TS_ASSERT(obj1.getSize_MapOfDistances() == obj2.getSize_MapOfDistances());
			TS_ASSERT(obj1.isEmpty_MapOfDistances() == obj2.isEmpty_MapOfDistances());
	
			TS_ASSERT(obj2.getNumberOfSensors() == 4000);
			TS_ASSERT(obj2.getMapOfDistances().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfDistances() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfDistances());
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfDistances(800));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace automotive::miniature;
	
			SensorBoardData obj1;
			TS_ASSERT(obj1.getNumberOfSensors() == 0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfDistances());
	
			SensorBoardData obj2;
			TS_ASSERT(obj2.getNumberOfSensors() == 0);
			TS_ASSERT(obj2.getMapOfDistances().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfDistances() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfDistances());
	
			obj1.setNumberOfSensors(4000);
			{
				std::map<uint32_t, double> myExternalMap;
				myExternalMap[600] = 1.0;
				myExternalMap[700] = 2.0;
				myExternalMap[800] = 3.0;
			
				obj1.clear_MapOfDistances();
				TS_ASSERT(obj1.getMapOfDistances().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfDistances());
				TS_ASSERT(!obj1.containsKey_MapOfDistances(600));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
				obj1.setMapOfDistances(myExternalMap);
				TS_ASSERT(obj1.getMapOfDistances().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfDistances());
				TS_ASSERT(obj1.containsKey_MapOfDistances(600));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfDistances(700));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfDistances(800));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
			
				obj1.clear_MapOfDistances();
				TS_ASSERT(obj1.getMapOfDistances().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfDistances() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfDistances());
				TS_ASSERT(!obj1.containsKey_MapOfDistances(600));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
				TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			}
			obj1.putTo_MapOfDistances(600, 1.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfDistances(700));
			TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
			obj1.putTo_MapOfDistances(700, 2.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfDistances(800));
			
			obj1.putTo_MapOfDistances(800, 3.0);
			TS_ASSERT(obj1.getMapOfDistances().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT(obj1.containsKey_MapOfDistances(600));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(800));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
	
			TS_ASSERT(obj1.getNumberOfSensors() == 4000);
			TS_ASSERT(obj1.getMapOfDistances().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfDistances() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfDistances());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfDistances(800));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getNumberOfSensors() == obj2.getNumberOfSensors());
			TS_ASSERT(obj1.getSize_MapOfDistances() == obj2.getSize_MapOfDistances());
			TS_ASSERT(obj1.isEmpty_MapOfDistances() == obj2.isEmpty_MapOfDistances());
	
			TS_ASSERT(obj2.getNumberOfSensors() == 4000);
			TS_ASSERT(obj2.getMapOfDistances().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfDistances() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfDistances());
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfDistances(600), 1.0, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfDistances(700));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfDistances(700), 2.0, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfDistances(800));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfDistances(800), 3.0, 1e-5);
	
			TS_ASSERT(odcore::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*AUTOMOTIVE_MINIATURE_SENSORBOARDDATA_TESTSUITE_H*/
