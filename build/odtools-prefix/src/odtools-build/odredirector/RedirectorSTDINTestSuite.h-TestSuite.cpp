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
    std::ofstream ofstr("TEST-odredirector-RedirectorSTDINTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odredirector-RedirectorSTDINTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_RedirectorTest_init = false;
#include "../../../../../odtools/odredirector/testsuites/RedirectorSTDINTestSuite.h"

static RedirectorTest suite_RedirectorTest;

static CxxTest::List Tests_RedirectorTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RedirectorTest( "/home/viktor/OpenDaVINCI/odtools/odredirector/testsuites/RedirectorSTDINTestSuite.h", 76, "RedirectorTest", suite_RedirectorTest, Tests_RedirectorTest );

static class TestDescription_suite_RedirectorTest_testRedirectorPumpFromStdin : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RedirectorTest_testRedirectorPumpFromStdin() : CxxTest::RealTestDescription( Tests_RedirectorTest, suiteDescription_RedirectorTest, 106, "testRedirectorPumpFromStdin" ) {}
 void runTest() { suite_RedirectorTest.testRedirectorPumpFromStdin(); }
} testDescription_suite_RedirectorTest_testRedirectorPumpFromStdin;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
