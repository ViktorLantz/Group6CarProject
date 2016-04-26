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
    std::ofstream ofstr("TEST-libopendavinci-UDPTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-UDPTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_UDPTestsuite_init = false;
#include "../../../../libopendavinci/testsuites/UDPTestSuite.h"

static UDPTestsuite suite_UDPTestsuite;

static CxxTest::List Tests_UDPTestsuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_UDPTestsuite( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/UDPTestSuite.h", 113, "UDPTestsuite", suite_UDPTestsuite, Tests_UDPTestsuite );

static class TestDescription_suite_UDPTestsuite_testDataExchange : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_UDPTestsuite_testDataExchange() : CxxTest::RealTestDescription( Tests_UDPTestsuite, suiteDescription_UDPTestsuite, 116, "testDataExchange" ) {}
 void runTest() { suite_UDPTestsuite.testDataExchange(); }
} testDescription_suite_UDPTestsuite_testDataExchange;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
