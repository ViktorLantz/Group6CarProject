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
    std::ofstream ofstr("TEST-libopendavinci-DMCPConnectionTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-DMCPConnectionTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_DMCPConnectionTestsuite_init = false;
#include "../../../../libopendavinci/testsuites/DMCPConnectionTestSuite.h"

static DMCPConnectionTestsuite suite_DMCPConnectionTestsuite;

static CxxTest::List Tests_DMCPConnectionTestsuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DMCPConnectionTestsuite( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/DMCPConnectionTestSuite.h", 49, "DMCPConnectionTestsuite", suite_DMCPConnectionTestsuite, Tests_DMCPConnectionTestsuite );

static class TestDescription_suite_DMCPConnectionTestsuite_testClientAndServer : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DMCPConnectionTestsuite_testClientAndServer() : CxxTest::RealTestDescription( Tests_DMCPConnectionTestsuite, suiteDescription_DMCPConnectionTestsuite, 62, "testClientAndServer" ) {}
 void runTest() { suite_DMCPConnectionTestsuite.testClientAndServer(); }
} testDescription_suite_DMCPConnectionTestsuite_testClientAndServer;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
