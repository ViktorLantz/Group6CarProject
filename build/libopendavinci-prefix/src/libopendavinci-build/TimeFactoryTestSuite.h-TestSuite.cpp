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
    std::ofstream ofstr("TEST-libopendavinci-TimeFactoryTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-TimeFactoryTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TimeFactoryTest_init = false;
#include "../../../../libopendavinci/testsuites/TimeFactoryTestSuite.h"

static TimeFactoryTest suite_TimeFactoryTest;

static CxxTest::List Tests_TimeFactoryTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TimeFactoryTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/TimeFactoryTestSuite.h", 51, "TimeFactoryTest", suite_TimeFactoryTest, Tests_TimeFactoryTest );

static class TestDescription_suite_TimeFactoryTest_testCopyControlledTime : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimeFactoryTest_testCopyControlledTime() : CxxTest::RealTestDescription( Tests_TimeFactoryTest, suiteDescription_TimeFactoryTest, 53, "testCopyControlledTime" ) {}
 void runTest() { suite_TimeFactoryTest.testCopyControlledTime(); }
} testDescription_suite_TimeFactoryTest_testCopyControlledTime;

static class TestDescription_suite_TimeFactoryTest_testControlledTimeFactoryTestSuite : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimeFactoryTest_testControlledTimeFactoryTestSuite() : CxxTest::RealTestDescription( Tests_TimeFactoryTest, suiteDescription_TimeFactoryTest, 66, "testControlledTimeFactoryTestSuite" ) {}
 void runTest() { suite_TimeFactoryTest.testControlledTimeFactoryTestSuite(); }
} testDescription_suite_TimeFactoryTest_testControlledTimeFactoryTestSuite;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
