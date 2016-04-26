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
    std::ofstream ofstr("TEST-libopendavinci-FalseSerializationTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-FalseSerializationTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_FalseSerializationTest_init = false;
#include "../../../../libopendavinci/testsuites/FalseSerializationTestSuite.h"

static FalseSerializationTest suite_FalseSerializationTest;

static CxxTest::List Tests_FalseSerializationTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FalseSerializationTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/FalseSerializationTestSuite.h", 107, "FalseSerializationTest", suite_FalseSerializationTest, Tests_FalseSerializationTest );

static class TestDescription_suite_FalseSerializationTest_testSerializationDeserialization : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FalseSerializationTest_testSerializationDeserialization() : CxxTest::RealTestDescription( Tests_FalseSerializationTest, suiteDescription_FalseSerializationTest, 109, "testSerializationDeserialization" ) {}
 void runTest() { suite_FalseSerializationTest.testSerializationDeserialization(); }
} testDescription_suite_FalseSerializationTest_testSerializationDeserialization;

static class TestDescription_suite_FalseSerializationTest_testTimeStamp35 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FalseSerializationTest_testTimeStamp35() : CxxTest::RealTestDescription( Tests_FalseSerializationTest, suiteDescription_FalseSerializationTest, 128, "testTimeStamp35" ) {}
 void runTest() { suite_FalseSerializationTest.testTimeStamp35(); }
} testDescription_suite_FalseSerializationTest_testTimeStamp35;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
