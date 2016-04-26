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
    std::ofstream ofstr("TEST-libopendavinci-VisitableTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-VisitableTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_VisitableTest_init = false;
#include "../../../../libopendavinci/testsuites/VisitableTestSuite.h"

static VisitableTest suite_VisitableTest;

static CxxTest::List Tests_VisitableTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_VisitableTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/VisitableTestSuite.h", 239, "VisitableTest", suite_VisitableTest, Tests_VisitableTest );

static class TestDescription_suite_VisitableTest_testSerializationDeserializationVisitors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VisitableTest_testSerializationDeserializationVisitors() : CxxTest::RealTestDescription( Tests_VisitableTest, suiteDescription_VisitableTest, 241, "testSerializationDeserializationVisitors" ) {}
 void runTest() { suite_VisitableTest.testSerializationDeserializationVisitors(); }
} testDescription_suite_VisitableTest_testSerializationDeserializationVisitors;

static class TestDescription_suite_VisitableTest_testReuseDeserializationVisitors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VisitableTest_testReuseDeserializationVisitors() : CxxTest::RealTestDescription( Tests_VisitableTest, suiteDescription_VisitableTest, 295, "testReuseDeserializationVisitors" ) {}
 void runTest() { suite_VisitableTest.testReuseDeserializationVisitors(); }
} testDescription_suite_VisitableTest_testReuseDeserializationVisitors;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
