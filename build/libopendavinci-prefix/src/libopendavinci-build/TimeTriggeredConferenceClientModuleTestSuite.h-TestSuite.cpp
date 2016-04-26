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
    std::ofstream ofstr("TEST-libopendavinci-TimeTriggeredConferenceClientModuleTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-TimeTriggeredConferenceClientModuleTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TimeTriggeredConferenceClientModuleTest_init = false;
#include "../../../../libopendavinci/testsuites/TimeTriggeredConferenceClientModuleTestSuite.h"

static TimeTriggeredConferenceClientModuleTest suite_TimeTriggeredConferenceClientModuleTest;

static CxxTest::List Tests_TimeTriggeredConferenceClientModuleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TimeTriggeredConferenceClientModuleTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/TimeTriggeredConferenceClientModuleTestSuite.h", 137, "TimeTriggeredConferenceClientModuleTest", suite_TimeTriggeredConferenceClientModuleTest, Tests_TimeTriggeredConferenceClientModuleTest );

static class TestDescription_suite_TimeTriggeredConferenceClientModuleTest_testTimeTriggeredTimeTriggeredConferenceClientModule : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimeTriggeredConferenceClientModuleTest_testTimeTriggeredTimeTriggeredConferenceClientModule() : CxxTest::RealTestDescription( Tests_TimeTriggeredConferenceClientModuleTest, suiteDescription_TimeTriggeredConferenceClientModuleTest, 156, "testTimeTriggeredTimeTriggeredConferenceClientModule" ) {}
 void runTest() { suite_TimeTriggeredConferenceClientModuleTest.testTimeTriggeredTimeTriggeredConferenceClientModule(); }
} testDescription_suite_TimeTriggeredConferenceClientModuleTest_testTimeTriggeredTimeTriggeredConferenceClientModule;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
