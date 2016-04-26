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
    std::ofstream ofstr("TEST-lanedetector-LaneDetectorTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "lanedetector-LaneDetectorTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_LaneDetectorTest_init = false;
#include "../../../../../automotive/miniature/lanedetector/testsuites/LaneDetectorTestSuite.h"

static LaneDetectorTest suite_LaneDetectorTest;

static CxxTest::List Tests_LaneDetectorTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LaneDetectorTest( "/home/viktor/OpenDaVINCI/automotive/miniature/lanedetector/testsuites/LaneDetectorTestSuite.h", 67, "LaneDetectorTest", suite_LaneDetectorTest, Tests_LaneDetectorTest );

static class TestDescription_suite_LaneDetectorTest_testLaneDetectorSuccessfullyCreated : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LaneDetectorTest_testLaneDetectorSuccessfullyCreated() : CxxTest::RealTestDescription( Tests_LaneDetectorTest, suiteDescription_LaneDetectorTest, 101, "testLaneDetectorSuccessfullyCreated" ) {}
 void runTest() { suite_LaneDetectorTest.testLaneDetectorSuccessfullyCreated(); }
} testDescription_suite_LaneDetectorTest_testLaneDetectorSuccessfullyCreated;

static class TestDescription_suite_LaneDetectorTest_testLaneDetectorProcessingMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LaneDetectorTest_testLaneDetectorProcessingMethod() : CxxTest::RealTestDescription( Tests_LaneDetectorTest, suiteDescription_LaneDetectorTest, 105, "testLaneDetectorProcessingMethod" ) {}
 void runTest() { suite_LaneDetectorTest.testLaneDetectorProcessingMethod(); }
} testDescription_suite_LaneDetectorTest_testLaneDetectorProcessingMethod;

static class TestDescription_suite_LaneDetectorTest_testLaneDetectorProcessingMethodInvalidSharedMemory : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LaneDetectorTest_testLaneDetectorProcessingMethodInvalidSharedMemory() : CxxTest::RealTestDescription( Tests_LaneDetectorTest, suiteDescription_LaneDetectorTest, 133, "testLaneDetectorProcessingMethodInvalidSharedMemory" ) {}
 void runTest() { suite_LaneDetectorTest.testLaneDetectorProcessingMethodInvalidSharedMemory(); }
} testDescription_suite_LaneDetectorTest_testLaneDetectorProcessingMethodInvalidSharedMemory;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
