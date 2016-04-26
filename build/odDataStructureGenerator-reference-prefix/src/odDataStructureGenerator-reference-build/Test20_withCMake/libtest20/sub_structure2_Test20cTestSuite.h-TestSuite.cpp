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
    std::ofstream ofstr("TEST-libtest20-sub_structure2_Test20cTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest20-sub_structure2_Test20cTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_sub_structure2_Test20c_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test20_withCMake/libtest20/testsuites/sub_structure2_Test20cTestSuite.h"

static sub_structure2_Test20c_TestSuite suite_sub_structure2_Test20c_TestSuite;

static CxxTest::List Tests_sub_structure2_Test20c_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_sub_structure2_Test20c_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test20_withCMake/libtest20/testsuites/sub_structure2_Test20cTestSuite.h", 26, "sub_structure2_Test20c_TestSuite", suite_sub_structure2_Test20c_TestSuite, Tests_sub_structure2_Test20c_TestSuite );

static class TestDescription_suite_sub_structure2_Test20c_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure2_Test20c_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_sub_structure2_Test20c_TestSuite, suiteDescription_sub_structure2_Test20c_TestSuite, 29, "testCreateObject" ) {}
 void runTest() { suite_sub_structure2_Test20c_TestSuite.testCreateObject(); }
} testDescription_suite_sub_structure2_Test20c_TestSuite_testCreateObject;

static class TestDescription_suite_sub_structure2_Test20c_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure2_Test20c_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_sub_structure2_Test20c_TestSuite, suiteDescription_sub_structure2_Test20c_TestSuite, 40, "testCreateAndCopyObject" ) {}
 void runTest() { suite_sub_structure2_Test20c_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_sub_structure2_Test20c_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_sub_structure2_Test20c_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure2_Test20c_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_sub_structure2_Test20c_TestSuite, suiteDescription_sub_structure2_Test20c_TestSuite, 61, "testCreateAndAssignObject" ) {}
 void runTest() { suite_sub_structure2_Test20c_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_sub_structure2_Test20c_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_sub_structure2_Test20c_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_sub_structure2_Test20c_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_sub_structure2_Test20c_TestSuite, suiteDescription_sub_structure2_Test20c_TestSuite, 82, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_sub_structure2_Test20c_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_sub_structure2_Test20c_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
