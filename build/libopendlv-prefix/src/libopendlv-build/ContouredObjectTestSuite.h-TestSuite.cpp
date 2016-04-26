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
    std::ofstream ofstr("TEST-libopendlv-ContouredObjectTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendlv-ContouredObjectTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ContouredObjectTest_init = false;
#include "../../../../libopendlv/testsuites/ContouredObjectTestSuite.h"

static ContouredObjectTest suite_ContouredObjectTest;

static CxxTest::List Tests_ContouredObjectTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ContouredObjectTest( "/home/viktor/OpenDaVINCI/libopendlv/testsuites/ContouredObjectTestSuite.h", 36, "ContouredObjectTest", suite_ContouredObjectTest, Tests_ContouredObjectTest );

static class TestDescription_suite_ContouredObjectTest_testPointShapedObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ContouredObjectTest_testPointShapedObject() : CxxTest::RealTestDescription( Tests_ContouredObjectTest, suiteDescription_ContouredObjectTest, 38, "testPointShapedObject" ) {}
 void runTest() { suite_ContouredObjectTest.testPointShapedObject(); }
} testDescription_suite_ContouredObjectTest_testPointShapedObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
