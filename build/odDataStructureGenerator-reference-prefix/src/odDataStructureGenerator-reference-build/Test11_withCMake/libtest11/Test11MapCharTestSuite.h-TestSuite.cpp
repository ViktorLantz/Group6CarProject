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
    std::ofstream ofstr("TEST-libtest11-Test11MapCharTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libtest11-Test11MapCharTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_Test11MapChar_TestSuite_init = false;
#include "../../../../../../odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test11_withCMake/libtest11/testsuites/Test11MapCharTestSuite.h"

static Test11MapChar_TestSuite suite_Test11MapChar_TestSuite;

static CxxTest::List Tests_Test11MapChar_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test11MapChar_TestSuite( "/home/viktor/OpenDaVINCI/odDataStructureGenerator/org.opendavinci.datamodel/test/odvd/reference/Test11_withCMake/libtest11/testsuites/Test11MapCharTestSuite.h", 25, "Test11MapChar_TestSuite", suite_Test11MapChar_TestSuite, Tests_Test11MapChar_TestSuite );

static class TestDescription_suite_Test11MapChar_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test11MapChar_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_Test11MapChar_TestSuite, suiteDescription_Test11MapChar_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_Test11MapChar_TestSuite.testCreateObject(); }
} testDescription_suite_Test11MapChar_TestSuite_testCreateObject;

static class TestDescription_suite_Test11MapChar_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test11MapChar_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_Test11MapChar_TestSuite, suiteDescription_Test11MapChar_TestSuite, 527, "testCreateAndCopyObject" ) {}
 void runTest() { suite_Test11MapChar_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_Test11MapChar_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_Test11MapChar_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test11MapChar_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_Test11MapChar_TestSuite, suiteDescription_Test11MapChar_TestSuite, 1115, "testCreateAndAssignObject" ) {}
 void runTest() { suite_Test11MapChar_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_Test11MapChar_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_Test11MapChar_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test11MapChar_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_Test11MapChar_TestSuite, suiteDescription_Test11MapChar_TestSuite, 1710, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_Test11MapChar_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_Test11MapChar_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
