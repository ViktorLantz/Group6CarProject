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
    std::ofstream ofstr("TEST-libopendlv-SceneGraphTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendlv-SceneGraphTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SceneGraphTest_init = false;
#include "../../../../libopendlv/testsuites/SceneGraphTestSuite.h"

static SceneGraphTest suite_SceneGraphTest;

static CxxTest::List Tests_SceneGraphTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SceneGraphTest( "/home/viktor/OpenDaVINCI/libopendlv/testsuites/SceneGraphTestSuite.h", 49, "SceneGraphTest", suite_SceneGraphTest, Tests_SceneGraphTest );

static class TestDescription_suite_SceneGraphTest_testSceneGraph1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SceneGraphTest_testSceneGraph1() : CxxTest::RealTestDescription( Tests_SceneGraphTest, suiteDescription_SceneGraphTest, 51, "testSceneGraph1" ) {}
 void runTest() { suite_SceneGraphTest.testSceneGraph1(); }
} testDescription_suite_SceneGraphTest_testSceneGraph1;

static class TestDescription_suite_SceneGraphTest_testSceneGraph2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SceneGraphTest_testSceneGraph2() : CxxTest::RealTestDescription( Tests_SceneGraphTest, suiteDescription_SceneGraphTest, 57, "testSceneGraph2" ) {}
 void runTest() { suite_SceneGraphTest.testSceneGraph2(); }
} testDescription_suite_SceneGraphTest_testSceneGraph2;

static class TestDescription_suite_SceneGraphTest_testSceneGraph3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SceneGraphTest_testSceneGraph3() : CxxTest::RealTestDescription( Tests_SceneGraphTest, suiteDescription_SceneGraphTest, 66, "testSceneGraph3" ) {}
 void runTest() { suite_SceneGraphTest.testSceneGraph3(); }
} testDescription_suite_SceneGraphTest_testSceneGraph3;

static class TestDescription_suite_SceneGraphTest_testSceneGraph4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SceneGraphTest_testSceneGraph4() : CxxTest::RealTestDescription( Tests_SceneGraphTest, suiteDescription_SceneGraphTest, 82, "testSceneGraph4" ) {}
 void runTest() { suite_SceneGraphTest.testSceneGraph4(); }
} testDescription_suite_SceneGraphTest_testSceneGraph4;

static class TestDescription_suite_SceneGraphTest_testSceneGraph5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SceneGraphTest_testSceneGraph5() : CxxTest::RealTestDescription( Tests_SceneGraphTest, suiteDescription_SceneGraphTest, 103, "testSceneGraph5" ) {}
 void runTest() { suite_SceneGraphTest.testSceneGraph5(); }
} testDescription_suite_SceneGraphTest_testSceneGraph5;

static class TestDescription_suite_SceneGraphTest_testSceneGraph6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SceneGraphTest_testSceneGraph6() : CxxTest::RealTestDescription( Tests_SceneGraphTest, suiteDescription_SceneGraphTest, 134, "testSceneGraph6" ) {}
 void runTest() { suite_SceneGraphTest.testSceneGraph6(); }
} testDescription_suite_SceneGraphTest_testSceneGraph6;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
