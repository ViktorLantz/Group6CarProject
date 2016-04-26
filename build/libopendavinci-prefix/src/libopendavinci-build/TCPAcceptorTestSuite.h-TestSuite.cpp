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
    std::ofstream ofstr("TEST-libopendavinci-TCPAcceptorTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-TCPAcceptorTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TCPAcceptorTestsuite_init = false;
#include "../../../../libopendavinci/testsuites/TCPAcceptorTestSuite.h"

static TCPAcceptorTestsuite suite_TCPAcceptorTestsuite;

static CxxTest::List Tests_TCPAcceptorTestsuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TCPAcceptorTestsuite( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/TCPAcceptorTestSuite.h", 127, "TCPAcceptorTestsuite", suite_TCPAcceptorTestsuite, Tests_TCPAcceptorTestsuite );

static class TestDescription_suite_TCPAcceptorTestsuite_testAccept : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TCPAcceptorTestsuite_testAccept() : CxxTest::RealTestDescription( Tests_TCPAcceptorTestsuite, suiteDescription_TCPAcceptorTestsuite, 130, "testAccept" ) {}
 void runTest() { suite_TCPAcceptorTestsuite.testAccept(); }
} testDescription_suite_TCPAcceptorTestsuite_testAccept;

static class TestDescription_suite_TCPAcceptorTestsuite_testMultipleAccept : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TCPAcceptorTestsuite_testMultipleAccept() : CxxTest::RealTestDescription( Tests_TCPAcceptorTestsuite, suiteDescription_TCPAcceptorTestsuite, 149, "testMultipleAccept" ) {}
 void runTest() { suite_TCPAcceptorTestsuite.testMultipleAccept(); }
} testDescription_suite_TCPAcceptorTestsuite_testMultipleAccept;

static class TestDescription_suite_TCPAcceptorTestsuite_testNoAccept : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TCPAcceptorTestsuite_testNoAccept() : CxxTest::RealTestDescription( Tests_TCPAcceptorTestsuite, suiteDescription_TCPAcceptorTestsuite, 168, "testNoAccept" ) {}
 void runTest() { suite_TCPAcceptorTestsuite.testNoAccept(); }
} testDescription_suite_TCPAcceptorTestsuite_testNoAccept;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
