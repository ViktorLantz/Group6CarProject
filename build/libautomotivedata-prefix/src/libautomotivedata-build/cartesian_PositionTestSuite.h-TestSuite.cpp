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
    std::ofstream ofstr("TEST-libautomotivedata-cartesian_PositionTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libautomotivedata-cartesian_PositionTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_cartesian_Position_TestSuite_init = false;
#include "../../../../libautomotivedata/testsuites/cartesian_PositionTestSuite.h"

static cartesian_Position_TestSuite suite_cartesian_Position_TestSuite;

static CxxTest::List Tests_cartesian_Position_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_cartesian_Position_TestSuite( "/home/viktor/OpenDaVINCI/libautomotivedata/testsuites/cartesian_PositionTestSuite.h", 27, "cartesian_Position_TestSuite", suite_cartesian_Position_TestSuite, Tests_cartesian_Position_TestSuite );

static class TestDescription_suite_cartesian_Position_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_cartesian_Position_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_cartesian_Position_TestSuite, suiteDescription_cartesian_Position_TestSuite, 30, "testCreateObject" ) {}
 void runTest() { suite_cartesian_Position_TestSuite.testCreateObject(); }
} testDescription_suite_cartesian_Position_TestSuite_testCreateObject;

static class TestDescription_suite_cartesian_Position_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_cartesian_Position_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_cartesian_Position_TestSuite, suiteDescription_cartesian_Position_TestSuite, 38, "testCreateAndCopyObject" ) {}
 void runTest() { suite_cartesian_Position_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_cartesian_Position_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_cartesian_Position_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_cartesian_Position_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_cartesian_Position_TestSuite, suiteDescription_cartesian_Position_TestSuite, 53, "testCreateAndAssignObject" ) {}
 void runTest() { suite_cartesian_Position_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_cartesian_Position_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_cartesian_Position_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_cartesian_Position_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_cartesian_Position_TestSuite, suiteDescription_cartesian_Position_TestSuite, 68, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_cartesian_Position_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_cartesian_Position_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
