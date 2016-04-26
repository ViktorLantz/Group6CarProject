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


#include "opendavinci/generated/odcore/data/SharedData.h"

namespace odcore {
	namespace data {
			using namespace std;
			using namespace odcore::base;
		
		
			SharedData::SharedData() :
			    SerializableData(), Visitable()
				, m_name("")
				, m_size(0)
			{
			}
		
			SharedData::SharedData(
				const std::string &val0, 
				const uint32_t &val1
			) :
			    SerializableData(), Visitable()
				, m_name(val0)
				, m_size(val1)
			{
			}
		
			SharedData::SharedData(const SharedData &obj) :
			    SerializableData(), Visitable()
				, m_name(obj.m_name)
				, m_size(obj.m_size)
			{
			}
			
			SharedData::~SharedData() {
			}
		
			SharedData& SharedData::operator=(const SharedData &obj) {
				m_name = obj.m_name;
				m_size = obj.m_size;
				return (*this);
			}
		
			int32_t SharedData::ID() {
				return 13;
			}
		
			const string SharedData::ShortName() {
				return "SharedData";
			}
		
			const string SharedData::LongName() {
				return "odcore.data.SharedData";
			}
		
			int32_t SharedData::getID() const {
				return SharedData::ID();
			}
		
			const string SharedData::getShortName() const {
				return SharedData::ShortName();
			}
		
			const string SharedData::getLongName() const {
				return SharedData::LongName();
			}
		
			std::string SharedData::getName() const {
				return m_name;
			}
			
			void SharedData::setName(const std::string &val) {
				m_name = val;
			}
			uint32_t SharedData::getSize() const {
				return m_size;
			}
			
			void SharedData::setSize(const uint32_t &val) {
				m_size = val;
			}
		
			void SharedData::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				v.visit(0x09823BC4, 1, "SharedData.name", "name", m_name);
				v.visit(0x0E435993, 2, "SharedData.size", "size", m_size);
				v.endVisit();
			}
		
			const string SharedData::toString() const {
				stringstream s;
		
		
				s << "Name: " << getName() << " ";
				s << "Size: " << getSize() << " ";
		
				return s.str();
			}
		
			ostream& SharedData::operator<<(ostream &out) const {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				s->write(0x09823BC4, m_name);
				s->write(0x0E435993, m_size);
				return out;
			}
		
			istream& SharedData::operator>>(istream &in) {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				d->read(0x09823BC4, m_name);
				d->read(0x0E435993, m_size);
				return in;
			}
	} // data
} // odcore
