/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#include <memory>

#include "opendavinci/odcore/base/Hash.h"
#include "opendavinci/odcore/base/Deserializer.h"
#include "opendavinci/odcore/base/SerializationFactory.h"
#include "opendavinci/odcore/base/Serializer.h"


#include "opendavinci/generated/odcore/data/dmcp/TestConstants.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
				const std::string TestConstants::DMCPCONFIG_TEST_GROUP = "225.0.0.250";
				const uint32_t TestConstants::DMCPCONFIG_TEST_SERVERPORT = 25000;
				const uint32_t TestConstants::DMCPCONFIG_TEST_CLIENTPORT = 25100;
			
				TestConstants::TestConstants() :
				    SerializableData(), Visitable()
				{
				}
			
			
				TestConstants::TestConstants(const TestConstants &obj) :
				    SerializableData(), Visitable()
				{
					(void)obj; // Avoid unused parameter warning.
				}
				
				TestConstants::~TestConstants() {
				}
			
				TestConstants& TestConstants::operator=(const TestConstants &obj) {
					(void)obj; // Avoid unused parameter warning.
					return (*this);
				}
			
				int32_t TestConstants::ID() {
					return 111;
				}
			
				const string TestConstants::ShortName() {
					return "TestConstants";
				}
			
				const string TestConstants::LongName() {
					return "odcore.data.dmcp.TestConstants";
				}
			
				int32_t TestConstants::getID() const {
					return TestConstants::ID();
				}
			
				const string TestConstants::getShortName() const {
					return TestConstants::ShortName();
				}
			
				const string TestConstants::getLongName() const {
					return TestConstants::LongName();
				}
			
			
				void TestConstants::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					v.endVisit();
				}
			
				const string TestConstants::toString() const {
					stringstream s;
			
			
			
					return s.str();
				}
			
				ostream& TestConstants::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);(void)s; // Avoid unused variable warning.
			
					return out;
				}
			
				istream& TestConstants::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);(void)d; // Avoid unused variable warning.
			
					return in;
				}
		} // dmcp
	} // data
} // odcore
