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
    std::ofstream ofstr("TEST-libopendavinci-SharedPointerTestSuite.h.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "libopendavinci-SharedPointerTestSuite.h";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SharedPointerTest_init = false;
#include "../../../../libopendavinci/testsuites/SharedPointerTestSuite.h"

static SharedPointerTest suite_SharedPointerTest;

static CxxTest::List Tests_SharedPointerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SharedPointerTest( "/home/viktor/OpenDaVINCI/libopendavinci/testsuites/SharedPointerTestSuite.h", 61, "SharedPointerTest", suite_SharedPointerTest, Tests_SharedPointerTest );

static class TestDescription_suite_SharedPointerTest_testCreate_shared_ptr : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedPointerTest_testCreate_shared_ptr() : CxxTest::RealTestDescription( Tests_SharedPointerTest, suiteDescription_SharedPointerTest, 63, "testCreate_shared_ptr" ) {}
 void runTest() { suite_SharedPointerTest.testCreate_shared_ptr(); }
} testDescription_suite_SharedPointerTest_testCreate_shared_ptr;

static class TestDescription_suite_SharedPointerTest_testCreateDestroy_shared_ptr : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedPointerTest_testCreateDestroy_shared_ptr() : CxxTest::RealTestDescription( Tests_SharedPointerTest, suiteDescription_SharedPointerTest, 76, "testCreateDestroy_shared_ptr" ) {}
 void runTest() { suite_SharedPointerTest.testCreateDestroy_shared_ptr(); }
} testDescription_suite_SharedPointerTest_testCreateDestroy_shared_ptr;

static class TestDescription_suite_SharedPointerTest_testCreateDestroy_shared_ptr_UsingCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedPointerTest_testCreateDestroy_shared_ptr_UsingCopyConstructor() : CxxTest::RealTestDescription( Tests_SharedPointerTest, suiteDescription_SharedPointerTest, 95, "testCreateDestroy_shared_ptr_UsingCopyConstructor" ) {}
 void runTest() { suite_SharedPointerTest.testCreateDestroy_shared_ptr_UsingCopyConstructor(); }
} testDescription_suite_SharedPointerTest_testCreateDestroy_shared_ptr_UsingCopyConstructor;

static class TestDescription_suite_SharedPointerTest_testCreateDestroy_shared_ptr_UsingAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedPointerTest_testCreateDestroy_shared_ptr_UsingAssignmentOperator() : CxxTest::RealTestDescription( Tests_SharedPointerTest, suiteDescription_SharedPointerTest, 117, "testCreateDestroy_shared_ptr_UsingAssignmentOperator" ) {}
 void runTest() { suite_SharedPointerTest.testCreateDestroy_shared_ptr_UsingAssignmentOperator(); }
} testDescription_suite_SharedPointerTest_testCreateDestroy_shared_ptr_UsingAssignmentOperator;

static class TestDescription_suite_SharedPointerTest_testCreateAndKeep_shared_ptr_UsingCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedPointerTest_testCreateAndKeep_shared_ptr_UsingCopyConstructor() : CxxTest::RealTestDescription( Tests_SharedPointerTest, suiteDescription_SharedPointerTest, 139, "testCreateAndKeep_shared_ptr_UsingCopyConstructor" ) {}
 void runTest() { suite_SharedPointerTest.testCreateAndKeep_shared_ptr_UsingCopyConstructor(); }
} testDescription_suite_SharedPointerTest_testCreateAndKeep_shared_ptr_UsingCopyConstructor;

static class TestDescription_suite_SharedPointerTest_testCreateAndKeep_shared_ptr_UsingAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedPointerTest_testCreateAndKeep_shared_ptr_UsingAssignmentOperator() : CxxTest::RealTestDescription( Tests_SharedPointerTest, suiteDescription_SharedPointerTest, 164, "testCreateAndKeep_shared_ptr_UsingAssignmentOperator" ) {}
 void runTest() { suite_SharedPointerTest.testCreateAndKeep_shared_ptr_UsingAssignmentOperator(); }
} testDescription_suite_SharedPointerTest_testCreateAndKeep_shared_ptr_UsingAssignmentOperator;

static class TestDescription_suite_SharedPointerTest_test_shared_ptr_InsideSTL : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedPointerTest_test_shared_ptr_InsideSTL() : CxxTest::RealTestDescription( Tests_SharedPointerTest, suiteDescription_SharedPointerTest, 190, "test_shared_ptr_InsideSTL" ) {}
 void runTest() { suite_SharedPointerTest.test_shared_ptr_InsideSTL(); }
} testDescription_suite_SharedPointerTest_test_shared_ptr_InsideSTL;

static class TestDescription_suite_SharedPointerTest_test_shared_ptr_InsideSTLAndCopy : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedPointerTest_test_shared_ptr_InsideSTLAndCopy() : CxxTest::RealTestDescription( Tests_SharedPointerTest, suiteDescription_SharedPointerTest, 223, "test_shared_ptr_InsideSTLAndCopy" ) {}
 void runTest() { suite_SharedPointerTest.test_shared_ptr_InsideSTLAndCopy(); }
} testDescription_suite_SharedPointerTest_test_shared_ptr_InsideSTLAndCopy;

static class TestDescription_suite_SharedPointerTest_testCreate_shared_ptr_FromDerivedClass : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SharedPointerTest_testCreate_shared_ptr_FromDerivedClass() : CxxTest::RealTestDescription( Tests_SharedPointerTest, suiteDescription_SharedPointerTest, 278, "testCreate_shared_ptr_FromDerivedClass" ) {}
 void runTest() { suite_SharedPointerTest.testCreate_shared_ptr_FromDerivedClass(); }
} testDescription_suite_SharedPointerTest_testCreate_shared_ptr_FromDerivedClass;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
