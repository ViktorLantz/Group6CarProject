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


#include "automotivedata/generated/automotive/vehicle/LightSystem.h"

namespace automotive {
	namespace vehicle {
			using namespace std;
			using namespace odcore::base;
		
		
			LightSystem::LightSystem() :
			    SerializableData(), Visitable()
				, m_headlights(0)
			{
			}
		
			LightSystem::LightSystem(
				const uint8_t &val0
			) :
			    SerializableData(), Visitable()
				, m_headlights(val0)
			{
			}
		
			LightSystem::LightSystem(const LightSystem &obj) :
			    SerializableData(), Visitable()
				, m_headlights(obj.m_headlights)
			{
			}
			
			LightSystem::~LightSystem() {
			}
		
			LightSystem& LightSystem::operator=(const LightSystem &obj) {
				m_headlights = obj.m_headlights;
				return (*this);
			}
		
			int32_t LightSystem::ID() {
				return 76;
			}
		
			const string LightSystem::ShortName() {
				return "LightSystem";
			}
		
			const string LightSystem::LongName() {
				return "automotive.vehicle.LightSystem";
			}
		
			int32_t LightSystem::getID() const {
				return LightSystem::ID();
			}
		
			const string LightSystem::getShortName() const {
				return LightSystem::ShortName();
			}
		
			const string LightSystem::getLongName() const {
				return LightSystem::LongName();
			}
		
			uint8_t LightSystem::getHeadlights() const {
				return m_headlights;
			}
			
			void LightSystem::setHeadlights(const uint8_t &val) {
				m_headlights = val;
			}
		
			void LightSystem::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				v.visit(CRC32 < CharList<'h', CharList<'e', CharList<'a', CharList<'d', CharList<'l', CharList<'i', CharList<'g', CharList<'h', CharList<'t', CharList<'s', NullType> > > > > > > > > >  >::RESULT, 1, "LightSystem.headlights", "headlights", m_headlights);
				v.endVisit();
			}
		
			const string LightSystem::toString() const {
				stringstream s;
		
		
				s << "Headlights: " << getHeadlights() << " ";
		
				return s.str();
			}
		
			ostream& LightSystem::operator<<(ostream &out) const {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				s->write(1,
						m_headlights);
				return out;
			}
		
			istream& LightSystem::operator>>(istream &in) {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				d->read(1,
						m_headlights);
				return in;
			}
	} // vehicle
} // automotive
