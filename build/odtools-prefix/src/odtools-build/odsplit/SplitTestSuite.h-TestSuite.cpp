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
    std::ofstream ofstr("TEST-odsplit-SplitTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odsplit-SplitTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SplitTest_init = false;
#include "../../../../../odtools/odsplit/testsuites/SplitTestSuite.h"

static SplitTest suite_SplitTest;

static CxxTest::List Tests_SplitTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SplitTest( "/home/viktor/OpenDaVINCI/odtools/odsplit/testsuites/SplitTestSuite.h", 68, "SplitTest", suite_SplitTest, Tests_SplitTest );

static class TestDescription_suite_SplitTest_testSplitSuccessfullySplit : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SplitTest_testSplitSuccessfullySplit() : CxxTest::RealTestDescription( Tests_SplitTest, suiteDescription_SplitTest, 115, "testSplitSuccessfullySplit" ) {}
 void runTest() { suite_SplitTest.testSplitSuccessfullySplit(); }
} testDescription_suite_SplitTest_testSplitSuccessfullySplit;

static class TestDescription_suite_SplitTest_testSplitWrongRange : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SplitTest_testSplitWrongRange() : CxxTest::RealTestDescription( Tests_SplitTest, suiteDescription_SplitTest, 193, "testSplitWrongRange" ) {}
 void runTest() { suite_SplitTest.testSplitWrongRange(); }
} testDescription_suite_SplitTest_testSplitWrongRange;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
