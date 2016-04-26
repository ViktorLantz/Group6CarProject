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
    std::ofstream ofstr("TEST-libopendavinci-CommandLineParserTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-CommandLineParserTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_CommandLineParserTestSuite_init = false;
#include "../../../../libopendavinci/testsuites/CommandLineParserTestSuite.h"

static CommandLineParserTestSuite suite_CommandLineParserTestSuite;

static CxxTest::List Tests_CommandLineParserTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CommandLineParserTestSuite( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/CommandLineParserTestSuite.h", 37, "CommandLineParserTestSuite", suite_CommandLineParserTestSuite, Tests_CommandLineParserTestSuite );

static class TestDescription_suite_CommandLineParserTestSuite_testParse : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CommandLineParserTestSuite_testParse() : CxxTest::RealTestDescription( Tests_CommandLineParserTestSuite, suiteDescription_CommandLineParserTestSuite, 39, "testParse" ) {}
 void runTest() { suite_CommandLineParserTestSuite.testParse(); }
} testDescription_suite_CommandLineParserTestSuite_testParse;

static class TestDescription_suite_CommandLineParserTestSuite_testParseSeveralArgumentFromSameKey : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CommandLineParserTestSuite_testParseSeveralArgumentFromSameKey() : CxxTest::RealTestDescription( Tests_CommandLineParserTestSuite, suiteDescription_CommandLineParserTestSuite, 67, "testParseSeveralArgumentFromSameKey" ) {}
 void runTest() { suite_CommandLineParserTestSuite.testParseSeveralArgumentFromSameKey(); }
} testDescription_suite_CommandLineParserTestSuite_testParseSeveralArgumentFromSameKey;

static class TestDescription_suite_CommandLineParserTestSuite_testGetInvalidArgument : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CommandLineParserTestSuite_testGetInvalidArgument() : CxxTest::RealTestDescription( Tests_CommandLineParserTestSuite, suiteDescription_CommandLineParserTestSuite, 107, "testGetInvalidArgument" ) {}
 void runTest() { suite_CommandLineParserTestSuite.testGetInvalidArgument(); }
} testDescription_suite_CommandLineParserTestSuite_testGetInvalidArgument;

static class TestDescription_suite_CommandLineParserTestSuite_testParseIncompleteArgument : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CommandLineParserTestSuite_testParseIncompleteArgument() : CxxTest::RealTestDescription( Tests_CommandLineParserTestSuite, suiteDescription_CommandLineParserTestSuite, 121, "testParseIncompleteArgument" ) {}
 void runTest() { suite_CommandLineParserTestSuite.testParseIncompleteArgument(); }
} testDescription_suite_CommandLineParserTestSuite_testParseIncompleteArgument;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
