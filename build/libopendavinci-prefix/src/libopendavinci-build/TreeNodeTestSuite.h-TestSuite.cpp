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
    std::ofstream ofstr("TEST-libopendavinci-TreeNodeTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-TreeNodeTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TreeNodeTest_init = false;
#include "../../../../libopendavinci/testsuites/TreeNodeTestSuite.h"

static TreeNodeTest suite_TreeNodeTest;

static CxxTest::List Tests_TreeNodeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TreeNodeTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/TreeNodeTestSuite.h", 33, "TreeNodeTest", suite_TreeNodeTest, Tests_TreeNodeTest );

static class TestDescription_suite_TreeNodeTest_testSimpleTree : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TreeNodeTest_testSimpleTree() : CxxTest::RealTestDescription( Tests_TreeNodeTest, suiteDescription_TreeNodeTest, 52, "testSimpleTree" ) {}
 void runTest() { suite_TreeNodeTest.testSimpleTree(); }
} testDescription_suite_TreeNodeTest_testSimpleTree;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
