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
    std::ofstream ofstr("TEST-odplayer-PlayerDoubleRealtimeTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odplayer-PlayerDoubleRealtimeTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_PlayerModuleTest_init = false;
#include "../../../../../odtools/odplayer/testsuites/PlayerDoubleRealtimeTestSuite.h"

static PlayerModuleTest suite_PlayerModuleTest;

static CxxTest::List Tests_PlayerModuleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PlayerModuleTest( "/home/viktor/OpenDaVINCI/odtools/odplayer/testsuites/PlayerDoubleRealtimeTestSuite.h", 104, "PlayerModuleTest", suite_PlayerModuleTest, Tests_PlayerModuleTest );

static class TestDescription_suite_PlayerModuleTest_testDoubleRealtimeReplayNoRewind : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PlayerModuleTest_testDoubleRealtimeReplayNoRewind() : CxxTest::RealTestDescription( Tests_PlayerModuleTest, suiteDescription_PlayerModuleTest, 123, "testDoubleRealtimeReplayNoRewind" ) {}
 void runTest() { suite_PlayerModuleTest.testDoubleRealtimeReplayNoRewind(); }
} testDescription_suite_PlayerModuleTest_testDoubleRealtimeReplayNoRewind;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
