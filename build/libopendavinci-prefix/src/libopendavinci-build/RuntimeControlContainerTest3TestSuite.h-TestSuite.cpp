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
    std::ofstream ofstr("TEST-libopendavinci-RuntimeControlContainerTest3TestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-RuntimeControlContainerTest3TestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_RuntimeControlContainerTest_init = false;
#include "../../../../libopendavinci/testsuites/RuntimeControlContainerTest3TestSuite.h"

static RuntimeControlContainerTest suite_RuntimeControlContainerTest;

static CxxTest::List Tests_RuntimeControlContainerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RuntimeControlContainerTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/RuntimeControlContainerTest3TestSuite.h", 417, "RuntimeControlContainerTest", suite_RuntimeControlContainerTest, Tests_RuntimeControlContainerTest );

static class TestDescription_suite_RuntimeControlContainerTest_testRuntimeControlContainerRegularRunReceivingSendingAppTwiceAsFastAsSC : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RuntimeControlContainerTest_testRuntimeControlContainerRegularRunReceivingSendingAppTwiceAsFastAsSC() : CxxTest::RealTestDescription( Tests_RuntimeControlContainerTest, suiteDescription_RuntimeControlContainerTest, 420, "testRuntimeControlContainerRegularRunReceivingSendingAppTwiceAsFastAsSC" ) {}
 void runTest() { suite_RuntimeControlContainerTest.testRuntimeControlContainerRegularRunReceivingSendingAppTwiceAsFastAsSC(); }
} testDescription_suite_RuntimeControlContainerTest_testRuntimeControlContainerRegularRunReceivingSendingAppTwiceAsFastAsSC;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
