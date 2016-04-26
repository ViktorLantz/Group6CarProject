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


#include "opendavinci/generated/odcore/data/reflection/AbstractField.h"

namespace odcore {
	namespace data {
		namespace reflection {
				using namespace std;
				using namespace odcore::base;
			
			
				AbstractField::AbstractField() :
				    SerializableData(), Visitable()
					, m_longFieldIdentifier(0)
					, m_shortFieldIdentifier(0)
					, m_longFieldName("")
					, m_shortFieldName("")
					, m_fieldDataType()
					, m_size(-1) // TODO: Validation if the default value is of the desired type.
				{
				}
			
				AbstractField::AbstractField(
					const uint32_t &val0, 
					const uint8_t &val1, 
					const std::string &val2, 
					const std::string &val3, 
					const AbstractField::FIELDDATATYPE &val4, 
					const int8_t &val5
				) :
				    SerializableData(), Visitable()
					, m_longFieldIdentifier(val0)
					, m_shortFieldIdentifier(val1)
					, m_longFieldName(val2)
					, m_shortFieldName(val3)
					, m_fieldDataType(val4)
					, m_size(val5)
				{
				}
			
				AbstractField::AbstractField(const AbstractField &obj) :
				    SerializableData(), Visitable()
					, m_longFieldIdentifier(obj.m_longFieldIdentifier)
					, m_shortFieldIdentifier(obj.m_shortFieldIdentifier)
					, m_longFieldName(obj.m_longFieldName)
					, m_shortFieldName(obj.m_shortFieldName)
					, m_fieldDataType(obj.m_fieldDataType)
					, m_size(obj.m_size)
				{
				}
				
				AbstractField::~AbstractField() {
				}
			
				AbstractField& AbstractField::operator=(const AbstractField &obj) {
					m_longFieldIdentifier = obj.m_longFieldIdentifier;
					m_shortFieldIdentifier = obj.m_shortFieldIdentifier;
					m_longFieldName = obj.m_longFieldName;
					m_shortFieldName = obj.m_shortFieldName;
					m_fieldDataType = obj.m_fieldDataType;
					m_size = obj.m_size;
					return (*this);
				}
			
				int32_t AbstractField::ID() {
					return 70;
				}
			
				const string AbstractField::ShortName() {
					return "AbstractField";
				}
			
				const string AbstractField::LongName() {
					return "odcore.data.reflection.AbstractField";
				}
			
				int32_t AbstractField::getID() const {
					return AbstractField::ID();
				}
			
				const string AbstractField::getShortName() const {
					return AbstractField::ShortName();
				}
			
				const string AbstractField::getLongName() const {
					return AbstractField::LongName();
				}
			
				uint32_t AbstractField::getLongFieldIdentifier() const {
					return m_longFieldIdentifier;
				}
				
				void AbstractField::setLongFieldIdentifier(const uint32_t &val) {
					m_longFieldIdentifier = val;
				}
				uint8_t AbstractField::getShortFieldIdentifier() const {
					return m_shortFieldIdentifier;
				}
				
				void AbstractField::setShortFieldIdentifier(const uint8_t &val) {
					m_shortFieldIdentifier = val;
				}
				std::string AbstractField::getLongFieldName() const {
					return m_longFieldName;
				}
				
				void AbstractField::setLongFieldName(const std::string &val) {
					m_longFieldName = val;
				}
				std::string AbstractField::getShortFieldName() const {
					return m_shortFieldName;
				}
				
				void AbstractField::setShortFieldName(const std::string &val) {
					m_shortFieldName = val;
				}
				AbstractField::FIELDDATATYPE AbstractField::getFieldDataType() const {
					return m_fieldDataType;
				}
				
				void AbstractField::setFieldDataType(const AbstractField::FIELDDATATYPE &val) {
					m_fieldDataType = val;
				}
				int8_t AbstractField::getSize() const {
					return m_size;
				}
				
				void AbstractField::setSize(const int8_t &val) {
					m_size = val;
				}
			
				void AbstractField::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					v.visit(CRC32 < CharList<'l', CharList<'o', CharList<'n', CharList<'g', CharList<'F', CharList<'i', CharList<'e', CharList<'l', CharList<'d', CharList<'I', CharList<'d', CharList<'e', CharList<'n', CharList<'t', CharList<'i', CharList<'f', CharList<'i', CharList<'e', CharList<'r', NullType> > > > > > > > > > > > > > > > > > >  >::RESULT, 1, "AbstractField.longFieldIdentifier", "longFieldIdentifier", m_longFieldIdentifier);
					v.visit(CRC32 < CharList<'s', CharList<'h', CharList<'o', CharList<'r', CharList<'t', CharList<'F', CharList<'i', CharList<'e', CharList<'l', CharList<'d', CharList<'I', CharList<'d', CharList<'e', CharList<'n', CharList<'t', CharList<'i', CharList<'f', CharList<'i', CharList<'e', CharList<'r', NullType> > > > > > > > > > > > > > > > > > > >  >::RESULT, 2, "AbstractField.shortFieldIdentifier", "shortFieldIdentifier", m_shortFieldIdentifier);
					v.visit(CRC32 < CharList<'l', CharList<'o', CharList<'n', CharList<'g', CharList<'F', CharList<'i', CharList<'e', CharList<'l', CharList<'d', CharList<'N', CharList<'a', CharList<'m', CharList<'e', NullType> > > > > > > > > > > > >  >::RESULT, 3, "AbstractField.longFieldName", "longFieldName", m_longFieldName);
					v.visit(CRC32 < CharList<'s', CharList<'h', CharList<'o', CharList<'r', CharList<'t', CharList<'F', CharList<'i', CharList<'e', CharList<'l', CharList<'d', CharList<'N', CharList<'a', CharList<'m', CharList<'e', NullType> > > > > > > > > > > > > >  >::RESULT, 4, "AbstractField.shortFieldName", "shortFieldName", m_shortFieldName);
					int32_t int32t_fieldDataType = m_fieldDataType;
					v.visit(CRC32 < CharList<'f', CharList<'i', CharList<'e', CharList<'l', CharList<'d', CharList<'D', CharList<'a', CharList<'t', CharList<'a', CharList<'T', CharList<'y', CharList<'p', CharList<'e', NullType> > > > > > > > > > > > >  >::RESULT, 5, "AbstractField.fieldDataType", "fieldDataType", int32t_fieldDataType);
					v.visit(CRC32 < CharList<'s', CharList<'i', CharList<'z', CharList<'e', NullType> > > >  >::RESULT, 6, "AbstractField.size", "size", m_size);
					v.endVisit();
				}
			
				const string AbstractField::toString() const {
					stringstream s;
			
			
					s << "LongFieldIdentifier: " << getLongFieldIdentifier() << " ";
					s << "ShortFieldIdentifier: " << getShortFieldIdentifier() << " ";
					s << "LongFieldName: " << getLongFieldName() << " ";
					s << "ShortFieldName: " << getShortFieldName() << " ";
					switch(getFieldDataType()) {
						case UINT8_T :
						s << "FieldDataType: AbstractField::UINT8_T (2) ";
						break;
						case UINT32_T :
						s << "FieldDataType: AbstractField::UINT32_T (6) ";
						break;
						case DATA_T :
						s << "FieldDataType: AbstractField::DATA_T (52) ";
						break;
						case SERIALIZABLE_T :
						s << "FieldDataType: AbstractField::SERIALIZABLE_T (53) ";
						break;
						case INTEGERS_END :
						s << "FieldDataType: AbstractField::INTEGERS_END (10) ";
						break;
						case NON_PRIMITIVE_END :
						s << "FieldDataType: AbstractField::NON_PRIMITIVE_END (54) ";
						break;
						case DOUBLE_T :
						s << "FieldDataType: AbstractField::DOUBLE_T (14) ";
						break;
						case INT64_T :
						s << "FieldDataType: AbstractField::INT64_T (9) ";
						break;
						case INT8_T :
						s << "FieldDataType: AbstractField::INT8_T (3) ";
						break;
						case FLOAT_T :
						s << "FieldDataType: AbstractField::FLOAT_T (13) ";
						break;
						case UINT64_T :
						s << "FieldDataType: AbstractField::UINT64_T (8) ";
						break;
						case INT32_T :
						s << "FieldDataType: AbstractField::INT32_T (7) ";
						break;
						case BOOL_T :
						s << "FieldDataType: AbstractField::BOOL_T (0) ";
						break;
						case NON_PRIMITIVE_START :
						s << "FieldDataType: AbstractField::NON_PRIMITIVE_START (50) ";
						break;
						case INT16_T :
						s << "FieldDataType: AbstractField::INT16_T (5) ";
						break;
						case UINT16_T :
						s << "FieldDataType: AbstractField::UINT16_T (4) ";
						break;
						case INTEGERS_START :
						s << "FieldDataType: AbstractField::INTEGERS_START (1) ";
						break;
						case CHAR_T :
						s << "FieldDataType: AbstractField::CHAR_T (11) ";
						break;
						case STRING_T :
						s << "FieldDataType: AbstractField::STRING_T (51) ";
						break;
						case UCHAR_T :
						s << "FieldDataType: AbstractField::UCHAR_T (12) ";
						break;
					}
					s << "Size: " << getSize() << " ";
			
					return s.str();
				}
			
				ostream& AbstractField::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					s->write(1,
							m_longFieldIdentifier);
					s->write(2,
							m_shortFieldIdentifier);
					s->write(3,
							m_longFieldName);
					s->write(4,
							m_shortFieldName);
					int32_t int32t_fieldDataType = m_fieldDataType;
					s->write(5,
							int32t_fieldDataType);
					s->write(6,
							m_size);
					return out;
				}
			
				istream& AbstractField::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					d->read(1,
							m_longFieldIdentifier);
					d->read(2,
							m_shortFieldIdentifier);
					d->read(3,
							m_longFieldName);
					d->read(4,
							m_shortFieldName);
					int32_t int32t_fieldDataType = 0;
					d->read(5,
							int32t_fieldDataType);
					m_fieldDataType = static_cast<AbstractField::FIELDDATATYPE>(int32t_fieldDataType);
					d->read(6,
							m_size);
					return in;
				}
		} // reflection
	} // data
} // odcore
