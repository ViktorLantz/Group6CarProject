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
    std::ofstream ofstr("TEST-odsupercomponent-SupercomponentClientModuleTest3TestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "odsupercomponent-SupercomponentClientModuleTest3TestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SupercomponentClientModuleTest_init = false;
#include "../../../../odsupercomponent/testsuites/SupercomponentClientModuleTest3TestSuite.h"

static SupercomponentClientModuleTest suite_SupercomponentClientModuleTest;

static CxxTest::List Tests_SupercomponentClientModuleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SupercomponentClientModuleTest( "/home/viktor/OpenDaVINCI/odsupercomponent/testsuites/SupercomponentClientModuleTest3TestSuite.h", 128, "SupercomponentClientModuleTest", suite_SupercomponentClientModuleTest, Tests_SupercomponentClientModuleTest );

static class TestDescription_suite_SupercomponentClientModuleTest_testServerSpecificDefaultConfigurationFile : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SupercomponentClientModuleTest_testServerSpecificDefaultConfigurationFile() : CxxTest::RealTestDescription( Tests_SupercomponentClientModuleTest, suiteDescription_SupercomponentClientModuleTest, 147, "testServerSpecificDefaultConfigurationFile" ) {}
 void runTest() { suite_SupercomponentClientModuleTest.testServerSpecificDefaultConfigurationFile(); }
} testDescription_suite_SupercomponentClientModuleTest_testServerSpecificDefaultConfigurationFile;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
