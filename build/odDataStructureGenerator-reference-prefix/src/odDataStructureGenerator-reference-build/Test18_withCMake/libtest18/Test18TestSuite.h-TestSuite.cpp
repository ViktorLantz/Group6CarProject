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
    std::ofstream ofstr("TEST-libtest18-Test18TestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest18-Test18TestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_Test18_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test18_withCMake/libtest18/testsuites/Test18TestSuite.h"

static Test18_TestSuite suite_Test18_TestSuite;

static CxxTest::List Tests_Test18_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test18_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test18_withCMake/libtest18/testsuites/Test18TestSuite.h", 25, "Test18_TestSuite", suite_Test18_TestSuite, Tests_Test18_TestSuite );

static class TestDescription_suite_Test18_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test18_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_Test18_TestSuite, suiteDescription_Test18_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_Test18_TestSuite.testCreateObject(); }
} testDescription_suite_Test18_TestSuite_testCreateObject;

static class TestDescription_suite_Test18_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test18_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_Test18_TestSuite, suiteDescription_Test18_TestSuite, 68, "testCreateAndCopyObject" ) {}
 void runTest() { suite_Test18_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_Test18_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_Test18_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test18_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_Test18_TestSuite, suiteDescription_Test18_TestSuite, 146, "testCreateAndAssignObject" ) {}
 void runTest() { suite_Test18_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_Test18_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_Test18_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test18_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_Test18_TestSuite, suiteDescription_Test18_TestSuite, 222, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_Test18_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_Test18_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
