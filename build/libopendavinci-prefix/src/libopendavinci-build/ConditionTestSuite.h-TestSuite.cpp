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
    std::ofstream ofstr("TEST-libopendavinci-ConditionTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ConditionTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ConditionTest_init = false;
#include "../../../../libopendavinci/testsuites/ConditionTestSuite.h"

static ConditionTest suite_ConditionTest;

static CxxTest::List Tests_ConditionTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ConditionTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ConditionTestSuite.h", 106, "ConditionTest", suite_ConditionTest, Tests_ConditionTest );

static class TestDescription_suite_ConditionTest_testLocking : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConditionTest_testLocking() : CxxTest::RealTestDescription( Tests_ConditionTest, suiteDescription_ConditionTest, 108, "testLocking" ) {}
 void runTest() { suite_ConditionTest.testLocking(); }
} testDescription_suite_ConditionTest_testLocking;

static class TestDescription_suite_ConditionTest_testWakeOne : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConditionTest_testWakeOne() : CxxTest::RealTestDescription( Tests_ConditionTest, suiteDescription_ConditionTest, 121, "testWakeOne" ) {}
 void runTest() { suite_ConditionTest.testWakeOne(); }
} testDescription_suite_ConditionTest_testWakeOne;

static class TestDescription_suite_ConditionTest_testWakeAll : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConditionTest_testWakeAll() : CxxTest::RealTestDescription( Tests_ConditionTest, suiteDescription_ConditionTest, 157, "testWakeAll" ) {}
 void runTest() { suite_ConditionTest.testWakeAll(); }
} testDescription_suite_ConditionTest_testWakeAll;

static class TestDescription_suite_ConditionTest_testTimeCondition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConditionTest_testTimeCondition() : CxxTest::RealTestDescription( Tests_ConditionTest, suiteDescription_ConditionTest, 197, "testTimeCondition" ) {}
 void runTest() { suite_ConditionTest.testTimeCondition(); }
} testDescription_suite_ConditionTest_testTimeCondition;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
