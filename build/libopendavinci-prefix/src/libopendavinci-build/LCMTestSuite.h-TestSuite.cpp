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
    std::ofstream ofstr("TEST-libopendavinci-LCMTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-LCMTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_LCMTest_init = false;
#include "../../../../libopendavinci/testsuites/LCMTestSuite.h"

static LCMTest suite_LCMTest;

static CxxTest::List Tests_LCMTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LCMTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/LCMTestSuite.h", 254, "LCMTest", suite_LCMTest, Tests_LCMTest );

static class TestDescription_suite_LCMTest_testSerializationDeserialization : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LCMTest_testSerializationDeserialization() : CxxTest::RealTestDescription( Tests_LCMTest, suiteDescription_LCMTest, 256, "testSerializationDeserialization" ) {}
 void runTest() { suite_LCMTest.testSerializationDeserialization(); }
} testDescription_suite_LCMTest_testSerializationDeserialization;

static class TestDescription_suite_LCMTest_testSerializationDeserializationInheritance : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LCMTest_testSerializationDeserializationInheritance() : CxxTest::RealTestDescription( Tests_LCMTest, suiteDescription_LCMTest, 286, "testSerializationDeserializationInheritance" ) {}
 void runTest() { suite_LCMTest.testSerializationDeserializationInheritance(); }
} testDescription_suite_LCMTest_testSerializationDeserializationInheritance;

static class TestDescription_suite_LCMTest_testSerializationDeserializationFloatingPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LCMTest_testSerializationDeserializationFloatingPoint() : CxxTest::RealTestDescription( Tests_LCMTest, suiteDescription_LCMTest, 322, "testSerializationDeserializationFloatingPoint" ) {}
 void runTest() { suite_LCMTest.testSerializationDeserializationFloatingPoint(); }
} testDescription_suite_LCMTest_testSerializationDeserializationFloatingPoint;

static class TestDescription_suite_LCMTest_testLcmSerialisation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LCMTest_testLcmSerialisation() : CxxTest::RealTestDescription( Tests_LCMTest, suiteDescription_LCMTest, 356, "testLcmSerialisation" ) {}
 void runTest() { suite_LCMTest.testLcmSerialisation(); }
} testDescription_suite_LCMTest_testLcmSerialisation;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
