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
    std::ofstream ofstr("TEST-libautomotivedata-from_opendlv_proxy_reverefh16_SteeringRequestTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libautomotivedata-from_opendlv_proxy_reverefh16_SteeringRequestTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_init = false;
#include "../../../../libautomotivedata/testsuites/from_opendlv_proxy_reverefh16_SteeringRequestTestSuite.h"

static from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite;

static CxxTest::List Tests_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite( "/home/viktor/OpenDaVINCI/libautomotivedata/testsuites/from_opendlv_proxy_reverefh16_SteeringRequestTestSuite.h", 25, "from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite", suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite, Tests_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite );

static class TestDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateObject() : CxxTest::RealTestDescription( Tests_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite, suiteDescription_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite, 28, "testCreateObject" ) {}
 void runTest() { suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite.testCreateObject(); }
} testDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateObject;

static class TestDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateAndCopyObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateAndCopyObject() : CxxTest::RealTestDescription( Tests_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite, suiteDescription_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite, 45, "testCreateAndCopyObject" ) {}
 void runTest() { suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite.testCreateAndCopyObject(); }
} testDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateAndCopyObject;

static class TestDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateAndAssignObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateAndAssignObject() : CxxTest::RealTestDescription( Tests_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite, suiteDescription_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite, 78, "testCreateAndAssignObject" ) {}
 void runTest() { suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite.testCreateAndAssignObject(); }
} testDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateAndAssignObject;

static class TestDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateAndSerializeObject : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateAndSerializeObject() : CxxTest::RealTestDescription( Tests_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite, suiteDescription_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite, 111, "testCreateAndSerializeObject" ) {}
 void runTest() { suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite.testCreateAndSerializeObject(); }
} testDescription_suite_from_opendlv_proxy_reverefh16_SteeringRequest_TestSuite_testCreateAndSerializeObject;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
