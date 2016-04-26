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
    std::ofstream ofstr("TEST-cxxtest.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SharedMemoryTest_init = false;
#include "../../../../../tutorials/testsuite/ipcsharedmemorytestsuite.h"

static SharedMemoryTest suite_SharedMemoryTest;

static CxxTest::List Tests_SharedMemoryTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SharedMemoryTest( "/home/viktor/OpenDaVINCI/tutorials/testsuite/ipcsharedmemorytestsuite.h", 31, "SharedMemoryTest", suite_SharedMemoryTest, Tests_SharedMemoryTest );

static class TestDescription_suite_SharedMemoryTest_testSharedMemory : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedMemoryTest_testSharedMemory() : CxxTest::RealTestDescription( Tests_SharedMemoryTest, suiteDescription_SharedMemoryTest, 33, "testSharedMemory" ) {}
 void runTest() { suite_SharedMemoryTest.testSharedMemory(); }
} testDescription_suite_SharedMemoryTest_testSharedMemory;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
