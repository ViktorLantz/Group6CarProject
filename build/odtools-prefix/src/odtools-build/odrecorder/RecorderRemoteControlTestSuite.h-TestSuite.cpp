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
    std::ofstream ofstr("TEST-odrecorder-RecorderRemoteControlTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odrecorder-RecorderRemoteControlTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_RecorderTest_init = false;
#include "../../../../../odtools/odrecorder/testsuites/RecorderRemoteControlTestSuite.h"

static RecorderTest suite_RecorderTest;

static CxxTest::List Tests_RecorderTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RecorderTest( "/home/viktor/OpenDaVINCI/odtools/odrecorder/testsuites/RecorderRemoteControlTestSuite.h", 79, "RecorderTest", suite_RecorderTest, Tests_RecorderTest );

static class TestDescription_suite_RecorderTest_testRecorderRemoteControl : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RecorderTest_testRecorderRemoteControl() : CxxTest::RealTestDescription( Tests_RecorderTest, suiteDescription_RecorderTest, 98, "testRecorderRemoteControl" ) {}
 void runTest() { suite_RecorderTest.testRecorderRemoteControl(); }
} testDescription_suite_RecorderTest_testRecorderRemoteControl;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
