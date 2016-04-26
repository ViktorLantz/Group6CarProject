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
    std::ofstream ofstr("TEST-odrecintegrity-RecIntegrityTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odrecintegrity-RecIntegrityTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_RecIntegrityTest_init = false;
#include "../../../../../odtools/odrecintegrity/testsuites/RecIntegrityTestSuite.h"

static RecIntegrityTest suite_RecIntegrityTest;

static CxxTest::List Tests_RecIntegrityTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RecIntegrityTest( "/home/viktor/OpenDaVINCI/odtools/odrecintegrity/testsuites/RecIntegrityTestSuite.h", 34, "RecIntegrityTest", suite_RecIntegrityTest, Tests_RecIntegrityTest );

static class TestDescription_suite_RecIntegrityTest_testRecIntegritySuccessfullyCreated : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RecIntegrityTest_testRecIntegritySuccessfullyCreated() : CxxTest::RealTestDescription( Tests_RecIntegrityTest, suiteDescription_RecIntegrityTest, 59, "testRecIntegritySuccessfullyCreated" ) {}
 void runTest() { suite_RecIntegrityTest.testRecIntegritySuccessfullyCreated(); }
} testDescription_suite_RecIntegrityTest_testRecIntegritySuccessfullyCreated;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
