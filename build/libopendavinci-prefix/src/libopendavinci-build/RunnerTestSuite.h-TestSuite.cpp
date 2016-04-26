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
    std::ofstream ofstr("TEST-libopendavinci-RunnerTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-RunnerTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_RunnerTest_init = false;
#include "../../../../libopendavinci/testsuites/RunnerTestSuite.h"

static RunnerTest suite_RunnerTest;

static CxxTest::List Tests_RunnerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RunnerTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/RunnerTestSuite.h", 45, "RunnerTest", suite_RunnerTest, Tests_RunnerTest );

static class TestDescription_suite_RunnerTest_testFrequencies : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RunnerTest_testFrequencies() : CxxTest::RealTestDescription( Tests_RunnerTest, suiteDescription_RunnerTest, 47, "testFrequencies" ) {}
 void runTest() { suite_RunnerTest.testFrequencies(); }
} testDescription_suite_RunnerTest_testFrequencies;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
