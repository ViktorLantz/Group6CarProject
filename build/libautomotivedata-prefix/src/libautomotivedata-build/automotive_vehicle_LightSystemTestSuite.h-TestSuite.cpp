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
    std::ofstream ofstr("TEST-libautomotivedata-automotive_vehicle_LightSystemTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libautomotivedata-automotive_vehicle_LightSystemTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_automotive_vehicle_LightSystem_TestSuite_init = false;
#include "../../../../libautomotivedata/testsuites/automotive_vehicle_LightSystemTestSuite.h"

static automotive_vehicle_LightSystem_TestSuite suite_automotive_vehicle_LightSystem_TestSuite;

static CxxTest::List Tests_automotive_vehicle_LightSystem_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_automotive_vehicle_LightSystem_TestSuite( "/home/viktor/OpenDaVINCI/libautomotivedata/testsuites/automotive_vehicle_LightSystemTestSuite.h", 25, "automotive_vehicle_LightSystem_TestSuite", suite_automotive_vehicle_LightSystem_TestSuite, Tests_automotive_vehicle_LightSystem_TestSuite );

static class TestDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_automotive_vehicle_LightSystem_TestSuite, suiteDescription_automotive_vehicle_LightSystem_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_automotive_vehicle_LightSystem_TestSuite.testCreateObject(); }
} testDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateObject;

static class TestDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_automotive_vehicle_LightSystem_TestSuite, suiteDescription_automotive_vehicle_LightSystem_TestSuite, 37, "testCreateAndCopyObject" ) {}
 void runTest() { suite_automotive_vehicle_LightSystem_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_automotive_vehicle_LightSystem_TestSuite, suiteDescription_automotive_vehicle_LightSystem_TestSuite, 53, "testCreateAndAssignObject" ) {}
 void runTest() { suite_automotive_vehicle_LightSystem_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_automotive_vehicle_LightSystem_TestSuite, suiteDescription_automotive_vehicle_LightSystem_TestSuite, 69, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_automotive_vehicle_LightSystem_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_automotive_vehicle_LightSystem_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
