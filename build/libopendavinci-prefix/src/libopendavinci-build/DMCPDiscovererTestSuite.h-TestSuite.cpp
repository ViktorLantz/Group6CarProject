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
    std::ofstream ofstr("TEST-libopendavinci-DMCPDiscovererTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-DMCPDiscovererTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_DMCPDiscovererTestsuite_init = false;
#include "../../../../libopendavinci/testsuites/DMCPDiscovererTestSuite.h"

static DMCPDiscovererTestsuite suite_DMCPDiscovererTestsuite;

static CxxTest::List Tests_DMCPDiscovererTestsuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DMCPDiscovererTestsuite( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/DMCPDiscovererTestSuite.h", 72, "DMCPDiscovererTestsuite", suite_DMCPDiscovererTestsuite, Tests_DMCPDiscovererTestsuite );

static class TestDescription_suite_DMCPDiscovererTestsuite_testClientAndServer : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DMCPDiscovererTestsuite_testClientAndServer() : CxxTest::RealTestDescription( Tests_DMCPDiscovererTestsuite, suiteDescription_DMCPDiscovererTestsuite, 76, "testClientAndServer" ) {}
 void runTest() { suite_DMCPDiscovererTestsuite.testClientAndServer(); }
} testDescription_suite_DMCPDiscovererTestsuite_testClientAndServer;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
