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
    std::ofstream ofstr("TEST-libopendavinci-ProtoTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ProtoTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ProtoTest_init = false;
#include "../../../../libopendavinci/testsuites/ProtoTestSuite.h"

static ProtoTest suite_ProtoTest;

static CxxTest::List Tests_ProtoTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ProtoTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ProtoTestSuite.h", 254, "ProtoTest", suite_ProtoTest, Tests_ProtoTest );

static class TestDescription_suite_ProtoTest_testSerializationDeserialization : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ProtoTest_testSerializationDeserialization() : CxxTest::RealTestDescription( Tests_ProtoTest, suiteDescription_ProtoTest, 256, "testSerializationDeserialization" ) {}
 void runTest() { suite_ProtoTest.testSerializationDeserialization(); }
} testDescription_suite_ProtoTest_testSerializationDeserialization;

static class TestDescription_suite_ProtoTest_testSerializationDeserializationInheritance : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ProtoTest_testSerializationDeserializationInheritance() : CxxTest::RealTestDescription( Tests_ProtoTest, suiteDescription_ProtoTest, 282, "testSerializationDeserializationInheritance" ) {}
 void runTest() { suite_ProtoTest.testSerializationDeserializationInheritance(); }
} testDescription_suite_ProtoTest_testSerializationDeserializationInheritance;

static class TestDescription_suite_ProtoTest_testSerializationDeserializationFloatingPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ProtoTest_testSerializationDeserializationFloatingPoint() : CxxTest::RealTestDescription( Tests_ProtoTest, suiteDescription_ProtoTest, 313, "testSerializationDeserializationFloatingPoint" ) {}
 void runTest() { suite_ProtoTest.testSerializationDeserializationFloatingPoint(); }
} testDescription_suite_ProtoTest_testSerializationDeserializationFloatingPoint;

static class TestDescription_suite_ProtoTest_testSerializationDeserializationFloatingPointNoHeader : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ProtoTest_testSerializationDeserializationFloatingPointNoHeader() : CxxTest::RealTestDescription( Tests_ProtoTest, suiteDescription_ProtoTest, 342, "testSerializationDeserializationFloatingPointNoHeader" ) {}
 void runTest() { suite_ProtoTest.testSerializationDeserializationFloatingPointNoHeader(); }
} testDescription_suite_ProtoTest_testSerializationDeserializationFloatingPointNoHeader;

static class TestDescription_suite_ProtoTest_testSerializationDeserializationNullValues : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ProtoTest_testSerializationDeserializationNullValues() : CxxTest::RealTestDescription( Tests_ProtoTest, suiteDescription_ProtoTest, 371, "testSerializationDeserializationNullValues" ) {}
 void runTest() { suite_ProtoTest.testSerializationDeserializationNullValues(); }
} testDescription_suite_ProtoTest_testSerializationDeserializationNullValues;

static class TestDescription_suite_ProtoTest_testProtoSerialisation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ProtoTest_testProtoSerialisation() : CxxTest::RealTestDescription( Tests_ProtoTest, suiteDescription_ProtoTest, 421, "testProtoSerialisation" ) {}
 void runTest() { suite_ProtoTest.testProtoSerialisation(); }
} testDescription_suite_ProtoTest_testProtoSerialisation;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
