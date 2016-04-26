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
    std::ofstream ofstr("TEST-libopendavinci-StringPipelineTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-StringPipelineTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_StringPipelineTest_init = false;
#include "../../../../libopendavinci/testsuites/StringPipelineTestSuite.h"

static StringPipelineTest suite_StringPipelineTest;

static CxxTest::List Tests_StringPipelineTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StringPipelineTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/StringPipelineTestSuite.h", 36, "StringPipelineTest", suite_StringPipelineTest, Tests_StringPipelineTest );

static class TestDescription_suite_StringPipelineTest_testRegisterReceiverBeforeSendingData : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringPipelineTest_testRegisterReceiverBeforeSendingData() : CxxTest::RealTestDescription( Tests_StringPipelineTest, suiteDescription_StringPipelineTest, 47, "testRegisterReceiverBeforeSendingData" ) {}
 void runTest() { suite_StringPipelineTest.testRegisterReceiverBeforeSendingData(); }
} testDescription_suite_StringPipelineTest_testRegisterReceiverBeforeSendingData;

static class TestDescription_suite_StringPipelineTest_testRegisterReceiverAfterDataWasSent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StringPipelineTest_testRegisterReceiverAfterDataWasSent() : CxxTest::RealTestDescription( Tests_StringPipelineTest, suiteDescription_StringPipelineTest, 69, "testRegisterReceiverAfterDataWasSent" ) {}
 void runTest() { suite_StringPipelineTest.testRegisterReceiverAfterDataWasSent(); }
} testDescription_suite_StringPipelineTest_testRegisterReceiverAfterDataWasSent;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
