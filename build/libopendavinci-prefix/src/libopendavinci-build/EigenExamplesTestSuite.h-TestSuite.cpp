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
    std::ofstream ofstr("TEST-libopendavinci-EigenExamplesTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-EigenExamplesTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_EigenExamplesTest_init = false;
#include "../../../../libopendavinci/testsuites/EigenExamplesTestSuite.h"

static EigenExamplesTest suite_EigenExamplesTest;

static CxxTest::List Tests_EigenExamplesTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_EigenExamplesTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/EigenExamplesTestSuite.h", 44, "EigenExamplesTest", suite_EigenExamplesTest, Tests_EigenExamplesTest );

static class TestDescription_suite_EigenExamplesTest_testEigenDataMappingOneByte : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EigenExamplesTest_testEigenDataMappingOneByte() : CxxTest::RealTestDescription( Tests_EigenExamplesTest, suiteDescription_EigenExamplesTest, 46, "testEigenDataMappingOneByte" ) {}
 void runTest() { suite_EigenExamplesTest.testEigenDataMappingOneByte(); }
} testDescription_suite_EigenExamplesTest_testEigenDataMappingOneByte;

static class TestDescription_suite_EigenExamplesTest_testEigenDataMappingTwoBytes : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EigenExamplesTest_testEigenDataMappingTwoBytes() : CxxTest::RealTestDescription( Tests_EigenExamplesTest, suiteDescription_EigenExamplesTest, 118, "testEigenDataMappingTwoBytes" ) {}
 void runTest() { suite_EigenExamplesTest.testEigenDataMappingTwoBytes(); }
} testDescription_suite_EigenExamplesTest_testEigenDataMappingTwoBytes;

static class TestDescription_suite_EigenExamplesTest_testEigenDataMappingTwoBytesUsingSharedPointCloud : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EigenExamplesTest_testEigenDataMappingTwoBytesUsingSharedPointCloud() : CxxTest::RealTestDescription( Tests_EigenExamplesTest, suiteDescription_EigenExamplesTest, 191, "testEigenDataMappingTwoBytesUsingSharedPointCloud" ) {}
 void runTest() { suite_EigenExamplesTest.testEigenDataMappingTwoBytesUsingSharedPointCloud(); }
} testDescription_suite_EigenExamplesTest_testEigenDataMappingTwoBytesUsingSharedPointCloud;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
