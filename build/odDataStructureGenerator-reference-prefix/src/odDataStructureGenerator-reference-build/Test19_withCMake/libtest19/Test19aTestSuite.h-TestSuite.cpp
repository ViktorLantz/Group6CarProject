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
    std::ofstream ofstr("TEST-libtest19-Test19aTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest19-Test19aTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_Test19a_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test19_withCMake/libtest19/testsuites/Test19aTestSuite.h"

static Test19a_TestSuite suite_Test19a_TestSuite;

static CxxTest::List Tests_Test19a_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test19a_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test19_withCMake/libtest19/testsuites/Test19aTestSuite.h", 25, "Test19a_TestSuite", suite_Test19a_TestSuite, Tests_Test19a_TestSuite );

static class TestDescription_suite_Test19a_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test19a_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_Test19a_TestSuite, suiteDescription_Test19a_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_Test19a_TestSuite.testCreateObject(); }
} testDescription_suite_Test19a_TestSuite_testCreateObject;

static class TestDescription_suite_Test19a_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test19a_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_Test19a_TestSuite, suiteDescription_Test19a_TestSuite, 35, "testCreateAndCopyObject" ) {}
 void runTest() { suite_Test19a_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_Test19a_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_Test19a_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test19a_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_Test19a_TestSuite, suiteDescription_Test19a_TestSuite, 49, "testCreateAndAssignObject" ) {}
 void runTest() { suite_Test19a_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_Test19a_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_Test19a_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test19a_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_Test19a_TestSuite, suiteDescription_Test19a_TestSuite, 63, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_Test19a_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_Test19a_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
