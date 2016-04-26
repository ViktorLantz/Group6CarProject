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
    std::ofstream ofstr("TEST-boxparker-BoxParkerTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "boxparker-BoxParkerTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_BoxParkerTest_init = false;
#include "../testsuites/BoxParkerTestSuite.h"

static BoxParkerTest suite_BoxParkerTest;

static CxxTest::List Tests_BoxParkerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BoxParkerTest( "/home/viktor/OpenDaVINCI/automotive/miniature/boxparker/testsuites/BoxParkerTestSuite.h", 49, "BoxParkerTest", suite_BoxParkerTest, Tests_BoxParkerTest );

static class TestDescription_suite_BoxParkerTest_testBoxParkerSuccessfullyCreated : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BoxParkerTest_testBoxParkerSuccessfullyCreated() : CxxTest::RealTestDescription( Tests_BoxParkerTest, suiteDescription_BoxParkerTest, 83, "testBoxParkerSuccessfullyCreated" ) {}
 void runTest() { suite_BoxParkerTest.testBoxParkerSuccessfullyCreated(); }
} testDescription_suite_BoxParkerTest_testBoxParkerSuccessfullyCreated;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
