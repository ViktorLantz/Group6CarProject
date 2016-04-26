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
    std::ofstream ofstr("TEST-libopendavinci-RuntimeControlContainerTest4TestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-RuntimeControlContainerTest4TestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_RuntimeControlContainerTest_init = false;
#include "../../../../libopendavinci/testsuites/RuntimeControlContainerTest4TestSuite.h"

static RuntimeControlContainerTest suite_RuntimeControlContainerTest;

static CxxTest::List Tests_RuntimeControlContainerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RuntimeControlContainerTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/RuntimeControlContainerTest4TestSuite.h", 417, "RuntimeControlContainerTest", suite_RuntimeControlContainerTest, Tests_RuntimeControlContainerTest );

static class TestDescription_suite_RuntimeControlContainerTest_testRuntimeControlContainerRegularRunReceivingSendingAppHalfAsFastAsSC : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RuntimeControlContainerTest_testRuntimeControlContainerRegularRunReceivingSendingAppHalfAsFastAsSC() : CxxTest::RealTestDescription( Tests_RuntimeControlContainerTest, suiteDescription_RuntimeControlContainerTest, 420, "testRuntimeControlContainerRegularRunReceivingSendingAppHalfAsFastAsSC" ) {}
 void runTest() { suite_RuntimeControlContainerTest.testRuntimeControlContainerRegularRunReceivingSendingAppHalfAsFastAsSC(); }
} testDescription_suite_RuntimeControlContainerTest_testRuntimeControlContainerRegularRunReceivingSendingAppHalfAsFastAsSC;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
