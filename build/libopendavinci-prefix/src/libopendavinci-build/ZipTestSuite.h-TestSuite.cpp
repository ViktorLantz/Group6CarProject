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
    std::ofstream ofstr("TEST-libopendavinci-ZipTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ZipTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ZipTest_init = false;
#include "../../../../libopendavinci/testsuites/ZipTestSuite.h"

static ZipTest suite_ZipTest;

static CxxTest::List Tests_ZipTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ZipTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ZipTestSuite.h", 37, "ZipTest", suite_ZipTest, Tests_ZipTest );

static class TestDescription_suite_ZipTest_testDecompression : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ZipTest_testDecompression() : CxxTest::RealTestDescription( Tests_ZipTest, suiteDescription_ZipTest, 39, "testDecompression" ) {}
 void runTest() { suite_ZipTest.testDecompression(); }
} testDescription_suite_ZipTest_testDecompression;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
