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
    std::ofstream ofstr("TEST-libopendavinci-ConnectionTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ConnectionTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ConnectionTestsuite_init = false;
#include "../../../../libopendavinci/testsuites/ConnectionTestSuite.h"

static ConnectionTestsuite suite_ConnectionTestsuite;

static CxxTest::List Tests_ConnectionTestsuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ConnectionTestsuite( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ConnectionTestSuite.h", 46, "ConnectionTestsuite", suite_ConnectionTestsuite, Tests_ConnectionTestsuite );

static class TestDescription_suite_ConnectionTestsuite_testAcceptAndConnect : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConnectionTestsuite_testAcceptAndConnect() : CxxTest::RealTestDescription( Tests_ConnectionTestsuite, suiteDescription_ConnectionTestsuite, 48, "testAcceptAndConnect" ) {}
 void runTest() { suite_ConnectionTestsuite.testAcceptAndConnect(); }
} testDescription_suite_ConnectionTestsuite_testAcceptAndConnect;

static class TestDescription_suite_ConnectionTestsuite_testErrorHandler : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConnectionTestsuite_testErrorHandler() : CxxTest::RealTestDescription( Tests_ConnectionTestsuite, suiteDescription_ConnectionTestsuite, 97, "testErrorHandler" ) {}
 void runTest() { suite_ConnectionTestsuite.testErrorHandler(); }
} testDescription_suite_ConnectionTestsuite_testErrorHandler;

static class TestDescription_suite_ConnectionTestsuite_testTransfer : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConnectionTestsuite_testTransfer() : CxxTest::RealTestDescription( Tests_ConnectionTestsuite, suiteDescription_ConnectionTestsuite, 128, "testTransfer" ) {}
 void runTest() { suite_ConnectionTestsuite.testTransfer(); }
} testDescription_suite_ConnectionTestsuite_testTransfer;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
