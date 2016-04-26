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
    std::ofstream ofstr("TEST-odfilter-FilterTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odfilter-FilterTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_FilterTest_init = false;
#include "../../../../../odtools/odfilter/testsuites/FilterTestSuite.h"

static FilterTest suite_FilterTest;

static CxxTest::List Tests_FilterTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FilterTest( "/home/viktor/OpenDaVINCI/odtools/odfilter/testsuites/FilterTestSuite.h", 34, "FilterTest", suite_FilterTest, Tests_FilterTest );

static class TestDescription_suite_FilterTest_testFilter : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FilterTest_testFilter() : CxxTest::RealTestDescription( Tests_FilterTest, suiteDescription_FilterTest, 40, "testFilter" ) {}
 void runTest() { suite_FilterTest.testFilter(); }
} testDescription_suite_FilterTest_testFilter;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
