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
    std::ofstream ofstr("TEST-libtest7-testpackage_Test7BTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest7-testpackage_Test7BTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_testpackage_Test7B_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test7_withCMake/libtest7/testsuites/testpackage_Test7BTestSuite.h"

static testpackage_Test7B_TestSuite suite_testpackage_Test7B_TestSuite;

static CxxTest::List Tests_testpackage_Test7B_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testpackage_Test7B_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test7_withCMake/libtest7/testsuites/testpackage_Test7BTestSuite.h", 25, "testpackage_Test7B_TestSuite", suite_testpackage_Test7B_TestSuite, Tests_testpackage_Test7B_TestSuite );

static class TestDescription_suite_testpackage_Test7B_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test7B_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_testpackage_Test7B_TestSuite, suiteDescription_testpackage_Test7B_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_testpackage_Test7B_TestSuite.testCreateObject(); }
} testDescription_suite_testpackage_Test7B_TestSuite_testCreateObject;

static class TestDescription_suite_testpackage_Test7B_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test7B_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_testpackage_Test7B_TestSuite, suiteDescription_testpackage_Test7B_TestSuite, 119, "testCreateAndCopyObject" ) {}
 void runTest() { suite_testpackage_Test7B_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_testpackage_Test7B_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_testpackage_Test7B_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test7B_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_testpackage_Test7B_TestSuite, suiteDescription_testpackage_Test7B_TestSuite, 248, "testCreateAndAssignObject" ) {}
 void runTest() { suite_testpackage_Test7B_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_testpackage_Test7B_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_testpackage_Test7B_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test7B_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_testpackage_Test7B_TestSuite, suiteDescription_testpackage_Test7B_TestSuite, 378, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_testpackage_Test7B_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_testpackage_Test7B_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
