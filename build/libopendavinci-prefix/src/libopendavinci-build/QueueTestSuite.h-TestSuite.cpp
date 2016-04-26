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
    std::ofstream ofstr("TEST-libopendavinci-QueueTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-QueueTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_QueueTest_init = false;
#include "../../../../libopendavinci/testsuites/QueueTestSuite.h"

static QueueTest suite_QueueTest;

static CxxTest::List Tests_QueueTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_QueueTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/QueueTestSuite.h", 246, "QueueTest", suite_QueueTest, Tests_QueueTest );

static class TestDescription_suite_QueueTest_testLIFO : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QueueTest_testLIFO() : CxxTest::RealTestDescription( Tests_QueueTest, suiteDescription_QueueTest, 248, "testLIFO" ) {}
 void runTest() { suite_QueueTest.testLIFO(); }
} testDescription_suite_QueueTest_testLIFO;

static class TestDescription_suite_QueueTest_testFIFO : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QueueTest_testFIFO() : CxxTest::RealTestDescription( Tests_QueueTest, suiteDescription_QueueTest, 269, "testFIFO" ) {}
 void runTest() { suite_QueueTest.testFIFO(); }
} testDescription_suite_QueueTest_testFIFO;

static class TestDescription_suite_QueueTest_testBufferedFIFOAsRegularFIFO : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QueueTest_testBufferedFIFOAsRegularFIFO() : CxxTest::RealTestDescription( Tests_QueueTest, suiteDescription_QueueTest, 289, "testBufferedFIFOAsRegularFIFO" ) {}
 void runTest() { suite_QueueTest.testBufferedFIFOAsRegularFIFO(); }
} testDescription_suite_QueueTest_testBufferedFIFOAsRegularFIFO;

static class TestDescription_suite_QueueTest_testBufferedFIFO : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QueueTest_testBufferedFIFO() : CxxTest::RealTestDescription( Tests_QueueTest, suiteDescription_QueueTest, 309, "testBufferedFIFO" ) {}
 void runTest() { suite_QueueTest.testBufferedFIFO(); }
} testDescription_suite_QueueTest_testBufferedFIFO;

static class TestDescription_suite_QueueTest_testFixedSizeBufferedFIFO : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QueueTest_testFixedSizeBufferedFIFO() : CxxTest::RealTestDescription( Tests_QueueTest, suiteDescription_QueueTest, 380, "testFixedSizeBufferedFIFO" ) {}
 void runTest() { suite_QueueTest.testFixedSizeBufferedFIFO(); }
} testDescription_suite_QueueTest_testFixedSizeBufferedFIFO;

static class TestDescription_suite_QueueTest_testBufferedLIFOAsRegularLIFO : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QueueTest_testBufferedLIFOAsRegularLIFO() : CxxTest::RealTestDescription( Tests_QueueTest, suiteDescription_QueueTest, 470, "testBufferedLIFOAsRegularLIFO" ) {}
 void runTest() { suite_QueueTest.testBufferedLIFOAsRegularLIFO(); }
} testDescription_suite_QueueTest_testBufferedLIFOAsRegularLIFO;

static class TestDescription_suite_QueueTest_testBufferedLIFO : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QueueTest_testBufferedLIFO() : CxxTest::RealTestDescription( Tests_QueueTest, suiteDescription_QueueTest, 490, "testBufferedLIFO" ) {}
 void runTest() { suite_QueueTest.testBufferedLIFO(); }
} testDescription_suite_QueueTest_testBufferedLIFO;

static class TestDescription_suite_QueueTest_testFixedSizeBufferedLIFO : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QueueTest_testFixedSizeBufferedLIFO() : CxxTest::RealTestDescription( Tests_QueueTest, suiteDescription_QueueTest, 561, "testFixedSizeBufferedLIFO" ) {}
 void runTest() { suite_QueueTest.testFixedSizeBufferedLIFO(); }
} testDescription_suite_QueueTest_testFixedSizeBufferedLIFO;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
