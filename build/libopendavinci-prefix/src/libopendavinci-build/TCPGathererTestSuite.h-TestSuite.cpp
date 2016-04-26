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
    std::ofstream ofstr("TEST-libopendavinci-TCPGathererTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-TCPGathererTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TCPGathererTestSuite_init = false;
#include "../../../../libopendavinci/testsuites/TCPGathererTestSuite.h"

static TCPGathererTestSuite suite_TCPGathererTestSuite;

static CxxTest::List Tests_TCPGathererTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TCPGathererTestSuite( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/TCPGathererTestSuite.h", 42, "TCPGathererTestSuite", suite_TCPGathererTestSuite, Tests_TCPGathererTestSuite );

static class TestDescription_suite_TCPGathererTestSuite_testNoGathering : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TCPGathererTestSuite_testNoGathering() : CxxTest::RealTestDescription( Tests_TCPGathererTestSuite, suiteDescription_TCPGathererTestSuite, 61, "testNoGathering" ) {}
 void runTest() { suite_TCPGathererTestSuite.testNoGathering(); }
} testDescription_suite_TCPGathererTestSuite_testNoGathering;

static class TestDescription_suite_TCPGathererTestSuite_testGathering : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TCPGathererTestSuite_testGathering() : CxxTest::RealTestDescription( Tests_TCPGathererTestSuite, suiteDescription_TCPGathererTestSuite, 80, "testGathering" ) {}
 void runTest() { suite_TCPGathererTestSuite.testGathering(); }
} testDescription_suite_TCPGathererTestSuite_testGathering;

static class TestDescription_suite_TCPGathererTestSuite_testMixedGathering : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TCPGathererTestSuite_testMixedGathering() : CxxTest::RealTestDescription( Tests_TCPGathererTestSuite, suiteDescription_TCPGathererTestSuite, 105, "testMixedGathering" ) {}
 void runTest() { suite_TCPGathererTestSuite.testMixedGathering(); }
} testDescription_suite_TCPGathererTestSuite_testMixedGathering;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
