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
    std::ofstream ofstr("TEST-libopendavinci-MessageTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-MessageTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_FieldTest_init = false;
#include "../../../../libopendavinci/testsuites/MessageTestSuite.h"

static FieldTest suite_FieldTest;

static CxxTest::List Tests_FieldTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FieldTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/MessageTestSuite.h", 233, "FieldTest", suite_FieldTest, Tests_FieldTest );

static class TestDescription_suite_FieldTest_testMessage1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FieldTest_testMessage1() : CxxTest::RealTestDescription( Tests_FieldTest, suiteDescription_FieldTest, 235, "testMessage1" ) {}
 void runTest() { suite_FieldTest.testMessage1(); }
} testDescription_suite_FieldTest_testMessage1;

static class TestDescription_suite_FieldTest_testMessage2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FieldTest_testMessage2() : CxxTest::RealTestDescription( Tests_FieldTest, suiteDescription_FieldTest, 268, "testMessage2" ) {}
 void runTest() { suite_FieldTest.testMessage2(); }
} testDescription_suite_FieldTest_testMessage2;

static class TestDescription_suite_FieldTest_testMessage3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FieldTest_testMessage3() : CxxTest::RealTestDescription( Tests_FieldTest, suiteDescription_FieldTest, 313, "testMessage3" ) {}
 void runTest() { suite_FieldTest.testMessage3(); }
} testDescription_suite_FieldTest_testMessage3;

static class TestDescription_suite_FieldTest_testMessageExtractField : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FieldTest_testMessageExtractField() : CxxTest::RealTestDescription( Tests_FieldTest, suiteDescription_FieldTest, 347, "testMessageExtractField" ) {}
 void runTest() { suite_FieldTest.testMessageExtractField(); }
} testDescription_suite_FieldTest_testMessageExtractField;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
