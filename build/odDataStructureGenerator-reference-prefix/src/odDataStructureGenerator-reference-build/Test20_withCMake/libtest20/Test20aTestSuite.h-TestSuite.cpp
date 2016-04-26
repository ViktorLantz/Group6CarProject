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
    std::ofstream ofstr("TEST-libtest20-Test20aTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest20-Test20aTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_Test20a_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test20_withCMake/libtest20/testsuites/Test20aTestSuite.h"

static Test20a_TestSuite suite_Test20a_TestSuite;

static CxxTest::List Tests_Test20a_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test20a_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test20_withCMake/libtest20/testsuites/Test20aTestSuite.h", 26, "Test20a_TestSuite", suite_Test20a_TestSuite, Tests_Test20a_TestSuite );

static class TestDescription_suite_Test20a_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test20a_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_Test20a_TestSuite, suiteDescription_Test20a_TestSuite, 29, "testCreateObject" ) {}
 void runTest() { suite_Test20a_TestSuite.testCreateObject(); }
} testDescription_suite_Test20a_TestSuite_testCreateObject;

static class TestDescription_suite_Test20a_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test20a_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_Test20a_TestSuite, suiteDescription_Test20a_TestSuite, 39, "testCreateAndCopyObject" ) {}
 void runTest() { suite_Test20a_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_Test20a_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_Test20a_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test20a_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_Test20a_TestSuite, suiteDescription_Test20a_TestSuite, 59, "testCreateAndAssignObject" ) {}
 void runTest() { suite_Test20a_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_Test20a_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_Test20a_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test20a_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_Test20a_TestSuite, suiteDescription_Test20a_TestSuite, 79, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_Test20a_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_Test20a_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
