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
    std::ofstream ofstr("TEST-libopendavinci-DataTriggeredConferenceClientModuleTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-DataTriggeredConferenceClientModuleTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_DataTriggeredConferenceClientModuleTest_init = false;
#include "../../../../libopendavinci/testsuites/DataTriggeredConferenceClientModuleTestSuite.h"

static DataTriggeredConferenceClientModuleTest suite_DataTriggeredConferenceClientModuleTest;

static CxxTest::List Tests_DataTriggeredConferenceClientModuleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DataTriggeredConferenceClientModuleTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/DataTriggeredConferenceClientModuleTestSuite.h", 247, "DataTriggeredConferenceClientModuleTest", suite_DataTriggeredConferenceClientModuleTest, Tests_DataTriggeredConferenceClientModuleTest );

static class TestDescription_suite_DataTriggeredConferenceClientModuleTest_testTimeTriggeredTimeTriggeredConferenceClientModule : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DataTriggeredConferenceClientModuleTest_testTimeTriggeredTimeTriggeredConferenceClientModule() : CxxTest::RealTestDescription( Tests_DataTriggeredConferenceClientModuleTest, suiteDescription_DataTriggeredConferenceClientModuleTest, 266, "testTimeTriggeredTimeTriggeredConferenceClientModule" ) {}
 void runTest() { suite_DataTriggeredConferenceClientModuleTest.testTimeTriggeredTimeTriggeredConferenceClientModule(); }
} testDescription_suite_DataTriggeredConferenceClientModuleTest_testTimeTriggeredTimeTriggeredConferenceClientModule;

static class TestDescription_suite_DataTriggeredConferenceClientModuleTest_testDataTriggeredTimeTriggeredConferenceClientModules : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DataTriggeredConferenceClientModuleTest_testDataTriggeredTimeTriggeredConferenceClientModules() : CxxTest::RealTestDescription( Tests_DataTriggeredConferenceClientModuleTest, suiteDescription_DataTriggeredConferenceClientModuleTest, 336, "testDataTriggeredTimeTriggeredConferenceClientModules" ) {}
 void runTest() { suite_DataTriggeredConferenceClientModuleTest.testDataTriggeredTimeTriggeredConferenceClientModules(); }
} testDescription_suite_DataTriggeredConferenceClientModuleTest_testDataTriggeredTimeTriggeredConferenceClientModules;

static class TestDescription_suite_DataTriggeredConferenceClientModuleTest_testDataTriggeredTimeTriggeredConferenceClientModulesFreq10 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DataTriggeredConferenceClientModuleTest_testDataTriggeredTimeTriggeredConferenceClientModulesFreq10() : CxxTest::RealTestDescription( Tests_DataTriggeredConferenceClientModuleTest, suiteDescription_DataTriggeredConferenceClientModuleTest, 440, "testDataTriggeredTimeTriggeredConferenceClientModulesFreq10" ) {}
 void runTest() { suite_DataTriggeredConferenceClientModuleTest.testDataTriggeredTimeTriggeredConferenceClientModulesFreq10(); }
} testDescription_suite_DataTriggeredConferenceClientModuleTest_testDataTriggeredTimeTriggeredConferenceClientModulesFreq10;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
