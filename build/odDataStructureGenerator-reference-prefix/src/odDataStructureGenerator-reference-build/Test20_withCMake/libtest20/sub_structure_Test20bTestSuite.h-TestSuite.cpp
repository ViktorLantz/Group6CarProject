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
    std::ofstream ofstr("TEST-libtest20-sub_structure_Test20bTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest20-sub_structure_Test20bTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_sub_structure_Test20b_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test20_withCMake/libtest20/testsuites/sub_structure_Test20bTestSuite.h"

static sub_structure_Test20b_TestSuite suite_sub_structure_Test20b_TestSuite;

static CxxTest::List Tests_sub_structure_Test20b_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_sub_structure_Test20b_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test20_withCMake/libtest20/testsuites/sub_structure_Test20bTestSuite.h", 25, "sub_structure_Test20b_TestSuite", suite_sub_structure_Test20b_TestSuite, Tests_sub_structure_Test20b_TestSuite );

static class TestDescription_suite_sub_structure_Test20b_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure_Test20b_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_sub_structure_Test20b_TestSuite, suiteDescription_sub_structure_Test20b_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_sub_structure_Test20b_TestSuite.testCreateObject(); }
} testDescription_suite_sub_structure_Test20b_TestSuite_testCreateObject;

static class TestDescription_suite_sub_structure_Test20b_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure_Test20b_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_sub_structure_Test20b_TestSuite, suiteDescription_sub_structure_Test20b_TestSuite, 39, "testCreateAndCopyObject" ) {}
 void runTest() { suite_sub_structure_Test20b_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_sub_structure_Test20b_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_sub_structure_Test20b_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure_Test20b_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_sub_structure_Test20b_TestSuite, suiteDescription_sub_structure_Test20b_TestSuite, 60, "testCreateAndAssignObject" ) {}
 void runTest() { suite_sub_structure_Test20b_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_sub_structure_Test20b_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_sub_structure_Test20b_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure_Test20b_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_sub_structure_Test20b_TestSuite, suiteDescription_sub_structure_Test20b_TestSuite, 81, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_sub_structure_Test20b_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_sub_structure_Test20b_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
