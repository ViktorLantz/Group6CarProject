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
    std::ofstream ofstr("TEST-libtest17-sub_structure_Test17ChildTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest17-sub_structure_Test17ChildTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_sub_structure_Test17Child_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test17_withCMake/libtest17/testsuites/sub_structure_Test17ChildTestSuite.h"

static sub_structure_Test17Child_TestSuite suite_sub_structure_Test17Child_TestSuite;

static CxxTest::List Tests_sub_structure_Test17Child_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_sub_structure_Test17Child_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test17_withCMake/libtest17/testsuites/sub_structure_Test17ChildTestSuite.h", 25, "sub_structure_Test17Child_TestSuite", suite_sub_structure_Test17Child_TestSuite, Tests_sub_structure_Test17Child_TestSuite );

static class TestDescription_suite_sub_structure_Test17Child_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure_Test17Child_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_sub_structure_Test17Child_TestSuite, suiteDescription_sub_structure_Test17Child_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_sub_structure_Test17Child_TestSuite.testCreateObject(); }
} testDescription_suite_sub_structure_Test17Child_TestSuite_testCreateObject;

static class TestDescription_suite_sub_structure_Test17Child_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure_Test17Child_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_sub_structure_Test17Child_TestSuite, suiteDescription_sub_structure_Test17Child_TestSuite, 39, "testCreateAndCopyObject" ) {}
 void runTest() { suite_sub_structure_Test17Child_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_sub_structure_Test17Child_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_sub_structure_Test17Child_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure_Test17Child_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_sub_structure_Test17Child_TestSuite, suiteDescription_sub_structure_Test17Child_TestSuite, 60, "testCreateAndAssignObject" ) {}
 void runTest() { suite_sub_structure_Test17Child_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_sub_structure_Test17Child_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_sub_structure_Test17Child_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure_Test17Child_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_sub_structure_Test17Child_TestSuite, suiteDescription_sub_structure_Test17Child_TestSuite, 81, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_sub_structure_Test17Child_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_sub_structure_Test17Child_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
