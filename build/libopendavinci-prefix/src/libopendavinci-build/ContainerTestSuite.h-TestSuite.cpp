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
    std::ofstream ofstr("TEST-libopendavinci-ContainerTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ContainerTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ContainerTest_init = false;
#include "../../../../libopendavinci/testsuites/ContainerTestSuite.h"

static ContainerTest suite_ContainerTest;

static CxxTest::List Tests_ContainerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ContainerTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ContainerTestSuite.h", 35, "ContainerTest", suite_ContainerTest, Tests_ContainerTest );

static class TestDescription_suite_ContainerTest_testTimeStampData : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ContainerTest_testTimeStampData() : CxxTest::RealTestDescription( Tests_ContainerTest, suiteDescription_ContainerTest, 37, "testTimeStampData" ) {}
 void runTest() { suite_ContainerTest.testTimeStampData(); }
} testDescription_suite_ContainerTest_testTimeStampData;

static class TestDescription_suite_ContainerTest_testContainerData : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ContainerTest_testContainerData() : CxxTest::RealTestDescription( Tests_ContainerTest, suiteDescription_ContainerTest, 50, "testContainerData" ) {}
 void runTest() { suite_ContainerTest.testContainerData(); }
} testDescription_suite_ContainerTest_testContainerData;

static class TestDescription_suite_ContainerTest_testContainerDataUserType : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ContainerTest_testContainerDataUserType() : CxxTest::RealTestDescription( Tests_ContainerTest, suiteDescription_ContainerTest, 66, "testContainerDataUserType" ) {}
 void runTest() { suite_ContainerTest.testContainerDataUserType(); }
} testDescription_suite_ContainerTest_testContainerDataUserType;

static class TestDescription_suite_ContainerTest_testSimpleContainerConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ContainerTest_testSimpleContainerConstructor() : CxxTest::RealTestDescription( Tests_ContainerTest, suiteDescription_ContainerTest, 86, "testSimpleContainerConstructor" ) {}
 void runTest() { suite_ContainerTest.testSimpleContainerConstructor(); }
} testDescription_suite_ContainerTest_testSimpleContainerConstructor;

static class TestDescription_suite_ContainerTest_testInt32ContainerConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ContainerTest_testInt32ContainerConstructor() : CxxTest::RealTestDescription( Tests_ContainerTest, suiteDescription_ContainerTest, 104, "testInt32ContainerConstructor" ) {}
 void runTest() { suite_ContainerTest.testInt32ContainerConstructor(); }
} testDescription_suite_ContainerTest_testInt32ContainerConstructor;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
