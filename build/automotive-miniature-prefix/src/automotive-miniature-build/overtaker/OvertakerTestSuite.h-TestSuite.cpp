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
    std::ofstream ofstr("TEST-overtaker-OvertakerTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "overtaker-OvertakerTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_OvertakerTest_init = false;
#include "../../../../../automotive/miniature/overtaker/testsuites/OvertakerTestSuite.h"

static OvertakerTest suite_OvertakerTest;

static CxxTest::List Tests_OvertakerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_OvertakerTest( "/home/viktor/OpenDaVINCI/automotive/miniature/overtaker/testsuites/OvertakerTestSuite.h", 49, "OvertakerTest", suite_OvertakerTest, Tests_OvertakerTest );

static class TestDescription_suite_OvertakerTest_testOvertakerSuccessfullyCreated : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_OvertakerTest_testOvertakerSuccessfullyCreated() : CxxTest::RealTestDescription( Tests_OvertakerTest, suiteDescription_OvertakerTest, 83, "testOvertakerSuccessfullyCreated" ) {}
 void runTest() { suite_OvertakerTest.testOvertakerSuccessfullyCreated(); }
} testDescription_suite_OvertakerTest_testOvertakerSuccessfullyCreated;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
