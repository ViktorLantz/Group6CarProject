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
    std::ofstream ofstr("TEST-libopendavinci-StringToolboxTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-StringToolboxTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_StringToolboxTest_init = false;
#include "../../../../libopendavinci/testsuites/StringToolboxTestSuite.h"

static StringToolboxTest suite_StringToolboxTest;

static CxxTest::List Tests_StringToolboxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StringToolboxTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/StringToolboxTestSuite.h", 32, "StringToolboxTest", suite_StringToolboxTest, Tests_StringToolboxTest );

static class TestDescription_suite_StringToolboxTest_testTrim : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringToolboxTest_testTrim() : CxxTest::RealTestDescription( Tests_StringToolboxTest, suiteDescription_StringToolboxTest, 34, "testTrim" ) {}
 void runTest() { suite_StringToolboxTest.testTrim(); }
} testDescription_suite_StringToolboxTest_testTrim;

static class TestDescription_suite_StringToolboxTest_testCompareIgnoreCase : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringToolboxTest_testCompareIgnoreCase() : CxxTest::RealTestDescription( Tests_StringToolboxTest, suiteDescription_StringToolboxTest, 61, "testCompareIgnoreCase" ) {}
 void runTest() { suite_StringToolboxTest.testCompareIgnoreCase(); }
} testDescription_suite_StringToolboxTest_testCompareIgnoreCase;

static class TestDescription_suite_StringToolboxTest_testSplit : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringToolboxTest_testSplit() : CxxTest::RealTestDescription( Tests_StringToolboxTest, suiteDescription_StringToolboxTest, 84, "testSplit" ) {}
 void runTest() { suite_StringToolboxTest.testSplit(); }
} testDescription_suite_StringToolboxTest_testSplit;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
