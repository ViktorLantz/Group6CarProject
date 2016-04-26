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
    std::ofstream ofstr("TEST-libautomotivedata-automotive_VehicleDataTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libautomotivedata-automotive_VehicleDataTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_automotive_VehicleData_TestSuite_init = false;
#include "../../../../libautomotivedata/testsuites/automotive_VehicleDataTestSuite.h"

static automotive_VehicleData_TestSuite suite_automotive_VehicleData_TestSuite;

static CxxTest::List Tests_automotive_VehicleData_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_automotive_VehicleData_TestSuite( "/home/viktor/OpenDaVINCI/libautomotivedata/testsuites/automotive_VehicleDataTestSuite.h", 27, "automotive_VehicleData_TestSuite", suite_automotive_VehicleData_TestSuite, Tests_automotive_VehicleData_TestSuite );

static class TestDescription_suite_automotive_VehicleData_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_VehicleData_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_automotive_VehicleData_TestSuite, suiteDescription_automotive_VehicleData_TestSuite, 30, "testCreateObject" ) {}
 void runTest() { suite_automotive_VehicleData_TestSuite.testCreateObject(); }
} testDescription_suite_automotive_VehicleData_TestSuite_testCreateObject;

static class TestDescription_suite_automotive_VehicleData_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_VehicleData_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_automotive_VehicleData_TestSuite, suiteDescription_automotive_VehicleData_TestSuite, 59, "testCreateAndCopyObject" ) {}
 void runTest() { suite_automotive_VehicleData_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_automotive_VehicleData_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_automotive_VehicleData_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_VehicleData_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_automotive_VehicleData_TestSuite, suiteDescription_automotive_VehicleData_TestSuite, 116, "testCreateAndAssignObject" ) {}
 void runTest() { suite_automotive_VehicleData_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_automotive_VehicleData_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_automotive_VehicleData_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_VehicleData_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_automotive_VehicleData_TestSuite, suiteDescription_automotive_VehicleData_TestSuite, 173, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_automotive_VehicleData_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_automotive_VehicleData_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
