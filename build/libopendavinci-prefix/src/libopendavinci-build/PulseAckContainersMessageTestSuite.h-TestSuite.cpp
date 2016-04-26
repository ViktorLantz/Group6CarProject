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
    std::ofstream ofstr("TEST-libopendavinci-PulseAckContainersMessageTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-PulseAckContainersMessageTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_PulseAckContainersTest_init = false;
#include "../../../../libopendavinci/testsuites/PulseAckContainersMessageTestSuite.h"

static PulseAckContainersTest suite_PulseAckContainersTest;

static CxxTest::List Tests_PulseAckContainersTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PulseAckContainersTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/PulseAckContainersMessageTestSuite.h", 38, "PulseAckContainersTest", suite_PulseAckContainersTest, Tests_PulseAckContainersTest );

static class TestDescription_suite_PulseAckContainersTest_testPulseEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PulseAckContainersTest_testPulseEmpty() : CxxTest::RealTestDescription( Tests_PulseAckContainersTest, suiteDescription_PulseAckContainersTest, 40, "testPulseEmpty" ) {}
 void runTest() { suite_PulseAckContainersTest.testPulseEmpty(); }
} testDescription_suite_PulseAckContainersTest_testPulseEmpty;

static class TestDescription_suite_PulseAckContainersTest_testPulseContainers : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PulseAckContainersTest_testPulseContainers() : CxxTest::RealTestDescription( Tests_PulseAckContainersTest, suiteDescription_PulseAckContainersTest, 53, "testPulseContainers" ) {}
 void runTest() { suite_PulseAckContainersTest.testPulseContainers(); }
} testDescription_suite_PulseAckContainersTest_testPulseContainers;

static class TestDescription_suite_PulseAckContainersTest_testPulseContainersSetValues : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PulseAckContainersTest_testPulseContainersSetValues() : CxxTest::RealTestDescription( Tests_PulseAckContainersTest, suiteDescription_PulseAckContainersTest, 99, "testPulseContainersSetValues" ) {}
 void runTest() { suite_PulseAckContainersTest.testPulseContainersSetValues(); }
} testDescription_suite_PulseAckContainersTest_testPulseContainersSetValues;

static class TestDescription_suite_PulseAckContainersTest_testPulseAckContainersEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PulseAckContainersTest_testPulseAckContainersEmpty() : CxxTest::RealTestDescription( Tests_PulseAckContainersTest, suiteDescription_PulseAckContainersTest, 144, "testPulseAckContainersEmpty" ) {}
 void runTest() { suite_PulseAckContainersTest.testPulseAckContainersEmpty(); }
} testDescription_suite_PulseAckContainersTest_testPulseAckContainersEmpty;

static class TestDescription_suite_PulseAckContainersTest_testPulseAckContainers : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PulseAckContainersTest_testPulseAckContainers() : CxxTest::RealTestDescription( Tests_PulseAckContainersTest, suiteDescription_PulseAckContainersTest, 157, "testPulseAckContainers" ) {}
 void runTest() { suite_PulseAckContainersTest.testPulseAckContainers(); }
} testDescription_suite_PulseAckContainersTest_testPulseAckContainers;

static class TestDescription_suite_PulseAckContainersTest_testPulseAckContainers_from_list : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PulseAckContainersTest_testPulseAckContainers_from_list() : CxxTest::RealTestDescription( Tests_PulseAckContainersTest, suiteDescription_PulseAckContainersTest, 203, "testPulseAckContainers_from_list" ) {}
 void runTest() { suite_PulseAckContainersTest.testPulseAckContainers_from_list(); }
} testDescription_suite_PulseAckContainersTest_testPulseAckContainers_from_list;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
