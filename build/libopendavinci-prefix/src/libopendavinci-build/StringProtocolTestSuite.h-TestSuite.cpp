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
    std::ofstream ofstr("TEST-libopendavinci-StringProtocolTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-StringProtocolTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_StringProtocolTest_init = false;
#include "../../../../libopendavinci/testsuites/StringProtocolTestSuite.h"

static StringProtocolTest suite_StringProtocolTest;

static CxxTest::List Tests_StringProtocolTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StringProtocolTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/StringProtocolTestSuite.h", 35, "StringProtocolTest", suite_StringProtocolTest, Tests_StringProtocolTest );

static class TestDescription_suite_StringProtocolTest_testStringProtocolSend : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringProtocolTest_testStringProtocolSend() : CxxTest::RealTestDescription( Tests_StringProtocolTest, suiteDescription_StringProtocolTest, 53, "testStringProtocolSend" ) {}
 void runTest() { suite_StringProtocolTest.testStringProtocolSend(); }
} testDescription_suite_StringProtocolTest_testStringProtocolSend;

static class TestDescription_suite_StringProtocolTest_testStringProtocolReceive : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringProtocolTest_testStringProtocolReceive() : CxxTest::RealTestDescription( Tests_StringProtocolTest, suiteDescription_StringProtocolTest, 74, "testStringProtocolReceive" ) {}
 void runTest() { suite_StringProtocolTest.testStringProtocolReceive(); }
} testDescription_suite_StringProtocolTest_testStringProtocolReceive;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
