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


#include "opendavinci/generated/odcore/data/buffer/MemorySegment.h"

namespace odcore {
	namespace data {
		namespace buffer {
				using namespace std;
				using namespace odcore::base;
			
			
				MemorySegment::MemorySegment() :
				    SerializableData(), Visitable()
					, m_header()
					, m_size(0)
					, m_consumedSize(0)
					, m_identifier(0)
				{
				}
			
				MemorySegment::MemorySegment(
					const odcore::data::Container &val0, 
					const uint32_t &val1, 
					const uint32_t &val2, 
					const uint16_t &val3
				) :
				    SerializableData(), Visitable()
					, m_header(val0)
					, m_size(val1)
					, m_consumedSize(val2)
					, m_identifier(val3)
				{
				}
			
				MemorySegment::MemorySegment(const MemorySegment &obj) :
				    SerializableData(), Visitable()
					, m_header(obj.m_header)
					, m_size(obj.m_size)
					, m_consumedSize(obj.m_consumedSize)
					, m_identifier(obj.m_identifier)
				{
				}
				
				MemorySegment::~MemorySegment() {
				}
			
				MemorySegment& MemorySegment::operator=(const MemorySegment &obj) {
					m_header = obj.m_header;
					m_size = obj.m_size;
					m_consumedSize = obj.m_consumedSize;
					m_identifier = obj.m_identifier;
					return (*this);
				}
			
				int32_t MemorySegment::ID() {
					return 29;
				}
			
				const string MemorySegment::ShortName() {
					return "MemorySegment";
				}
			
				const string MemorySegment::LongName() {
					return "odcore.data.buffer.MemorySegment";
				}
			
				int32_t MemorySegment::getID() const {
					return MemorySegment::ID();
				}
			
				const string MemorySegment::getShortName() const {
					return MemorySegment::ShortName();
				}
			
				const string MemorySegment::getLongName() const {
					return MemorySegment::LongName();
				}
			
				odcore::data::Container MemorySegment::getHeader() const {
					return m_header;
				}
				
				void MemorySegment::setHeader(const odcore::data::Container &val) {
					m_header = val;
				}
				uint32_t MemorySegment::getSize() const {
					return m_size;
				}
				
				void MemorySegment::setSize(const uint32_t &val) {
					m_size = val;
				}
				uint32_t MemorySegment::getConsumedSize() const {
					return m_consumedSize;
				}
				
				void MemorySegment::setConsumedSize(const uint32_t &val) {
					m_consumedSize = val;
				}
				uint16_t MemorySegment::getIdentifier() const {
					return m_identifier;
				}
				
				void MemorySegment::setIdentifier(const uint16_t &val) {
					m_identifier = val;
				}
			
				void MemorySegment::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					v.visit(CRC32 < CharList<'h', CharList<'e', CharList<'a', CharList<'d', CharList<'e', CharList<'r', NullType> > > > > >  >::RESULT, 1, "MemorySegment.header", "header", m_header);
					v.visit(CRC32 < CharList<'s', CharList<'i', CharList<'z', CharList<'e', NullType> > > >  >::RESULT, 2, "MemorySegment.size", "size", m_size);
					v.visit(CRC32 < CharList<'c', CharList<'o', CharList<'n', CharList<'s', CharList<'u', CharList<'m', CharList<'e', CharList<'d', CharList<'S', CharList<'i', CharList<'z', CharList<'e', NullType> > > > > > > > > > > >  >::RESULT, 3, "MemorySegment.consumedSize", "consumedSize", m_consumedSize);
					v.visit(CRC32 < CharList<'i', CharList<'d', CharList<'e', CharList<'n', CharList<'t', CharList<'i', CharList<'f', CharList<'i', CharList<'e', CharList<'r', NullType> > > > > > > > > >  >::RESULT, 4, "MemorySegment.identifier", "identifier", m_identifier);
					v.endVisit();
				}
			
				const string MemorySegment::toString() const {
					stringstream s;
			
			
					s << "Header: " << getHeader().toString() << " ";
					s << "Size: " << getSize() << " ";
					s << "ConsumedSize: " << getConsumedSize() << " ";
					s << "Identifier: " << getIdentifier() << " ";
			
					return s.str();
				}
			
				ostream& MemorySegment::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					s->write(1,
							m_header);
					s->write(2,
							m_size);
					s->write(3,
							m_consumedSize);
					s->write(4,
							m_identifier);
					return out;
				}
			
				istream& MemorySegment::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					d->read(1,
							m_header);
					d->read(2,
							m_size);
					d->read(3,
							m_consumedSize);
					d->read(4,
							m_identifier);
					return in;
				}
		} // buffer
	} // data
} // odcore
