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
    std::ofstream ofstr("TEST-libopendavinci-RuntimeControlContainerMultipleAppsTest1TestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-RuntimeControlContainerMultipleAppsTest1TestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_RuntimeControlContainerMultipleAppsTest_init = false;
#include "../../../../libopendavinci/testsuites/RuntimeControlContainerMultipleAppsTest1TestSuite.h"

static RuntimeControlContainerMultipleAppsTest suite_RuntimeControlContainerMultipleAppsTest;

static CxxTest::List Tests_RuntimeControlContainerMultipleAppsTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RuntimeControlContainerMultipleAppsTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/RuntimeControlContainerMultipleAppsTest1TestSuite.h", 499, "RuntimeControlContainerMultipleAppsTest", suite_RuntimeControlContainerMultipleAppsTest, Tests_RuntimeControlContainerMultipleAppsTest );

static class TestDescription_suite_RuntimeControlContainerMultipleAppsTest_testRuntimeControlContainerRegularRunReceivingSendingTwoAppsSameFreqOneSP : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RuntimeControlContainerMultipleAppsTest_testRuntimeControlContainerRegularRunReceivingSendingTwoAppsSameFreqOneSP() : CxxTest::RealTestDescription( Tests_RuntimeControlContainerMultipleAppsTest, suiteDescription_RuntimeControlContainerMultipleAppsTest, 501, "testRuntimeControlContainerRegularRunReceivingSendingTwoAppsSameFreqOneSP" ) {}
 void runTest() { suite_RuntimeControlContainerMultipleAppsTest.testRuntimeControlContainerRegularRunReceivingSendingTwoAppsSameFreqOneSP(); }
} testDescription_suite_RuntimeControlContainerMultipleAppsTest_testRuntimeControlContainerRegularRunReceivingSendingTwoAppsSameFreqOneSP;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
