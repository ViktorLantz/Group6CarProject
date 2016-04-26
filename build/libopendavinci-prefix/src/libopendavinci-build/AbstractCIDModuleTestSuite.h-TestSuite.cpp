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
    std::ofstream ofstr("TEST-libopendavinci-AbstractCIDModuleTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-AbstractCIDModuleTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_AbstractCIDModuleTest_init = false;
#include "../../../../libopendavinci/testsuites/AbstractCIDModuleTestSuite.h"

static AbstractCIDModuleTest suite_AbstractCIDModuleTest;

static CxxTest::List Tests_AbstractCIDModuleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AbstractCIDModuleTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/AbstractCIDModuleTestSuite.h", 101, "AbstractCIDModuleTest", suite_AbstractCIDModuleTest, Tests_AbstractCIDModuleTest );

static class TestDescription_suite_AbstractCIDModuleTest_testAbstractCIDModule : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AbstractCIDModuleTest_testAbstractCIDModule() : CxxTest::RealTestDescription( Tests_AbstractCIDModuleTest, suiteDescription_AbstractCIDModuleTest, 103, "testAbstractCIDModule" ) {}
 void runTest() { suite_AbstractCIDModuleTest.testAbstractCIDModule(); }
} testDescription_suite_AbstractCIDModuleTest_testAbstractCIDModule;

static class TestDescription_suite_AbstractCIDModuleTest_testAbstractCIDModuleCID : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AbstractCIDModuleTest_testAbstractCIDModuleCID() : CxxTest::RealTestDescription( Tests_AbstractCIDModuleTest, suiteDescription_AbstractCIDModuleTest, 129, "testAbstractCIDModuleCID" ) {}
 void runTest() { suite_AbstractCIDModuleTest.testAbstractCIDModuleCID(); }
} testDescription_suite_AbstractCIDModuleTest_testAbstractCIDModuleCID;

static class TestDescription_suite_AbstractCIDModuleTest_testAbstractCIDModuleWrongCID1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AbstractCIDModuleTest_testAbstractCIDModuleWrongCID1() : CxxTest::RealTestDescription( Tests_AbstractCIDModuleTest, suiteDescription_AbstractCIDModuleTest, 148, "testAbstractCIDModuleWrongCID1" ) {}
 void runTest() { suite_AbstractCIDModuleTest.testAbstractCIDModuleWrongCID1(); }
} testDescription_suite_AbstractCIDModuleTest_testAbstractCIDModuleWrongCID1;

static class TestDescription_suite_AbstractCIDModuleTest_testAbstractCIDModuleWrongCID2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AbstractCIDModuleTest_testAbstractCIDModuleWrongCID2() : CxxTest::RealTestDescription( Tests_AbstractCIDModuleTest, suiteDescription_AbstractCIDModuleTest, 174, "testAbstractCIDModuleWrongCID2" ) {}
 void runTest() { suite_AbstractCIDModuleTest.testAbstractCIDModuleWrongCID2(); }
} testDescription_suite_AbstractCIDModuleTest_testAbstractCIDModuleWrongCID2;

static class TestDescription_suite_AbstractCIDModuleTest_testKillAbstractCIDModule : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AbstractCIDModuleTest_testKillAbstractCIDModule() : CxxTest::RealTestDescription( Tests_AbstractCIDModuleTest, suiteDescription_AbstractCIDModuleTest, 199, "testKillAbstractCIDModule" ) {}
 void runTest() { suite_AbstractCIDModuleTest.testKillAbstractCIDModule(); }
} testDescription_suite_AbstractCIDModuleTest_testKillAbstractCIDModule;

static class TestDescription_suite_AbstractCIDModuleTest_testExceptionAbstractCIDModule : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AbstractCIDModuleTest_testExceptionAbstractCIDModule() : CxxTest::RealTestDescription( Tests_AbstractCIDModuleTest, suiteDescription_AbstractCIDModuleTest, 245, "testExceptionAbstractCIDModule" ) {}
 void runTest() { suite_AbstractCIDModuleTest.testExceptionAbstractCIDModule(); }
} testDescription_suite_AbstractCIDModuleTest_testExceptionAbstractCIDModule;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
