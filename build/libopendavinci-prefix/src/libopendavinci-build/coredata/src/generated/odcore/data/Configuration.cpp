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


#include "opendavinci/generated/odcore/data/Configuration.h"

namespace odcore {
	namespace data {
			using namespace std;
			using namespace odcore::base;
		
		
			Configuration::Configuration() :
			    SerializableData(), Visitable()
				, m_keyValueConfiguration()
			{
			}
		
			Configuration::Configuration(
				const odcore::base::KeyValueConfiguration &val0
			) :
			    SerializableData(), Visitable()
				, m_keyValueConfiguration(val0)
			{
			}
		
			Configuration::Configuration(const Configuration &obj) :
			    SerializableData(), Visitable()
				, m_keyValueConfiguration(obj.m_keyValueConfiguration)
			{
			}
			
			Configuration::~Configuration() {
			}
		
			Configuration& Configuration::operator=(const Configuration &obj) {
				m_keyValueConfiguration = obj.m_keyValueConfiguration;
				return (*this);
			}
		
			int32_t Configuration::ID() {
				return 2;
			}
		
			const string Configuration::ShortName() {
				return "Configuration";
			}
		
			const string Configuration::LongName() {
				return "odcore.data.Configuration";
			}
		
			int32_t Configuration::getID() const {
				return Configuration::ID();
			}
		
			const string Configuration::getShortName() const {
				return Configuration::ShortName();
			}
		
			const string Configuration::getLongName() const {
				return Configuration::LongName();
			}
		
			odcore::base::KeyValueConfiguration Configuration::getKeyValueConfiguration() const {
				return m_keyValueConfiguration;
			}
			
			void Configuration::setKeyValueConfiguration(const odcore::base::KeyValueConfiguration &val) {
				m_keyValueConfiguration = val;
			}
		
			void Configuration::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				v.visit(CRC32 < CharList<'k', CharList<'e', CharList<'y', CharList<'V', CharList<'a', CharList<'l', CharList<'u', CharList<'e', CharList<'C', CharList<'o', CharList<'n', CharList<'f', CharList<'i', CharList<'g', CharList<'u', CharList<'r', CharList<'a', CharList<'t', CharList<'i', CharList<'o', CharList<'n', NullType> > > > > > > > > > > > > > > > > > > > >  >::RESULT, 1, "Configuration.keyValueConfiguration", "keyValueConfiguration", m_keyValueConfiguration);
				v.endVisit();
			}
		
			const string Configuration::toString() const {
				stringstream s;
		
		
				s << "KeyValueConfiguration: " << getKeyValueConfiguration().toString() << " ";
		
				return s.str();
			}
		
			ostream& Configuration::operator<<(ostream &out) const {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				s->write(1,
						m_keyValueConfiguration);
				return out;
			}
		
			istream& Configuration::operator>>(istream &in) {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				d->read(1,
						m_keyValueConfiguration);
				return in;
			}
	} // data
} // odcore
