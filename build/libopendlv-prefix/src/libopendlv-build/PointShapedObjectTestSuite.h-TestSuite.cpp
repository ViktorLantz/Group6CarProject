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
    std::ofstream ofstr("TEST-libopendlv-PointShapedObjectTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendlv-PointShapedObjectTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_PointShapedObjectTest_init = false;
#include "../../../../libopendlv/testsuites/PointShapedObjectTestSuite.h"

static PointShapedObjectTest suite_PointShapedObjectTest;

static CxxTest::List Tests_PointShapedObjectTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PointShapedObjectTest( "/home/viktor/OpenDaVINCI/libopendlv/testsuites/PointShapedObjectTestSuite.h", 35, "PointShapedObjectTest", suite_PointShapedObjectTest, Tests_PointShapedObjectTest );

static class TestDescription_suite_PointShapedObjectTest_testPointShapedObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PointShapedObjectTest_testPointShapedObject() : CxxTest::RealTestDescription( Tests_PointShapedObjectTest, suiteDescription_PointShapedObjectTest, 37, "testPointShapedObject" ) {}
 void runTest() { suite_PointShapedObjectTest.testPointShapedObject(); }
} testDescription_suite_PointShapedObjectTest_testPointShapedObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
