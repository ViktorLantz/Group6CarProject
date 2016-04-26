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
    std::ofstream ofstr("TEST-libopendavinci-TCPConnectionTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-TCPConnectionTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TCPConnectionTestSuite_init = false;
#include "../../../../libopendavinci/testsuites/TCPConnectionTestSuite.h"

static TCPConnectionTestSuite suite_TCPConnectionTestSuite;

static CxxTest::List Tests_TCPConnectionTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TCPConnectionTestSuite( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/TCPConnectionTestSuite.h", 162, "TCPConnectionTestSuite", suite_TCPConnectionTestSuite, Tests_TCPConnectionTestSuite );

static class TestDescription_suite_TCPConnectionTestSuite_testTransfer : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TCPConnectionTestSuite_testTransfer() : CxxTest::RealTestDescription( Tests_TCPConnectionTestSuite, suiteDescription_TCPConnectionTestSuite, 165, "testTransfer" ) {}
 void runTest() { suite_TCPConnectionTestSuite.testTransfer(); }
} testDescription_suite_TCPConnectionTestSuite_testTransfer;

static class TestDescription_suite_TCPConnectionTestSuite_testError : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TCPConnectionTestSuite_testError() : CxxTest::RealTestDescription( Tests_TCPConnectionTestSuite, suiteDescription_TCPConnectionTestSuite, 184, "testError" ) {}
 void runTest() { suite_TCPConnectionTestSuite.testError(); }
} testDescription_suite_TCPConnectionTestSuite_testError;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
