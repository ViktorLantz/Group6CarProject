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
    std::ofstream ofstr("TEST-libopendavinci-FieldTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-FieldTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_FieldTest_init = false;
#include "../../../../libopendavinci/testsuites/FieldTestSuite.h"

static FieldTest suite_FieldTest;

static CxxTest::List Tests_FieldTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FieldTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/FieldTestSuite.h", 38, "FieldTest", suite_FieldTest, Tests_FieldTest );

static class TestDescription_suite_FieldTest_testField1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FieldTest_testField1() : CxxTest::RealTestDescription( Tests_FieldTest, suiteDescription_FieldTest, 40, "testField1" ) {}
 void runTest() { suite_FieldTest.testField1(); }
} testDescription_suite_FieldTest_testField1;

static class TestDescription_suite_FieldTest_testField2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FieldTest_testField2() : CxxTest::RealTestDescription( Tests_FieldTest, suiteDescription_FieldTest, 59, "testField2" ) {}
 void runTest() { suite_FieldTest.testField2(); }
} testDescription_suite_FieldTest_testField2;

static class TestDescription_suite_FieldTest_testFiel32 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FieldTest_testFiel32() : CxxTest::RealTestDescription( Tests_FieldTest, suiteDescription_FieldTest, 78, "testFiel32" ) {}
 void runTest() { suite_FieldTest.testFiel32(); }
} testDescription_suite_FieldTest_testFiel32;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
