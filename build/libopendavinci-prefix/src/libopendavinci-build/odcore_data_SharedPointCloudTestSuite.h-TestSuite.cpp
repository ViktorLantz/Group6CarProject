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
    std::ofstream ofstr("TEST-libopendavinci-odcore_data_SharedPointCloudTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-odcore_data_SharedPointCloudTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_odcore_data_SharedPointCloud_TestSuite_init = false;
#include "coredata/testsuites/odcore_data_SharedPointCloudTestSuite.h"

static odcore_data_SharedPointCloud_TestSuite suite_odcore_data_SharedPointCloud_TestSuite;

static CxxTest::List Tests_odcore_data_SharedPointCloud_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_odcore_data_SharedPointCloud_TestSuite( "/home/viktor/OpenDaVINCI/build/libopendavinci-prefix/src/libopendavinci-build/coredata/testsuites/odcore_data_SharedPointCloudTestSuite.h", 25, "odcore_data_SharedPointCloud_TestSuite", suite_odcore_data_SharedPointCloud_TestSuite, Tests_odcore_data_SharedPointCloud_TestSuite );

static class TestDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_odcore_data_SharedPointCloud_TestSuite, suiteDescription_odcore_data_SharedPointCloud_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_odcore_data_SharedPointCloud_TestSuite.testCreateObject(); }
} testDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateObject;

static class TestDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_odcore_data_SharedPointCloud_TestSuite, suiteDescription_odcore_data_SharedPointCloud_TestSuite, 46, "testCreateAndCopyObject" ) {}
 void runTest() { suite_odcore_data_SharedPointCloud_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_odcore_data_SharedPointCloud_TestSuite, suiteDescription_odcore_data_SharedPointCloud_TestSuite, 80, "testCreateAndAssignObject" ) {}
 void runTest() { suite_odcore_data_SharedPointCloud_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_odcore_data_SharedPointCloud_TestSuite, suiteDescription_odcore_data_SharedPointCloud_TestSuite, 114, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_odcore_data_SharedPointCloud_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_odcore_data_SharedPointCloud_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
