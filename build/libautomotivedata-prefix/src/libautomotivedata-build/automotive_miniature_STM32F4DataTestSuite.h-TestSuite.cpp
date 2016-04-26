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
    std::ofstream ofstr("TEST-libautomotivedata-automotive_miniature_STM32F4DataTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libautomotivedata-automotive_miniature_STM32F4DataTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_automotive_miniature_STM32F4Data_TestSuite_init = false;
#include "../../../../libautomotivedata/testsuites/automotive_miniature_STM32F4DataTestSuite.h"

static automotive_miniature_STM32F4Data_TestSuite suite_automotive_miniature_STM32F4Data_TestSuite;

static CxxTest::List Tests_automotive_miniature_STM32F4Data_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_automotive_miniature_STM32F4Data_TestSuite( "/home/viktor/OpenDaVINCI/libautomotivedata/testsuites/automotive_miniature_STM32F4DataTestSuite.h", 25, "automotive_miniature_STM32F4Data_TestSuite", suite_automotive_miniature_STM32F4Data_TestSuite, Tests_automotive_miniature_STM32F4Data_TestSuite );

static class TestDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_automotive_miniature_STM32F4Data_TestSuite, suiteDescription_automotive_miniature_STM32F4Data_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_automotive_miniature_STM32F4Data_TestSuite.testCreateObject(); }
} testDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateObject;

static class TestDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_automotive_miniature_STM32F4Data_TestSuite, suiteDescription_automotive_miniature_STM32F4Data_TestSuite, 39, "testCreateAndCopyObject" ) {}
 void runTest() { suite_automotive_miniature_STM32F4Data_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_automotive_miniature_STM32F4Data_TestSuite, suiteDescription_automotive_miniature_STM32F4Data_TestSuite, 60, "testCreateAndAssignObject" ) {}
 void runTest() { suite_automotive_miniature_STM32F4Data_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_automotive_miniature_STM32F4Data_TestSuite, suiteDescription_automotive_miniature_STM32F4Data_TestSuite, 81, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_automotive_miniature_STM32F4Data_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_automotive_miniature_STM32F4Data_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
