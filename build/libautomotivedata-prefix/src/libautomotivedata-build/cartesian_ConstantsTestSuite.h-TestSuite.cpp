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
    std::ofstream ofstr("TEST-libautomotivedata-cartesian_ConstantsTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libautomotivedata-cartesian_ConstantsTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_cartesian_Constants_TestSuite_init = false;
#include "../../../../libautomotivedata/testsuites/cartesian_ConstantsTestSuite.h"

static cartesian_Constants_TestSuite suite_cartesian_Constants_TestSuite;

static CxxTest::List Tests_cartesian_Constants_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_cartesian_Constants_TestSuite( "/home/viktor/OpenDaVINCI/libautomotivedata/testsuites/cartesian_ConstantsTestSuite.h", 25, "cartesian_Constants_TestSuite", suite_cartesian_Constants_TestSuite, Tests_cartesian_Constants_TestSuite );

static class TestDescription_suite_cartesian_Constants_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_cartesian_Constants_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_cartesian_Constants_TestSuite, suiteDescription_cartesian_Constants_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_cartesian_Constants_TestSuite.testCreateObject(); }
} testDescription_suite_cartesian_Constants_TestSuite_testCreateObject;

static class TestDescription_suite_cartesian_Constants_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_cartesian_Constants_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_cartesian_Constants_TestSuite, suiteDescription_cartesian_Constants_TestSuite, 36, "testCreateAndCopyObject" ) {}
 void runTest() { suite_cartesian_Constants_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_cartesian_Constants_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_cartesian_Constants_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_cartesian_Constants_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_cartesian_Constants_TestSuite, suiteDescription_cartesian_Constants_TestSuite, 51, "testCreateAndAssignObject" ) {}
 void runTest() { suite_cartesian_Constants_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_cartesian_Constants_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_cartesian_Constants_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_cartesian_Constants_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_cartesian_Constants_TestSuite, suiteDescription_cartesian_Constants_TestSuite, 66, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_cartesian_Constants_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_cartesian_Constants_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
