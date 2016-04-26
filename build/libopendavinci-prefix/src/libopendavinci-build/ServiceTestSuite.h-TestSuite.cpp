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
    std::ofstream ofstr("TEST-libopendavinci-ServiceTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ServiceTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ServiceTest_init = false;
#include "../../../../libopendavinci/testsuites/ServiceTestSuite.h"

static ServiceTest suite_ServiceTest;

static CxxTest::List Tests_ServiceTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ServiceTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ServiceTestSuite.h", 97, "ServiceTest", suite_ServiceTest, Tests_ServiceTest );

static class TestDescription_suite_ServiceTest_testService : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ServiceTest_testService() : CxxTest::RealTestDescription( Tests_ServiceTest, suiteDescription_ServiceTest, 116, "testService" ) {}
 void runTest() { suite_ServiceTest.testService(); }
} testDescription_suite_ServiceTest_testService;

static class TestDescription_suite_ServiceTest_testSeveralServices : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ServiceTest_testSeveralServices() : CxxTest::RealTestDescription( Tests_ServiceTest, suiteDescription_ServiceTest, 135, "testSeveralServices" ) {}
 void runTest() { suite_ServiceTest.testSeveralServices(); }
} testDescription_suite_ServiceTest_testSeveralServices;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
