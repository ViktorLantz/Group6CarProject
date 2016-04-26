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


#include "opendavinci/generated/odcore/data/dmcp/ModuleDescriptor.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
			
				ModuleDescriptor::ModuleDescriptor() :
				    SerializableData(), Visitable()
					, m_name("")
					, m_identifier("")
					, m_version("")
					, m_frequency(0)
				{
				}
			
				ModuleDescriptor::ModuleDescriptor(
					const std::string &val0, 
					const std::string &val1, 
					const std::string &val2, 
					const float &val3
				) :
				    SerializableData(), Visitable()
					, m_name(val0)
					, m_identifier(val1)
					, m_version(val2)
					, m_frequency(val3)
				{
				}
			
				ModuleDescriptor::ModuleDescriptor(const ModuleDescriptor &obj) :
				    SerializableData(), Visitable()
					, m_name(obj.m_name)
					, m_identifier(obj.m_identifier)
					, m_version(obj.m_version)
					, m_frequency(obj.m_frequency)
				{
				}
				
				ModuleDescriptor::~ModuleDescriptor() {
				}
			
				ModuleDescriptor& ModuleDescriptor::operator=(const ModuleDescriptor &obj) {
					m_name = obj.m_name;
					m_identifier = obj.m_identifier;
					m_version = obj.m_version;
					m_frequency = obj.m_frequency;
					return (*this);
				}
			
				int32_t ModuleDescriptor::ID() {
					return 113;
				}
			
				const string ModuleDescriptor::ShortName() {
					return "ModuleDescriptor";
				}
			
				const string ModuleDescriptor::LongName() {
					return "odcore.data.dmcp.ModuleDescriptor";
				}
			
				int32_t ModuleDescriptor::getID() const {
					return ModuleDescriptor::ID();
				}
			
				const string ModuleDescriptor::getShortName() const {
					return ModuleDescriptor::ShortName();
				}
			
				const string ModuleDescriptor::getLongName() const {
					return ModuleDescriptor::LongName();
				}
			
				std::string ModuleDescriptor::getName() const {
					return m_name;
				}
				
				void ModuleDescriptor::setName(const std::string &val) {
					m_name = val;
				}
				std::string ModuleDescriptor::getIdentifier() const {
					return m_identifier;
				}
				
				void ModuleDescriptor::setIdentifier(const std::string &val) {
					m_identifier = val;
				}
				std::string ModuleDescriptor::getVersion() const {
					return m_version;
				}
				
				void ModuleDescriptor::setVersion(const std::string &val) {
					m_version = val;
				}
				float ModuleDescriptor::getFrequency() const {
					return m_frequency;
				}
				
				void ModuleDescriptor::setFrequency(const float &val) {
					m_frequency = val;
				}
			
				void ModuleDescriptor::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					v.visit(CRC32 < CharList<'n', CharList<'a', CharList<'m', CharList<'e', NullType> > > >  >::RESULT, 1, "ModuleDescriptor.name", "name", m_name);
					v.visit(CRC32 < CharList<'i', CharList<'d', CharList<'e', CharList<'n', CharList<'t', CharList<'i', CharList<'f', CharList<'i', CharList<'e', CharList<'r', NullType> > > > > > > > > >  >::RESULT, 2, "ModuleDescriptor.identifier", "identifier", m_identifier);
					v.visit(CRC32 < CharList<'v', CharList<'e', CharList<'r', CharList<'s', CharList<'i', CharList<'o', CharList<'n', NullType> > > > > > >  >::RESULT, 3, "ModuleDescriptor.version", "version", m_version);
					v.visit(CRC32 < CharList<'f', CharList<'r', CharList<'e', CharList<'q', CharList<'u', CharList<'e', CharList<'n', CharList<'c', CharList<'y', NullType> > > > > > > > >  >::RESULT, 4, "ModuleDescriptor.frequency", "frequency", m_frequency);
					v.endVisit();
				}
			
				const string ModuleDescriptor::toString() const {
					stringstream s;
			
			
					s << "Name: " << getName() << " ";
					s << "Identifier: " << getIdentifier() << " ";
					s << "Version: " << getVersion() << " ";
					s << "Frequency: " << getFrequency() << " ";
			
					return s.str();
				}
			
				ostream& ModuleDescriptor::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					s->write(1,
							m_name);
					s->write(2,
							m_identifier);
					s->write(3,
							m_version);
					s->write(4,
							m_frequency);
					return out;
				}
			
				istream& ModuleDescriptor::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					d->read(1,
							m_name);
					d->read(2,
							m_identifier);
					d->read(3,
							m_version);
					d->read(4,
							m_frequency);
					return in;
				}
		} // dmcp
	} // data
} // odcore
