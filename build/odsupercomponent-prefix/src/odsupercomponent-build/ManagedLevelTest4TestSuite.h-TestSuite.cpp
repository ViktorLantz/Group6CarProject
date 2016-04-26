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
    std::ofstream ofstr("TEST-odsupercomponent-ManagedLevelTest4TestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odsupercomponent-ManagedLevelTest4TestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ManagedLevelTest_init = false;
#include "../../../../odsupercomponent/testsuites/ManagedLevelTest4TestSuite.h"

static ManagedLevelTest suite_ManagedLevelTest;

static CxxTest::List Tests_ManagedLevelTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ManagedLevelTest( "/home/viktor/OpenDaVINCI/odsupercomponent/testsuites/ManagedLevelTest4TestSuite.h", 315, "ManagedLevelTest", suite_ManagedLevelTest, Tests_ManagedLevelTest );

static class TestDescription_suite_ManagedLevelTest_testManagedLevelPulseTimeAck_SenderReceiver : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ManagedLevelTest_testManagedLevelPulseTimeAck_SenderReceiver() : CxxTest::RealTestDescription( Tests_ManagedLevelTest, suiteDescription_ManagedLevelTest, 318, "testManagedLevelPulseTimeAck_SenderReceiver" ) {}
 void runTest() { suite_ManagedLevelTest.testManagedLevelPulseTimeAck_SenderReceiver(); }
} testDescription_suite_ManagedLevelTest_testManagedLevelPulseTimeAck_SenderReceiver;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
