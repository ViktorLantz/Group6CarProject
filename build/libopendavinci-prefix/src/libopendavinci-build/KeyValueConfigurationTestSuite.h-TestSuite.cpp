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
    std::ofstream ofstr("TEST-libopendavinci-KeyValueConfigurationTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-KeyValueConfigurationTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ConfigurationTest_init = false;
#include "../../../../libopendavinci/testsuites/KeyValueConfigurationTestSuite.h"

static ConfigurationTest suite_ConfigurationTest;

static CxxTest::List Tests_ConfigurationTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ConfigurationTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/KeyValueConfigurationTestSuite.h", 36, "ConfigurationTest", suite_ConfigurationTest, Tests_ConfigurationTest );

static class TestDescription_suite_ConfigurationTest_testReadSimpleData : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConfigurationTest_testReadSimpleData() : CxxTest::RealTestDescription( Tests_ConfigurationTest, suiteDescription_ConfigurationTest, 38, "testReadSimpleData" ) {}
 void runTest() { suite_ConfigurationTest.testReadSimpleData(); }
} testDescription_suite_ConfigurationTest_testReadSimpleData;

static class TestDescription_suite_ConfigurationTest_testReadSimpleDataCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConfigurationTest_testReadSimpleDataCopyConstructor() : CxxTest::RealTestDescription( Tests_ConfigurationTest, suiteDescription_ConfigurationTest, 73, "testReadSimpleDataCopyConstructor" ) {}
 void runTest() { suite_ConfigurationTest.testReadSimpleDataCopyConstructor(); }
} testDescription_suite_ConfigurationTest_testReadSimpleDataCopyConstructor;

static class TestDescription_suite_ConfigurationTest_testReadSimpleDataAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConfigurationTest_testReadSimpleDataAssignmentOperator() : CxxTest::RealTestDescription( Tests_ConfigurationTest, suiteDescription_ConfigurationTest, 110, "testReadSimpleDataAssignmentOperator" ) {}
 void runTest() { suite_ConfigurationTest.testReadSimpleDataAssignmentOperator(); }
} testDescription_suite_ConfigurationTest_testReadSimpleDataAssignmentOperator;

static class TestDescription_suite_ConfigurationTest_testReadCommentedData : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConfigurationTest_testReadCommentedData() : CxxTest::RealTestDescription( Tests_ConfigurationTest, suiteDescription_ConfigurationTest, 148, "testReadCommentedData" ) {}
 void runTest() { suite_ConfigurationTest.testReadCommentedData(); }
} testDescription_suite_ConfigurationTest_testReadCommentedData;

static class TestDescription_suite_ConfigurationTest_testReadCommentedDataCaseInsensitive : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConfigurationTest_testReadCommentedDataCaseInsensitive() : CxxTest::RealTestDescription( Tests_ConfigurationTest, suiteDescription_ConfigurationTest, 188, "testReadCommentedDataCaseInsensitive" ) {}
 void runTest() { suite_ConfigurationTest.testReadCommentedDataCaseInsensitive(); }
} testDescription_suite_ConfigurationTest_testReadCommentedDataCaseInsensitive;

static class TestDescription_suite_ConfigurationTest_testReadCommentedDataSubset : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConfigurationTest_testReadCommentedDataSubset() : CxxTest::RealTestDescription( Tests_ConfigurationTest, suiteDescription_ConfigurationTest, 220, "testReadCommentedDataSubset" ) {}
 void runTest() { suite_ConfigurationTest.testReadCommentedDataSubset(); }
} testDescription_suite_ConfigurationTest_testReadCommentedDataSubset;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
