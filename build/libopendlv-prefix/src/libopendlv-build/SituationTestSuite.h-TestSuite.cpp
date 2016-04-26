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
    std::ofstream ofstr("TEST-libopendlv-SituationTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendlv-SituationTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SituationTest_init = false;
#include "../../../../libopendlv/testsuites/SituationTestSuite.h"

static SituationTest suite_SituationTest;

static CxxTest::List Tests_SituationTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SituationTest( "/home/viktor/OpenDaVINCI/libopendlv/testsuites/SituationTestSuite.h", 54, "SituationTest", suite_SituationTest, Tests_SituationTest );

static class TestDescription_suite_SituationTest_testParsingCorruptSITGrammar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SituationTest_testParsingCorruptSITGrammar() : CxxTest::RealTestDescription( Tests_SituationTest, suiteDescription_SituationTest, 56, "testParsingCorruptSITGrammar" ) {}
 void runTest() { suite_SituationTest.testParsingCorruptSITGrammar(); }
} testDescription_suite_SituationTest_testParsingCorruptSITGrammar;

static class TestDescription_suite_SituationTest_testParsingSITGrammar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SituationTest_testParsingSITGrammar() : CxxTest::RealTestDescription( Tests_SituationTest, suiteDescription_SituationTest, 73, "testParsingSITGrammar" ) {}
 void runTest() { suite_SituationTest.testParsingSITGrammar(); }
} testDescription_suite_SituationTest_testParsingSITGrammar;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
