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
    std::ofstream ofstr("TEST-libopendavinci-ROSTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ROSTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ROSTest_init = false;
#include "../../../../libopendavinci/testsuites/ROSTestSuite.h"

static ROSTest suite_ROSTest;

static CxxTest::List Tests_ROSTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ROSTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ROSTestSuite.h", 254, "ROSTest", suite_ROSTest, Tests_ROSTest );

static class TestDescription_suite_ROSTest_testSerializationDeserialization : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ROSTest_testSerializationDeserialization() : CxxTest::RealTestDescription( Tests_ROSTest, suiteDescription_ROSTest, 256, "testSerializationDeserialization" ) {}
 void runTest() { suite_ROSTest.testSerializationDeserialization(); }
} testDescription_suite_ROSTest_testSerializationDeserialization;

static class TestDescription_suite_ROSTest_testSerializationDeserializationInheritance : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ROSTest_testSerializationDeserializationInheritance() : CxxTest::RealTestDescription( Tests_ROSTest, suiteDescription_ROSTest, 283, "testSerializationDeserializationInheritance" ) {}
 void runTest() { suite_ROSTest.testSerializationDeserializationInheritance(); }
} testDescription_suite_ROSTest_testSerializationDeserializationInheritance;

static class TestDescription_suite_ROSTest_testSerializationDeserializationFloatingPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ROSTest_testSerializationDeserializationFloatingPoint() : CxxTest::RealTestDescription( Tests_ROSTest, suiteDescription_ROSTest, 316, "testSerializationDeserializationFloatingPoint" ) {}
 void runTest() { suite_ROSTest.testSerializationDeserializationFloatingPoint(); }
} testDescription_suite_ROSTest_testSerializationDeserializationFloatingPoint;

static class TestDescription_suite_ROSTest_testRosSerialisation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ROSTest_testRosSerialisation() : CxxTest::RealTestDescription( Tests_ROSTest, suiteDescription_ROSTest, 347, "testRosSerialisation" ) {}
 void runTest() { suite_ROSTest.testRosSerialisation(); }
} testDescription_suite_ROSTest_testRosSerialisation;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
