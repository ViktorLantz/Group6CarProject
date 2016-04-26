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
    std::ofstream ofstr("TEST-odsupercomponent-SupercomponentClientModuleTest4TestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odsupercomponent-SupercomponentClientModuleTest4TestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SupercomponentClientModuleTest_init = false;
#include "../../../../odsupercomponent/testsuites/SupercomponentClientModuleTest4TestSuite.h"

static SupercomponentClientModuleTest suite_SupercomponentClientModuleTest;

static CxxTest::List Tests_SupercomponentClientModuleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SupercomponentClientModuleTest( "/home/viktor/OpenDaVINCI/odsupercomponent/testsuites/SupercomponentClientModuleTest4TestSuite.h", 128, "SupercomponentClientModuleTest", suite_SupercomponentClientModuleTest, Tests_SupercomponentClientModuleTest );

static class TestDescription_suite_SupercomponentClientModuleTest_testServerNotExistingSpecificConfigurationFile : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SupercomponentClientModuleTest_testServerNotExistingSpecificConfigurationFile() : CxxTest::RealTestDescription( Tests_SupercomponentClientModuleTest, suiteDescription_SupercomponentClientModuleTest, 147, "testServerNotExistingSpecificConfigurationFile" ) {}
 void runTest() { suite_SupercomponentClientModuleTest.testServerNotExistingSpecificConfigurationFile(); }
} testDescription_suite_SupercomponentClientModuleTest_testServerNotExistingSpecificConfigurationFile;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
