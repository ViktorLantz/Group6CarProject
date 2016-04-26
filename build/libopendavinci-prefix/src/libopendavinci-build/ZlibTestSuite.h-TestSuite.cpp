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
    std::ofstream ofstr("TEST-libopendavinci-ZlibTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ZlibTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ZlibTest_init = false;
#include "../../../../libopendavinci/testsuites/ZlibTestSuite.h"

static ZlibTest suite_ZlibTest;

static CxxTest::List Tests_ZlibTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ZlibTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ZlibTestSuite.h", 33, "ZlibTest", suite_ZlibTest, Tests_ZlibTest );

static class TestDescription_suite_ZlibTest_testCompressionDecompression : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ZlibTest_testCompressionDecompression() : CxxTest::RealTestDescription( Tests_ZlibTest, suiteDescription_ZlibTest, 35, "testCompressionDecompression" ) {}
 void runTest() { suite_ZlibTest.testCompressionDecompression(); }
} testDescription_suite_ZlibTest_testCompressionDecompression;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
