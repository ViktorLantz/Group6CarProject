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


#include "automotivedata/generated/automotive/miniature/STM32F4Control.h"

namespace automotive {
	namespace miniature {
			using namespace std;
			using namespace odcore::base;
		
		
			STM32F4Control::STM32F4Control() :
			    SerializableData(), Visitable()
				, m_dataFeed(0)
			{
			}
		
			STM32F4Control::STM32F4Control(
				const uint32_t &val0
			) :
			    SerializableData(), Visitable()
				, m_dataFeed(val0)
			{
			}
		
			STM32F4Control::STM32F4Control(const STM32F4Control &obj) :
			    SerializableData(), Visitable()
				, m_dataFeed(obj.m_dataFeed)
			{
			}
			
			STM32F4Control::~STM32F4Control() {
			}
		
			STM32F4Control& STM32F4Control::operator=(const STM32F4Control &obj) {
				m_dataFeed = obj.m_dataFeed;
				return (*this);
			}
		
			int32_t STM32F4Control::ID() {
				return 82;
			}
		
			const string STM32F4Control::ShortName() {
				return "STM32F4Control";
			}
		
			const string STM32F4Control::LongName() {
				return "automotive.miniature.STM32F4Control";
			}
		
			int32_t STM32F4Control::getID() const {
				return STM32F4Control::ID();
			}
		
			const string STM32F4Control::getShortName() const {
				return STM32F4Control::ShortName();
			}
		
			const string STM32F4Control::getLongName() const {
				return STM32F4Control::LongName();
			}
		
			uint32_t STM32F4Control::getDataFeed() const {
				return m_dataFeed;
			}
			
			void STM32F4Control::setDataFeed(const uint32_t &val) {
				m_dataFeed = val;
			}
		
			void STM32F4Control::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				v.visit(CRC32 < CharList<'d', CharList<'a', CharList<'t', CharList<'a', CharList<'F', CharList<'e', CharList<'e', CharList<'d', NullType> > > > > > > >  >::RESULT, 1, "STM32F4Control.dataFeed", "dataFeed", m_dataFeed);
				v.endVisit();
			}
		
			const string STM32F4Control::toString() const {
				stringstream s;
		
		
				s << "DataFeed: " << getDataFeed() << " ";
		
				return s.str();
			}
		
			ostream& STM32F4Control::operator<<(ostream &out) const {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				s->write(1,
						m_dataFeed);
				return out;
			}
		
			istream& STM32F4Control::operator>>(istream &in) {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				d->read(1,
						m_dataFeed);
				return in;
			}
	} // miniature
} // automotive
