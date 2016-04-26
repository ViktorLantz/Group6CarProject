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
    std::ofstream ofstr("TEST-libopendavinci-MutexTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-MutexTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MutexTest_init = false;
#include "../../../../libopendavinci/testsuites/MutexTestSuite.h"

static MutexTest suite_MutexTest;

static CxxTest::List Tests_MutexTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MutexTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/MutexTestSuite.h", 46, "MutexTest", suite_MutexTest, Tests_MutexTest );

static class TestDescription_suite_MutexTest_testTryLock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MutexTest_testTryLock() : CxxTest::RealTestDescription( Tests_MutexTest, suiteDescription_MutexTest, 48, "testTryLock" ) {}
 void runTest() { suite_MutexTest.testTryLock(); }
} testDescription_suite_MutexTest_testTryLock;

static class TestDescription_suite_MutexTest_testLockAndUnlock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MutexTest_testLockAndUnlock() : CxxTest::RealTestDescription( Tests_MutexTest, suiteDescription_MutexTest, 54, "testLockAndUnlock" ) {}
 void runTest() { suite_MutexTest.testLockAndUnlock(); }
} testDescription_suite_MutexTest_testLockAndUnlock;

static class TestDescription_suite_MutexTest_testScopedLock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MutexTest_testScopedLock() : CxxTest::RealTestDescription( Tests_MutexTest, suiteDescription_MutexTest, 64, "testScopedLock" ) {}
 void runTest() { suite_MutexTest.testScopedLock(); }
} testDescription_suite_MutexTest_testScopedLock;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
