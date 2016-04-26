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
    std::ofstream ofstr("TEST-libopendavinci-TimeStampTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-TimeStampTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TimeStampTest_init = false;
#include "../../../../libopendavinci/testsuites/TimeStampTestSuite.h"

static TimeStampTest suite_TimeStampTest;

static CxxTest::List Tests_TimeStampTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TimeStampTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/TimeStampTestSuite.h", 30, "TimeStampTest", suite_TimeStampTest, Tests_TimeStampTest );

static class TestDescription_suite_TimeStampTest_testAdd1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimeStampTest_testAdd1() : CxxTest::RealTestDescription( Tests_TimeStampTest, suiteDescription_TimeStampTest, 32, "testAdd1" ) {}
 void runTest() { suite_TimeStampTest.testAdd1(); }
} testDescription_suite_TimeStampTest_testAdd1;

static class TestDescription_suite_TimeStampTest_testAdd2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimeStampTest_testAdd2() : CxxTest::RealTestDescription( Tests_TimeStampTest, suiteDescription_TimeStampTest, 41, "testAdd2" ) {}
 void runTest() { suite_TimeStampTest.testAdd2(); }
} testDescription_suite_TimeStampTest_testAdd2;

static class TestDescription_suite_TimeStampTest_testSub1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimeStampTest_testSub1() : CxxTest::RealTestDescription( Tests_TimeStampTest, suiteDescription_TimeStampTest, 50, "testSub1" ) {}
 void runTest() { suite_TimeStampTest.testSub1(); }
} testDescription_suite_TimeStampTest_testSub1;

static class TestDescription_suite_TimeStampTest_testSub2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimeStampTest_testSub2() : CxxTest::RealTestDescription( Tests_TimeStampTest, suiteDescription_TimeStampTest, 59, "testSub2" ) {}
 void runTest() { suite_TimeStampTest.testSub2(); }
} testDescription_suite_TimeStampTest_testSub2;

static class TestDescription_suite_TimeStampTest_testTimeStamp28042009 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimeStampTest_testTimeStamp28042009() : CxxTest::RealTestDescription( Tests_TimeStampTest, suiteDescription_TimeStampTest, 68, "testTimeStamp28042009" ) {}
 void runTest() { suite_TimeStampTest.testTimeStamp28042009(); }
} testDescription_suite_TimeStampTest_testTimeStamp28042009;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
