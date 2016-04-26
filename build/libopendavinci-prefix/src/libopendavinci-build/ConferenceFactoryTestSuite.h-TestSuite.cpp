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
    std::ofstream ofstr("TEST-libopendavinci-ConferenceFactoryTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-ConferenceFactoryTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ConferenceFactoryTest_init = false;
#include "../../../../libopendavinci/testsuites/ConferenceFactoryTestSuite.h"

static ConferenceFactoryTest suite_ConferenceFactoryTest;

static CxxTest::List Tests_ConferenceFactoryTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ConferenceFactoryTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/ConferenceFactoryTestSuite.h", 85, "ConferenceFactoryTest", suite_ConferenceFactoryTest, Tests_ConferenceFactoryTest );

static class TestDescription_suite_ConferenceFactoryTest_testControlledContainerFactoryTestSuite : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ConferenceFactoryTest_testControlledContainerFactoryTestSuite() : CxxTest::RealTestDescription( Tests_ConferenceFactoryTest, suiteDescription_ConferenceFactoryTest, 87, "testControlledContainerFactoryTestSuite" ) {}
 void runTest() { suite_ConferenceFactoryTest.testControlledContainerFactoryTestSuite(); }
} testDescription_suite_ConferenceFactoryTest_testControlledContainerFactoryTestSuite;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
