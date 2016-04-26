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
    std::ofstream ofstr("TEST-libopendavinci-SerializationTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-SerializationTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SerializationTest_init = false;
#include "../../../../libopendavinci/testsuites/SerializationTestSuite.h"

static SerializationTest suite_SerializationTest;

static CxxTest::List Tests_SerializationTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SerializationTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/SerializationTestSuite.h", 126, "SerializationTest", suite_SerializationTest, Tests_SerializationTest );

static class TestDescription_suite_SerializationTest_testSerializationDeserialization : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SerializationTest_testSerializationDeserialization() : CxxTest::RealTestDescription( Tests_SerializationTest, suiteDescription_SerializationTest, 128, "testSerializationDeserialization" ) {}
 void runTest() { suite_SerializationTest.testSerializationDeserialization(); }
} testDescription_suite_SerializationTest_testSerializationDeserialization;

static class TestDescription_suite_SerializationTest_testArraySerialisation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SerializationTest_testArraySerialisation() : CxxTest::RealTestDescription( Tests_SerializationTest, suiteDescription_SerializationTest, 151, "testArraySerialisation" ) {}
 void runTest() { suite_SerializationTest.testArraySerialisation(); }
} testDescription_suite_SerializationTest_testArraySerialisation;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
