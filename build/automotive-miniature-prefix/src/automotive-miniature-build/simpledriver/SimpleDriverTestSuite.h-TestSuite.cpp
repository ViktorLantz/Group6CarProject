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
    std::ofstream ofstr("TEST-simpledriver-SimpleDriverTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "simpledriver-SimpleDriverTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SimpleDriverTest_init = false;
#include "../../../../../automotive/miniature/simpledriver/testsuites/SimpleDriverTestSuite.h"

static SimpleDriverTest suite_SimpleDriverTest;

static CxxTest::List Tests_SimpleDriverTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SimpleDriverTest( "/home/viktor/OpenDaVINCI/automotive/miniature/simpledriver/testsuites/SimpleDriverTestSuite.h", 51, "SimpleDriverTest", suite_SimpleDriverTest, Tests_SimpleDriverTest );

static class TestDescription_suite_SimpleDriverTest_testSimpleDriverSuccessfullyCreated : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SimpleDriverTest_testSimpleDriverSuccessfullyCreated() : CxxTest::RealTestDescription( Tests_SimpleDriverTest, suiteDescription_SimpleDriverTest, 85, "testSimpleDriverSuccessfullyCreated" ) {}
 void runTest() { suite_SimpleDriverTest.testSimpleDriverSuccessfullyCreated(); }
} testDescription_suite_SimpleDriverTest_testSimpleDriverSuccessfullyCreated;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
