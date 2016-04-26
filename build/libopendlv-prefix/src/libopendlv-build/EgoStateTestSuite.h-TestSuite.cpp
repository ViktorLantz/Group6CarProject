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
    std::ofstream ofstr("TEST-libopendlv-EgoStateTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendlv-EgoStateTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_EgoStateTest_init = false;
#include "../../../../libopendlv/testsuites/EgoStateTestSuite.h"

static EgoStateTest suite_EgoStateTest;

static CxxTest::List Tests_EgoStateTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_EgoStateTest( "/home/viktor/OpenDaVINCI/libopendlv/testsuites/EgoStateTestSuite.h", 35, "EgoStateTest", suite_EgoStateTest, Tests_EgoStateTest );

static class TestDescription_suite_EgoStateTest_testEgoState : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EgoStateTest_testEgoState() : CxxTest::RealTestDescription( Tests_EgoStateTest, suiteDescription_EgoStateTest, 37, "testEgoState" ) {}
 void runTest() { suite_EgoStateTest.testEgoState(); }
} testDescription_suite_EgoStateTest_testEgoState;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
