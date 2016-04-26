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
    std::ofstream ofstr("TEST-libopendavinci-ControlFlowTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ControlFlowTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ControlFlowTest_init = false;
#include "../../../../libopendavinci/testsuites/ControlFlowTestSuite.h"

static ControlFlowTest suite_ControlFlowTest;

static CxxTest::List Tests_ControlFlowTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ControlFlowTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ControlFlowTestSuite.h", 281, "ControlFlowTest", suite_ControlFlowTest, Tests_ControlFlowTest );

static class TestDescription_suite_ControlFlowTest_testControlledContainerFactoryTestSuite : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ControlFlowTest_testControlledContainerFactoryTestSuite() : CxxTest::RealTestDescription( Tests_ControlFlowTest, suiteDescription_ControlFlowTest, 300, "testControlledContainerFactoryTestSuite" ) {}
 void runTest() { suite_ControlFlowTest.testControlledContainerFactoryTestSuite(); }
} testDescription_suite_ControlFlowTest_testControlledContainerFactoryTestSuite;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
