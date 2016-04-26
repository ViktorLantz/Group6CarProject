/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <fstream>
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XUnitPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    std::ofstream ofstr("TEST-libautomotivedata-fxe_KeyPointTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libautomotivedata-fxe_KeyPointTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_fxe_KeyPoint_TestSuite_init = false;
#include "../../../../libautomotivedata/testsuites/fxe_KeyPointTestSuite.h"

static fxe_KeyPoint_TestSuite suite_fxe_KeyPoint_TestSuite;

static CxxTest::List Tests_fxe_KeyPoint_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_fxe_KeyPoint_TestSuite( "/home/viktor/OpenDaVINCI/libautomotivedata/testsuites/fxe_KeyPointTestSuite.h", 26, "fxe_KeyPoint_TestSuite", suite_fxe_KeyPoint_TestSuite, Tests_fxe_KeyPoint_TestSuite );

static class TestDescription_suite_fxe_KeyPoint_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_fxe_KeyPoint_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_fxe_KeyPoint_TestSuite, suiteDescription_fxe_KeyPoint_TestSuite, 29, "testCreateObject" ) {}
 void runTest() { suite_fxe_KeyPoint_TestSuite.testCreateObject(); }
} testDescription_suite_fxe_KeyPoint_TestSuite_testCreateObject;

static class TestDescription_suite_fxe_KeyPoint_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_fxe_KeyPoint_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_fxe_KeyPoint_TestSuite, suiteDescription_fxe_KeyPoint_TestSuite, 40, "testCreateAndCopyObject" ) {}
 void runTest() { suite_fxe_KeyPoint_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_fxe_KeyPoint_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_fxe_KeyPoint_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_fxe_KeyPoint_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_fxe_KeyPoint_TestSuite, suiteDescription_fxe_KeyPoint_TestSuite, 61, "testCreateAndAssignObject" ) {}
 void runTest() { suite_fxe_KeyPoint_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_fxe_KeyPoint_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_fxe_KeyPoint_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_fxe_KeyPoint_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_fxe_KeyPoint_TestSuite, suiteDescription_fxe_KeyPoint_TestSuite, 82, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_fxe_KeyPoint_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_fxe_KeyPoint_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
