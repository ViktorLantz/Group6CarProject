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
    std::ofstream ofstr("TEST-libtest5-testpackage_Test5TestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest5-testpackage_Test5TestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_testpackage_Test5_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test5_withCMake/libtest5/testsuites/testpackage_Test5TestSuite.h"

static testpackage_Test5_TestSuite suite_testpackage_Test5_TestSuite;

static CxxTest::List Tests_testpackage_Test5_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testpackage_Test5_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test5_withCMake/libtest5/testsuites/testpackage_Test5TestSuite.h", 25, "testpackage_Test5_TestSuite", suite_testpackage_Test5_TestSuite, Tests_testpackage_Test5_TestSuite );

static class TestDescription_suite_testpackage_Test5_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test5_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_testpackage_Test5_TestSuite, suiteDescription_testpackage_Test5_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_testpackage_Test5_TestSuite.testCreateObject(); }
} testDescription_suite_testpackage_Test5_TestSuite_testCreateObject;

static class TestDescription_suite_testpackage_Test5_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test5_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_testpackage_Test5_TestSuite, suiteDescription_testpackage_Test5_TestSuite, 57, "testCreateAndCopyObject" ) {}
 void runTest() { suite_testpackage_Test5_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_testpackage_Test5_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_testpackage_Test5_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test5_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_testpackage_Test5_TestSuite, suiteDescription_testpackage_Test5_TestSuite, 114, "testCreateAndAssignObject" ) {}
 void runTest() { suite_testpackage_Test5_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_testpackage_Test5_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_testpackage_Test5_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_testpackage_Test5_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_testpackage_Test5_TestSuite, suiteDescription_testpackage_Test5_TestSuite, 171, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_testpackage_Test5_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_testpackage_Test5_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
