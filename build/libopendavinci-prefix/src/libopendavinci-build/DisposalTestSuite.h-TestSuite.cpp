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
    std::ofstream ofstr("TEST-libopendavinci-DisposalTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-DisposalTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_DisposalTest_init = false;
#include "../../../../libopendavinci/testsuites/DisposalTestSuite.h"

static DisposalTest suite_DisposalTest;

static CxxTest::List Tests_DisposalTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DisposalTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/DisposalTestSuite.h", 40, "DisposalTest", suite_DisposalTest, Tests_DisposalTest );

static class TestDescription_suite_DisposalTest_testDisposal : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DisposalTest_testDisposal() : CxxTest::RealTestDescription( Tests_DisposalTest, suiteDescription_DisposalTest, 42, "testDisposal" ) {}
 void runTest() { suite_DisposalTest.testDisposal(); }
} testDescription_suite_DisposalTest_testDisposal;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
