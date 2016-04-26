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
    std::ofstream ofstr("TEST-libtest11-Test11MapDoubleTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest11-Test11MapDoubleTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_Test11MapDouble_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test11_withCMake/libtest11/testsuites/Test11MapDoubleTestSuite.h"

static Test11MapDouble_TestSuite suite_Test11MapDouble_TestSuite;

static CxxTest::List Tests_Test11MapDouble_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test11MapDouble_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test11_withCMake/libtest11/testsuites/Test11MapDoubleTestSuite.h", 25, "Test11MapDouble_TestSuite", suite_Test11MapDouble_TestSuite, Tests_Test11MapDouble_TestSuite );

static class TestDescription_suite_Test11MapDouble_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test11MapDouble_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_Test11MapDouble_TestSuite, suiteDescription_Test11MapDouble_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_Test11MapDouble_TestSuite.testCreateObject(); }
} testDescription_suite_Test11MapDouble_TestSuite_testCreateObject;

static class TestDescription_suite_Test11MapDouble_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test11MapDouble_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_Test11MapDouble_TestSuite, suiteDescription_Test11MapDouble_TestSuite, 527, "testCreateAndCopyObject" ) {}
 void runTest() { suite_Test11MapDouble_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_Test11MapDouble_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_Test11MapDouble_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test11MapDouble_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_Test11MapDouble_TestSuite, suiteDescription_Test11MapDouble_TestSuite, 1115, "testCreateAndAssignObject" ) {}
 void runTest() { suite_Test11MapDouble_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_Test11MapDouble_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_Test11MapDouble_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test11MapDouble_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_Test11MapDouble_TestSuite, suiteDescription_Test11MapDouble_TestSuite, 1710, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_Test11MapDouble_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_Test11MapDouble_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
