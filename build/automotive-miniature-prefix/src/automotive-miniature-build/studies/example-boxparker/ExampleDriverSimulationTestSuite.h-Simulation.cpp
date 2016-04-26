/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <fstream>
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XUnitPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    std::ofstream ofstr("TEST-example-boxparker-.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "example-boxparker-";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ExampleDriverSimulationTestSuite_init = false;
#include "../../../../../../automotive/miniature/studies/example-boxparker/testsuites/ExampleDriverSimulationTestSuite.h"

static ExampleDriverSimulationTestSuite suite_ExampleDriverSimulationTestSuite;

static CxxTest::List Tests_ExampleDriverSimulationTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ExampleDriverSimulationTestSuite( "/home/viktor/OpenDaVINCI/automotive/miniature/studies/example-boxparker/testsuites/ExampleDriverSimulationTestSuite.h", 30, "ExampleDriverSimulationTestSuite", suite_ExampleDriverSimulationTestSuite, Tests_ExampleDriverSimulationTestSuite );

static class TestDescription_suite_ExampleDriverSimulationTestSuite_testRunSimulation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ExampleDriverSimulationTestSuite_testRunSimulation() : CxxTest::RealTestDescription( Tests_ExampleDriverSimulationTestSuite, suiteDescription_ExampleDriverSimulationTestSuite, 33, "testRunSimulation" ) {}
 void runTest() { suite_ExampleDriverSimulationTestSuite.testRunSimulation(); }
} testDescription_suite_ExampleDriverSimulationTestSuite_testRunSimulation;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
