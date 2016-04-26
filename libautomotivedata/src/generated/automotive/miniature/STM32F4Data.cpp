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


#include "automotivedata/generated/automotive/miniature/STM32F4Data.h"

namespace automotive {
	namespace miniature {
			using namespace std;
			using namespace odcore::base;
		
		
			STM32F4Data::STM32F4Data() :
			    SerializableData(), Visitable()
				, m_rawData("")
			{
			}
		
			STM32F4Data::STM32F4Data(
				const std::string &val0
			) :
			    SerializableData(), Visitable()
				, m_rawData(val0)
			{
			}
		
			STM32F4Data::STM32F4Data(const STM32F4Data &obj) :
			    SerializableData(), Visitable()
				, m_rawData(obj.m_rawData)
			{
			}
			
			STM32F4Data::~STM32F4Data() {
			}
		
			STM32F4Data& STM32F4Data::operator=(const STM32F4Data &obj) {
				m_rawData = obj.m_rawData;
				return (*this);
			}
		
			int32_t STM32F4Data::ID() {
				return 83;
			}
		
			const string STM32F4Data::ShortName() {
				return "STM32F4Data";
			}
		
			const string STM32F4Data::LongName() {
				return "automotive.miniature.STM32F4Data";
			}
		
			int32_t STM32F4Data::getID() const {
				return STM32F4Data::ID();
			}
		
			const string STM32F4Data::getShortName() const {
				return STM32F4Data::ShortName();
			}
		
			const string STM32F4Data::getLongName() const {
				return STM32F4Data::LongName();
			}
		
			std::string STM32F4Data::getRawData() const {
				return m_rawData;
			}
			
			void STM32F4Data::setRawData(const std::string &val) {
				m_rawData = val;
			}
		
			void STM32F4Data::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				v.visit(CRC32 < CharList<'r', CharList<'a', CharList<'w', CharList<'D', CharList<'a', CharList<'t', CharList<'a', NullType> > > > > > >  >::RESULT, 1, "STM32F4Data.rawData", "rawData", m_rawData);
				v.endVisit();
			}
		
			const string STM32F4Data::toString() const {
				stringstream s;
		
		
				s << "RawData: " << getRawData() << " ";
		
				return s.str();
			}
		
			ostream& STM32F4Data::operator<<(ostream &out) const {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				s->write(1,
						m_rawData);
				return out;
			}
		
			istream& STM32F4Data::operator>>(istream &in) {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				d->read(1,
						m_rawData);
				return in;
			}
	} // miniature
} // automotive
