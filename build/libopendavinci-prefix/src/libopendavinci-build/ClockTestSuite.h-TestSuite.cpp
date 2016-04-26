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
    std::ofstream ofstr("TEST-libopendavinci-ClockTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ClockTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ClockTest_init = false;
#include "../../../../libopendavinci/testsuites/ClockTestSuite.h"

static ClockTest suite_ClockTest;

static CxxTest::List Tests_ClockTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ClockTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ClockTestSuite.h", 31, "ClockTest", suite_ClockTest, Tests_ClockTest );

static class TestDescription_suite_ClockTest_testClock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ClockTest_testClock() : CxxTest::RealTestDescription( Tests_ClockTest, suiteDescription_ClockTest, 33, "testClock" ) {}
 void runTest() { suite_ClockTest.testClock(); }
} testDescription_suite_ClockTest_testClock;

static class TestDescription_suite_ClockTest_testCopyClock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ClockTest_testCopyClock() : CxxTest::RealTestDescription( Tests_ClockTest, suiteDescription_ClockTest, 77, "testCopyClock" ) {}
 void runTest() { suite_ClockTest.testCopyClock(); }
} testDescription_suite_ClockTest_testCopyClock;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
