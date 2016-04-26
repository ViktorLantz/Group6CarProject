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
    std::ofstream ofstr("TEST-sidewaysparker-SidewaysParkerTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "sidewaysparker-SidewaysParkerTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SidewaysParkerTest_init = false;
#include "../../../../../automotive/miniature/sidewaysparker/testsuites/SidewaysParkerTestSuite.h"

static SidewaysParkerTest suite_SidewaysParkerTest;

static CxxTest::List Tests_SidewaysParkerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SidewaysParkerTest( "/home/viktor/OpenDaVINCI/automotive/miniature/sidewaysparker/testsuites/SidewaysParkerTestSuite.h", 49, "SidewaysParkerTest", suite_SidewaysParkerTest, Tests_SidewaysParkerTest );

static class TestDescription_suite_SidewaysParkerTest_testSidewaysParkerSuccessfullyCreated : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SidewaysParkerTest_testSidewaysParkerSuccessfullyCreated() : CxxTest::RealTestDescription( Tests_SidewaysParkerTest, suiteDescription_SidewaysParkerTest, 83, "testSidewaysParkerSuccessfullyCreated" ) {}
 void runTest() { suite_SidewaysParkerTest.testSidewaysParkerSuccessfullyCreated(); }
} testDescription_suite_SidewaysParkerTest_testSidewaysParkerSuccessfullyCreated;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
