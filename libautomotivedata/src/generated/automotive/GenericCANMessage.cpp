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


#include "automotivedata/generated/automotive/GenericCANMessage.h"

namespace automotive {
		using namespace std;
		using namespace odcore::base;
	
	
		GenericCANMessage::GenericCANMessage() :
		    SerializableData(), Visitable()
			, m_driverTimeStamp()
			, m_identifier(0)
			, m_length(0)
			, m_data(0)
		{
		}
	
		GenericCANMessage::GenericCANMessage(
			const odcore::data::TimeStamp &val0, 
			const uint64_t &val1, 
			const uint8_t &val2, 
			const uint64_t &val3
		) :
		    SerializableData(), Visitable()
			, m_driverTimeStamp(val0)
			, m_identifier(val1)
			, m_length(val2)
			, m_data(val3)
		{
		}
	
		GenericCANMessage::GenericCANMessage(const GenericCANMessage &obj) :
		    SerializableData(), Visitable()
			, m_driverTimeStamp(obj.m_driverTimeStamp)
			, m_identifier(obj.m_identifier)
			, m_length(obj.m_length)
			, m_data(obj.m_data)
		{
		}
		
		GenericCANMessage::~GenericCANMessage() {
		}
	
		GenericCANMessage& GenericCANMessage::operator=(const GenericCANMessage &obj) {
			m_driverTimeStamp = obj.m_driverTimeStamp;
			m_identifier = obj.m_identifier;
			m_length = obj.m_length;
			m_data = obj.m_data;
			return (*this);
		}
	
		int32_t GenericCANMessage::ID() {
			return 71;
		}
	
		const string GenericCANMessage::ShortName() {
			return "GenericCANMessage";
		}
	
		const string GenericCANMessage::LongName() {
			return "automotive.GenericCANMessage";
		}
	
		int32_t GenericCANMessage::getID() const {
			return GenericCANMessage::ID();
		}
	
		const string GenericCANMessage::getShortName() const {
			return GenericCANMessage::ShortName();
		}
	
		const string GenericCANMessage::getLongName() const {
			return GenericCANMessage::LongName();
		}
	
		odcore::data::TimeStamp GenericCANMessage::getDriverTimeStamp() const {
			return m_driverTimeStamp;
		}
		
		void GenericCANMessage::setDriverTimeStamp(const odcore::data::TimeStamp &val) {
			m_driverTimeStamp = val;
		}
		uint64_t GenericCANMessage::getIdentifier() const {
			return m_identifier;
		}
		
		void GenericCANMessage::setIdentifier(const uint64_t &val) {
			m_identifier = val;
		}
		uint8_t GenericCANMessage::getLength() const {
			return m_length;
		}
		
		void GenericCANMessage::setLength(const uint8_t &val) {
			m_length = val;
		}
		uint64_t GenericCANMessage::getData() const {
			return m_data;
		}
		
		void GenericCANMessage::setData(const uint64_t &val) {
			m_data = val;
		}
	
		void GenericCANMessage::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.visit(CRC32 < CharList<'d', CharList<'r', CharList<'i', CharList<'v', CharList<'e', CharList<'r', CharList<'T', CharList<'i', CharList<'m', CharList<'e', CharList<'S', CharList<'t', CharList<'a', CharList<'m', CharList<'p', NullType> > > > > > > > > > > > > > >  >::RESULT, 1, "GenericCANMessage.driverTimeStamp", "driverTimeStamp", m_driverTimeStamp);
			v.visit(CRC32 < CharList<'i', CharList<'d', CharList<'e', CharList<'n', CharList<'t', CharList<'i', CharList<'f', CharList<'i', CharList<'e', CharList<'r', NullType> > > > > > > > > >  >::RESULT, 2, "GenericCANMessage.identifier", "identifier", m_identifier);
			v.visit(CRC32 < CharList<'l', CharList<'e', CharList<'n', CharList<'g', CharList<'t', CharList<'h', NullType> > > > > >  >::RESULT, 3, "GenericCANMessage.length", "length", m_length);
			v.visit(CRC32 < CharList<'d', CharList<'a', CharList<'t', CharList<'a', NullType> > > >  >::RESULT, 4, "GenericCANMessage.data", "data", m_data);
			v.endVisit();
		}
	
		const string GenericCANMessage::toString() const {
			stringstream s;
	
	
			s << "DriverTimeStamp: " << getDriverTimeStamp().toString() << " ";
			s << "Identifier: " << getIdentifier() << " ";
			s << "Length: " << getLength() << " ";
			s << "Data: " << getData() << " ";
	
			return s.str();
		}
	
		ostream& GenericCANMessage::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);
	
			s->write(1,
					m_driverTimeStamp);
			s->write(2,
					m_identifier);
			s->write(3,
					m_length);
			s->write(4,
					m_data);
			return out;
		}
	
		istream& GenericCANMessage::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
	
			d->read(1,
					m_driverTimeStamp);
			d->read(2,
					m_identifier);
			d->read(3,
					m_length);
			d->read(4,
					m_data);
			return in;
		}
} // automotive
