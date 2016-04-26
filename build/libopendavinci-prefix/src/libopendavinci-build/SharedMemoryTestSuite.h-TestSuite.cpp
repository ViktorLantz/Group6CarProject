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
    std::ofstream ofstr("TEST-libopendavinci-SharedMemoryTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-SharedMemoryTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SharedMemoryTest_init = false;
#include "../../../../libopendavinci/testsuites/SharedMemoryTestSuite.h"

static SharedMemoryTest suite_SharedMemoryTest;

static CxxTest::List Tests_SharedMemoryTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SharedMemoryTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/SharedMemoryTestSuite.h", 38, "SharedMemoryTest", suite_SharedMemoryTest, Tests_SharedMemoryTest );

static class TestDescription_suite_SharedMemoryTest_testSharedData1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedMemoryTest_testSharedData1() : CxxTest::RealTestDescription( Tests_SharedMemoryTest, suiteDescription_SharedMemoryTest, 40, "testSharedData1" ) {}
 void runTest() { suite_SharedMemoryTest.testSharedData1(); }
} testDescription_suite_SharedMemoryTest_testSharedData1;

static class TestDescription_suite_SharedMemoryTest_testSharedData2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedMemoryTest_testSharedData2() : CxxTest::RealTestDescription( Tests_SharedMemoryTest, suiteDescription_SharedMemoryTest, 52, "testSharedData2" ) {}
 void runTest() { suite_SharedMemoryTest.testSharedData2(); }
} testDescription_suite_SharedMemoryTest_testSharedData2;

static class TestDescription_suite_SharedMemoryTest_testSharedData3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedMemoryTest_testSharedData3() : CxxTest::RealTestDescription( Tests_SharedMemoryTest, suiteDescription_SharedMemoryTest, 64, "testSharedData3" ) {}
 void runTest() { suite_SharedMemoryTest.testSharedData3(); }
} testDescription_suite_SharedMemoryTest_testSharedData3;

static class TestDescription_suite_SharedMemoryTest_testSharedMemory : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedMemoryTest_testSharedMemory() : CxxTest::RealTestDescription( Tests_SharedMemoryTest, suiteDescription_SharedMemoryTest, 78, "testSharedMemory" ) {}
 void runTest() { suite_SharedMemoryTest.testSharedMemory(); }
} testDescription_suite_SharedMemoryTest_testSharedMemory;

static class TestDescription_suite_SharedMemoryTest_testSharedMemoryWithScopedLock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedMemoryTest_testSharedMemoryWithScopedLock() : CxxTest::RealTestDescription( Tests_SharedMemoryTest, suiteDescription_SharedMemoryTest, 103, "testSharedMemoryWithScopedLock" ) {}
 void runTest() { suite_SharedMemoryTest.testSharedMemoryWithScopedLock(); }
} testDescription_suite_SharedMemoryTest_testSharedMemoryWithScopedLock;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
