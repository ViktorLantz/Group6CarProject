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
    std::ofstream ofstr("TEST-libopendavinci-RuntimeControlSpecialConfigurationForRegularRunTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-RuntimeControlSpecialConfigurationForRegularRunTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_RuntimeControlTest_init = false;
#include "../../../../libopendavinci/testsuites/RuntimeControlSpecialConfigurationForRegularRunTestSuite.h"

static RuntimeControlTest suite_RuntimeControlTest;

static CxxTest::List Tests_RuntimeControlTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RuntimeControlTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/RuntimeControlSpecialConfigurationForRegularRunTestSuite.h", 111, "RuntimeControlTest", suite_RuntimeControlTest, Tests_RuntimeControlTest );

static class TestDescription_suite_RuntimeControlTest_testRuntimeControlSpecializedConfigurationRegularRun : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RuntimeControlTest_testRuntimeControlSpecializedConfigurationRegularRun() : CxxTest::RealTestDescription( Tests_RuntimeControlTest, suiteDescription_RuntimeControlTest, 113, "testRuntimeControlSpecializedConfigurationRegularRun" ) {}
 void runTest() { suite_RuntimeControlTest.testRuntimeControlSpecializedConfigurationRegularRun(); }
} testDescription_suite_RuntimeControlTest_testRuntimeControlSpecializedConfigurationRegularRun;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
