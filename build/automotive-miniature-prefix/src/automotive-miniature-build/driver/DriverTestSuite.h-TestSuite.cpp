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
    std::ofstream ofstr("TEST-driver-DriverTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "driver-DriverTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_DriverTest_init = false;
#include "../../../../../automotive/miniature/driver/testsuites/DriverTestSuite.h"

static DriverTest suite_DriverTest;

static CxxTest::List Tests_DriverTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DriverTest( "/home/viktor/OpenDaVINCI/automotive/miniature/driver/testsuites/DriverTestSuite.h", 51, "DriverTest", suite_DriverTest, Tests_DriverTest );

static class TestDescription_suite_DriverTest_testDriverSuccessfullyCreated : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DriverTest_testDriverSuccessfullyCreated() : CxxTest::RealTestDescription( Tests_DriverTest, suiteDescription_DriverTest, 85, "testDriverSuccessfullyCreated" ) {}
 void runTest() { suite_DriverTest.testDriverSuccessfullyCreated(); }
} testDescription_suite_DriverTest_testDriverSuccessfullyCreated;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
