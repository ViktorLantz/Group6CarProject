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
    std::ofstream ofstr("TEST-odspy-SpyTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odspy-SpyTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SpyTest_init = false;
#include "../../../../../odtools/odspy/testsuites/SpyTestSuite.h"

static SpyTest suite_SpyTest;

static CxxTest::List Tests_SpyTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SpyTest( "/home/viktor/OpenDaVINCI/odtools/odspy/testsuites/SpyTestSuite.h", 49, "SpyTest", suite_SpyTest, Tests_SpyTest );

static class TestDescription_suite_SpyTest_testSpySuccessfullyCreated : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SpyTest_testSpySuccessfullyCreated() : CxxTest::RealTestDescription( Tests_SpyTest, suiteDescription_SpyTest, 83, "testSpySuccessfullyCreated" ) {}
 void runTest() { suite_SpyTest.testSpySuccessfullyCreated(); }
} testDescription_suite_SpyTest_testSpySuccessfullyCreated;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
