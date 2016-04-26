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
    std::ofstream ofstr("TEST-libautomotivedata-fxe_RecordingTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libautomotivedata-fxe_RecordingTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_fxe_Recording_TestSuite_init = false;
#include "../../../../libautomotivedata/testsuites/fxe_RecordingTestSuite.h"

static fxe_Recording_TestSuite suite_fxe_Recording_TestSuite;

static CxxTest::List Tests_fxe_Recording_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_fxe_Recording_TestSuite( "/home/viktor/OpenDaVINCI/libautomotivedata/testsuites/fxe_RecordingTestSuite.h", 26, "fxe_Recording_TestSuite", suite_fxe_Recording_TestSuite, Tests_fxe_Recording_TestSuite );

static class TestDescription_suite_fxe_Recording_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_fxe_Recording_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_fxe_Recording_TestSuite, suiteDescription_fxe_Recording_TestSuite, 29, "testCreateObject" ) {}
 void runTest() { suite_fxe_Recording_TestSuite.testCreateObject(); }
} testDescription_suite_fxe_Recording_TestSuite_testCreateObject;

static class TestDescription_suite_fxe_Recording_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_fxe_Recording_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_fxe_Recording_TestSuite, suiteDescription_fxe_Recording_TestSuite, 49, "testCreateAndCopyObject" ) {}
 void runTest() { suite_fxe_Recording_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_fxe_Recording_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_fxe_Recording_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_fxe_Recording_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_fxe_Recording_TestSuite, suiteDescription_fxe_Recording_TestSuite, 89, "testCreateAndAssignObject" ) {}
 void runTest() { suite_fxe_Recording_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_fxe_Recording_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_fxe_Recording_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_fxe_Recording_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_fxe_Recording_TestSuite, suiteDescription_fxe_Recording_TestSuite, 130, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_fxe_Recording_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_fxe_Recording_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
