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
    std::ofstream ofstr("TEST-libtest8-testpackage_Test8ATestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest8-testpackage_Test8ATestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_testpackage_Test8A_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test8_withCMake/libtest8/testsuites/testpackage_Test8ATestSuite.h"

static testpackage_Test8A_TestSuite suite_testpackage_Test8A_TestSuite;

static CxxTest::List Tests_testpackage_Test8A_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testpackage_Test8A_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test8_withCMake/libtest8/testsuites/testpackage_Test8ATestSuite.h", 25, "testpackage_Test8A_TestSuite", suite_testpackage_Test8A_TestSuite, Tests_testpackage_Test8A_TestSuite );

static class TestDescription_suite_testpackage_Test8A_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test8A_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_testpackage_Test8A_TestSuite, suiteDescription_testpackage_Test8A_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_testpackage_Test8A_TestSuite.testCreateObject(); }
} testDescription_suite_testpackage_Test8A_TestSuite_testCreateObject;

static class TestDescription_suite_testpackage_Test8A_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test8A_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_testpackage_Test8A_TestSuite, suiteDescription_testpackage_Test8A_TestSuite, 39, "testCreateAndCopyObject" ) {}
 void runTest() { suite_testpackage_Test8A_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_testpackage_Test8A_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_testpackage_Test8A_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test8A_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_testpackage_Test8A_TestSuite, suiteDescription_testpackage_Test8A_TestSuite, 60, "testCreateAndAssignObject" ) {}
 void runTest() { suite_testpackage_Test8A_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_testpackage_Test8A_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_testpackage_Test8A_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test8A_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_testpackage_Test8A_TestSuite, suiteDescription_testpackage_Test8A_TestSuite, 81, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_testpackage_Test8A_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_testpackage_Test8A_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
