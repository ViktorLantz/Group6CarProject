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
    std::ofstream ofstr("TEST-VCR-VCRTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "VCR-VCRTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_VCRTest_init = false;
#include "../../../../../automotive/miniature/VCR/testsuites/VCRTestSuite.h"

static VCRTest suite_VCRTest;

static CxxTest::List Tests_VCRTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_VCRTest( "/home/viktor/OpenDaVINCI/automotive/miniature/VCR/testsuites/VCRTestSuite.h", 67, "VCRTest", suite_VCRTest, Tests_VCRTest );

static class TestDescription_suite_VCRTest_testVCRSuccessfullyCreated : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VCRTest_testVCRSuccessfullyCreated() : CxxTest::RealTestDescription( Tests_VCRTest, suiteDescription_VCRTest, 101, "testVCRSuccessfullyCreated" ) {}
 void runTest() { suite_VCRTest.testVCRSuccessfullyCreated(); }
} testDescription_suite_VCRTest_testVCRSuccessfullyCreated;

static class TestDescription_suite_VCRTest_testVCRProcessingMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VCRTest_testVCRProcessingMethod() : CxxTest::RealTestDescription( Tests_VCRTest, suiteDescription_VCRTest, 105, "testVCRProcessingMethod" ) {}
 void runTest() { suite_VCRTest.testVCRProcessingMethod(); }
} testDescription_suite_VCRTest_testVCRProcessingMethod;

static class TestDescription_suite_VCRTest_testVCRProcessingMethodInvalidSharedMemory : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VCRTest_testVCRProcessingMethodInvalidSharedMemory() : CxxTest::RealTestDescription( Tests_VCRTest, suiteDescription_VCRTest, 133, "testVCRProcessingMethodInvalidSharedMemory" ) {}
 void runTest() { suite_VCRTest.testVCRProcessingMethodInvalidSharedMemory(); }
} testDescription_suite_VCRTest_testVCRProcessingMethodInvalidSharedMemory;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
