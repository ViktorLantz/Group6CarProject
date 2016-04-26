/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <fstream>
#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XUnitPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    std::ofstream ofstr("TEST-libopendavinci-DataStoreSimpleDBTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-DataStoreSimpleDBTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_DataStoreTest_init = false;
#include "../../../../libopendavinci/testsuites/DataStoreSimpleDBTestSuite.h"

static DataStoreTest suite_DataStoreTest;

static CxxTest::List Tests_DataStoreTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DataStoreTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/DataStoreSimpleDBTestSuite.h", 205, "DataStoreTest", suite_DataStoreTest, Tests_DataStoreTest );

static class TestDescription_suite_DataStoreTest_testDataStore : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DataStoreTest_testDataStore() : CxxTest::RealTestDescription( Tests_DataStoreTest, suiteDescription_DataStoreTest, 208, "testDataStore" ) {}
 void runTest() { suite_DataStoreTest.testDataStore(); }
} testDescription_suite_DataStoreTest_testDataStore;

static class TestDescription_suite_DataStoreTest_testMassData : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DataStoreTest_testMassData() : CxxTest::RealTestDescription( Tests_DataStoreTest, suiteDescription_DataStoreTest, 229, "testMassData" ) {}
 void runTest() { suite_DataStoreTest.testMassData(); }
} testDescription_suite_DataStoreTest_testMassData;

static class TestDescription_suite_DataStoreTest_testSerializationDeserialization : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DataStoreTest_testSerializationDeserialization() : CxxTest::RealTestDescription( Tests_DataStoreTest, suiteDescription_DataStoreTest, 274, "testSerializationDeserialization" ) {}
 void runTest() { suite_DataStoreTest.testSerializationDeserialization(); }
} testDescription_suite_DataStoreTest_testSerializationDeserialization;

static class TestDescription_suite_DataStoreTest_testDataStoreForDataExchange : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DataStoreTest_testDataStoreForDataExchange() : CxxTest::RealTestDescription( Tests_DataStoreTest, suiteDescription_DataStoreTest, 303, "testDataStoreForDataExchange" ) {}
 void runTest() { suite_DataStoreTest.testDataStoreForDataExchange(); }
} testDescription_suite_DataStoreTest_testDataStoreForDataExchange;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
