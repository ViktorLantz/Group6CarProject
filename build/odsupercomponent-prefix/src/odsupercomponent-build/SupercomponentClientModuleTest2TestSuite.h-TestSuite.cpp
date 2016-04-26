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
    std::ofstream ofstr("TEST-odsupercomponent-SupercomponentClientModuleTest2TestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odsupercomponent-SupercomponentClientModuleTest2TestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SupercomponentClientModuleTest_init = false;
#include "../../../../odsupercomponent/testsuites/SupercomponentClientModuleTest2TestSuite.h"

static SupercomponentClientModuleTest suite_SupercomponentClientModuleTest;

static CxxTest::List Tests_SupercomponentClientModuleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SupercomponentClientModuleTest( "/home/viktor/OpenDaVINCI/odsupercomponent/testsuites/SupercomponentClientModuleTest2TestSuite.h", 128, "SupercomponentClientModuleTest", suite_SupercomponentClientModuleTest, Tests_SupercomponentClientModuleTest );

static class TestDescription_suite_SupercomponentClientModuleTest_testServerNotExistingDefaultConfigurationFile : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SupercomponentClientModuleTest_testServerNotExistingDefaultConfigurationFile() : CxxTest::RealTestDescription( Tests_SupercomponentClientModuleTest, suiteDescription_SupercomponentClientModuleTest, 147, "testServerNotExistingDefaultConfigurationFile" ) {}
 void runTest() { suite_SupercomponentClientModuleTest.testServerNotExistingDefaultConfigurationFile(); }
} testDescription_suite_SupercomponentClientModuleTest_testServerNotExistingDefaultConfigurationFile;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
