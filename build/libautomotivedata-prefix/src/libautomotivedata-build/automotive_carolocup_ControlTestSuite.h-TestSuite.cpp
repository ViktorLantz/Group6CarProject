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
    std::ofstream ofstr("TEST-libautomotivedata-automotive_carolocup_ControlTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libautomotivedata-automotive_carolocup_ControlTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_automotive_carolocup_Control_TestSuite_init = false;
#include "../../../../libautomotivedata/testsuites/automotive_carolocup_ControlTestSuite.h"

static automotive_carolocup_Control_TestSuite suite_automotive_carolocup_Control_TestSuite;

static CxxTest::List Tests_automotive_carolocup_Control_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_automotive_carolocup_Control_TestSuite( "/home/viktor/OpenDaVINCI/libautomotivedata/testsuites/automotive_carolocup_ControlTestSuite.h", 25, "automotive_carolocup_Control_TestSuite", suite_automotive_carolocup_Control_TestSuite, Tests_automotive_carolocup_Control_TestSuite );

static class TestDescription_suite_automotive_carolocup_Control_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_carolocup_Control_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_automotive_carolocup_Control_TestSuite, suiteDescription_automotive_carolocup_Control_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_automotive_carolocup_Control_TestSuite.testCreateObject(); }
} testDescription_suite_automotive_carolocup_Control_TestSuite_testCreateObject;

static class TestDescription_suite_automotive_carolocup_Control_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_carolocup_Control_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_automotive_carolocup_Control_TestSuite, suiteDescription_automotive_carolocup_Control_TestSuite, 48, "testCreateAndCopyObject" ) {}
 void runTest() { suite_automotive_carolocup_Control_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_automotive_carolocup_Control_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_automotive_carolocup_Control_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_carolocup_Control_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_automotive_carolocup_Control_TestSuite, suiteDescription_automotive_carolocup_Control_TestSuite, 87, "testCreateAndAssignObject" ) {}
 void runTest() { suite_automotive_carolocup_Control_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_automotive_carolocup_Control_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_automotive_carolocup_Control_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_carolocup_Control_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_automotive_carolocup_Control_TestSuite, suiteDescription_automotive_carolocup_Control_TestSuite, 126, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_automotive_carolocup_Control_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_automotive_carolocup_Control_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
