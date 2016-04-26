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
    std::ofstream ofstr("TEST-libopendlv-ScenarioTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendlv-ScenarioTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ScenarioTest_init = false;
#include "../../../../libopendlv/testsuites/ScenarioTestSuite.h"

static ScenarioTest suite_ScenarioTest;

static CxxTest::List Tests_ScenarioTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ScenarioTest( "/home/viktor/OpenDaVINCI/libopendlv/testsuites/ScenarioTestSuite.h", 58, "ScenarioTest", suite_ScenarioTest, Tests_ScenarioTest );

static class TestDescription_suite_ScenarioTest_testIDVertex3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ScenarioTest_testIDVertex3() : CxxTest::RealTestDescription( Tests_ScenarioTest, suiteDescription_ScenarioTest, 60, "testIDVertex3" ) {}
 void runTest() { suite_ScenarioTest.testIDVertex3(); }
} testDescription_suite_ScenarioTest_testIDVertex3;

static class TestDescription_suite_ScenarioTest_testParsingCorruptSCNGrammar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ScenarioTest_testParsingCorruptSCNGrammar() : CxxTest::RealTestDescription( Tests_ScenarioTest, suiteDescription_ScenarioTest, 74, "testParsingCorruptSCNGrammar" ) {}
 void runTest() { suite_ScenarioTest.testParsingCorruptSCNGrammar(); }
} testDescription_suite_ScenarioTest_testParsingCorruptSCNGrammar;

static class TestDescription_suite_ScenarioTest_testParsingSCNGrammar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ScenarioTest_testParsingSCNGrammar() : CxxTest::RealTestDescription( Tests_ScenarioTest, suiteDescription_ScenarioTest, 90, "testParsingSCNGrammar" ) {}
 void runTest() { suite_ScenarioTest.testParsingSCNGrammar(); }
} testDescription_suite_ScenarioTest_testParsingSCNGrammar;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
