/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <fstream>
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XUnitPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    std::ofstream ofstr("TEST-libautomotivedata-from_opendlv_proxy_reverefh16_SteeringTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libautomotivedata-from_opendlv_proxy_reverefh16_SteeringTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_init = false;
#include "../../../../libautomotivedata/testsuites/from_opendlv_proxy_reverefh16_SteeringTestSuite.h"

static from_opendlv_proxy_reverefh16_Steering_TestSuite suite_from_opendlv_proxy_reverefh16_Steering_TestSuite;

static CxxTest::List Tests_from_opendlv_proxy_reverefh16_Steering_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_from_opendlv_proxy_reverefh16_Steering_TestSuite( "/home/viktor/OpenDaVINCI/libautomotivedata/testsuites/from_opendlv_proxy_reverefh16_SteeringTestSuite.h", 25, "from_opendlv_proxy_reverefh16_Steering_TestSuite", suite_from_opendlv_proxy_reverefh16_Steering_TestSuite, Tests_from_opendlv_proxy_reverefh16_Steering_TestSuite );

static class TestDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_from_opendlv_proxy_reverefh16_Steering_TestSuite, suiteDescription_from_opendlv_proxy_reverefh16_Steering_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_from_opendlv_proxy_reverefh16_Steering_TestSuite.testCreateObject(); }
} testDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateObject;

static class TestDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_from_opendlv_proxy_reverefh16_Steering_TestSuite, suiteDescription_from_opendlv_proxy_reverefh16_Steering_TestSuite, 42, "testCreateAndCopyObject" ) {}
 void runTest() { suite_from_opendlv_proxy_reverefh16_Steering_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_from_opendlv_proxy_reverefh16_Steering_TestSuite, suiteDescription_from_opendlv_proxy_reverefh16_Steering_TestSuite, 69, "testCreateAndAssignObject" ) {}
 void runTest() { suite_from_opendlv_proxy_reverefh16_Steering_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_from_opendlv_proxy_reverefh16_Steering_TestSuite, suiteDescription_from_opendlv_proxy_reverefh16_Steering_TestSuite, 96, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_from_opendlv_proxy_reverefh16_Steering_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_from_opendlv_proxy_reverefh16_Steering_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
