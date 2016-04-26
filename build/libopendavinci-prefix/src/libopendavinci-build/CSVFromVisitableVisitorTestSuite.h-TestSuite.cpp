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
    std::ofstream ofstr("TEST-libopendavinci-CSVFromVisitableVisitorTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-CSVFromVisitableVisitorTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_FieldTest_init = false;
#include "../../../../libopendavinci/testsuites/CSVFromVisitableVisitorTestSuite.h"

static FieldTest suite_FieldTest;

static CxxTest::List Tests_FieldTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FieldTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/CSVFromVisitableVisitorTestSuite.h", 132, "FieldTest", suite_FieldTest, Tests_FieldTest );

static class TestDescription_suite_FieldTest_testCSV_noheader : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FieldTest_testCSV_noheader() : CxxTest::RealTestDescription( Tests_FieldTest, suiteDescription_FieldTest, 134, "testCSV_noheader" ) {}
 void runTest() { suite_FieldTest.testCSV_noheader(); }
} testDescription_suite_FieldTest_testCSV_noheader;

static class TestDescription_suite_FieldTest_testCSV_withheader : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FieldTest_testCSV_withheader() : CxxTest::RealTestDescription( Tests_FieldTest, suiteDescription_FieldTest, 154, "testCSV_withheader" ) {}
 void runTest() { suite_FieldTest.testCSV_withheader(); }
} testDescription_suite_FieldTest_testCSV_withheader;

static class TestDescription_suite_FieldTest_testCSV_default_twice : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FieldTest_testCSV_default_twice() : CxxTest::RealTestDescription( Tests_FieldTest, suiteDescription_FieldTest, 175, "testCSV_default_twice" ) {}
 void runTest() { suite_FieldTest.testCSV_default_twice(); }
} testDescription_suite_FieldTest_testCSV_default_twice;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
