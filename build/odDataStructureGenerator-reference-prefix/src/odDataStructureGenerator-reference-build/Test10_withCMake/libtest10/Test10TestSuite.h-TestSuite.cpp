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
    std::ofstream ofstr("TEST-libtest10-Test10TestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest10-Test10TestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_Test10_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test10_withCMake/libtest10/testsuites/Test10TestSuite.h"

static Test10_TestSuite suite_Test10_TestSuite;

static CxxTest::List Tests_Test10_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test10_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test10_withCMake/libtest10/testsuites/Test10TestSuite.h", 27, "Test10_TestSuite", suite_Test10_TestSuite, Tests_Test10_TestSuite );

static class TestDescription_suite_Test10_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test10_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_Test10_TestSuite, suiteDescription_Test10_TestSuite, 30, "testCreateObject" ) {}
 void runTest() { suite_Test10_TestSuite.testCreateObject(); }
} testDescription_suite_Test10_TestSuite_testCreateObject;

static class TestDescription_suite_Test10_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test10_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_Test10_TestSuite, suiteDescription_Test10_TestSuite, 178, "testCreateAndCopyObject" ) {}
 void runTest() { suite_Test10_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_Test10_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_Test10_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test10_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_Test10_TestSuite, suiteDescription_Test10_TestSuite, 363, "testCreateAndAssignObject" ) {}
 void runTest() { suite_Test10_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_Test10_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_Test10_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test10_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_Test10_TestSuite, suiteDescription_Test10_TestSuite, 552, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_Test10_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_Test10_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
