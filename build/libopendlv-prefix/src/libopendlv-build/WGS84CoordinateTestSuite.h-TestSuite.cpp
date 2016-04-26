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
    std::ofstream ofstr("TEST-libopendlv-WGS84CoordinateTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendlv-WGS84CoordinateTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_WGS84CoordinateTest_init = false;
#include "../../../../libopendlv/testsuites/WGS84CoordinateTestSuite.h"

static WGS84CoordinateTest suite_WGS84CoordinateTest;

static CxxTest::List Tests_WGS84CoordinateTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_WGS84CoordinateTest( "/home/viktor/OpenDaVINCI/libopendlv/testsuites/WGS84CoordinateTestSuite.h", 40, "WGS84CoordinateTest", suite_WGS84CoordinateTest, Tests_WGS84CoordinateTest );

static class TestDescription_suite_WGS84CoordinateTest_testWGS84Coordinate : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_WGS84CoordinateTest_testWGS84Coordinate() : CxxTest::RealTestDescription( Tests_WGS84CoordinateTest, suiteDescription_WGS84CoordinateTest, 42, "testWGS84Coordinate" ) {}
 void runTest() { suite_WGS84CoordinateTest.testWGS84Coordinate(); }
} testDescription_suite_WGS84CoordinateTest_testWGS84Coordinate;

static class TestDescription_suite_WGS84CoordinateTest_testWGS84CoordinateTransformationSelf : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_WGS84CoordinateTest_testWGS84CoordinateTransformationSelf() : CxxTest::RealTestDescription( Tests_WGS84CoordinateTest, suiteDescription_WGS84CoordinateTest, 65, "testWGS84CoordinateTransformationSelf" ) {}
 void runTest() { suite_WGS84CoordinateTest.testWGS84CoordinateTransformationSelf(); }
} testDescription_suite_WGS84CoordinateTest_testWGS84CoordinateTransformationSelf;

static class TestDescription_suite_WGS84CoordinateTest_testWGS84CoordinateTransformation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_WGS84CoordinateTest_testWGS84CoordinateTransformation() : CxxTest::RealTestDescription( Tests_WGS84CoordinateTest, suiteDescription_WGS84CoordinateTest, 76, "testWGS84CoordinateTransformation" ) {}
 void runTest() { suite_WGS84CoordinateTest.testWGS84CoordinateTransformation(); }
} testDescription_suite_WGS84CoordinateTest_testWGS84CoordinateTransformation;

static class TestDescription_suite_WGS84CoordinateTest_testInverseProjection : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_WGS84CoordinateTest_testInverseProjection() : CxxTest::RealTestDescription( Tests_WGS84CoordinateTest, suiteDescription_WGS84CoordinateTest, 221, "testInverseProjection" ) {}
 void runTest() { suite_WGS84CoordinateTest.testInverseProjection(); }
} testDescription_suite_WGS84CoordinateTest_testInverseProjection;

static class TestDescription_suite_WGS84CoordinateTest_testInverseProjectionWithAccuracy : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_WGS84CoordinateTest_testInverseProjectionWithAccuracy() : CxxTest::RealTestDescription( Tests_WGS84CoordinateTest, suiteDescription_WGS84CoordinateTest, 366, "testInverseProjectionWithAccuracy" ) {}
 void runTest() { suite_WGS84CoordinateTest.testInverseProjectionWithAccuracy(); }
} testDescription_suite_WGS84CoordinateTest_testInverseProjectionWithAccuracy;

static class TestDescription_suite_WGS84CoordinateTest_testGPRMC : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_WGS84CoordinateTest_testGPRMC() : CxxTest::RealTestDescription( Tests_WGS84CoordinateTest, suiteDescription_WGS84CoordinateTest, 511, "testGPRMC" ) {}
 void runTest() { suite_WGS84CoordinateTest.testGPRMC(); }
} testDescription_suite_WGS84CoordinateTest_testGPRMC;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
