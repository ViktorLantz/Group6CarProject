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
    std::ofstream ofstr("TEST-libopendavinci-ModuleStatisticsTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ModuleStatisticsTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ModuleStatisticsTest_init = false;
#include "../../../../libopendavinci/testsuites/ModuleStatisticsTestSuite.h"

static ModuleStatisticsTest suite_ModuleStatisticsTest;

static CxxTest::List Tests_ModuleStatisticsTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ModuleStatisticsTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ModuleStatisticsTestSuite.h", 40, "ModuleStatisticsTest", suite_ModuleStatisticsTest, Tests_ModuleStatisticsTest );

static class TestDescription_suite_ModuleStatisticsTest_testSerializeDeserialize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ModuleStatisticsTest_testSerializeDeserialize() : CxxTest::RealTestDescription( Tests_ModuleStatisticsTest, suiteDescription_ModuleStatisticsTest, 42, "testSerializeDeserialize" ) {}
 void runTest() { suite_ModuleStatisticsTest.testSerializeDeserialize(); }
} testDescription_suite_ModuleStatisticsTest_testSerializeDeserialize;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
