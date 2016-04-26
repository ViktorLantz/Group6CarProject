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
    std::ofstream ofstr("TEST-odsupercomponent-LoggingLevelWarnTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odsupercomponent-LoggingLevelWarnTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_LoggerTest_init = false;
#include "../../../../odsupercomponent/testsuites/LoggingLevelWarnTestSuite.h"

static LoggerTest suite_LoggerTest;

static CxxTest::List Tests_LoggerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LoggerTest( "/home/viktor/OpenDaVINCI/odsupercomponent/testsuites/LoggingLevelWarnTestSuite.h", 148, "LoggerTest", suite_LoggerTest, Tests_LoggerTest );

static class TestDescription_suite_LoggerTest_testLogLevelWarn : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LoggerTest_testLogLevelWarn() : CxxTest::RealTestDescription( Tests_LoggerTest, suiteDescription_LoggerTest, 151, "testLogLevelWarn" ) {}
 void runTest() { suite_LoggerTest.testLogLevelWarn(); }
} testDescription_suite_LoggerTest_testLogLevelWarn;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
