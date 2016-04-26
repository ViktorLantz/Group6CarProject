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


#include "automotivedata/generated/automotive/carolocup/Control.h"

namespace automotive {
	namespace carolocup {
			using namespace std;
			using namespace odcore::base;
		
		
			Control::Control() :
			    SerializableData(), Visitable()
				, m_steering(0)
				, m_speed(0)
				, m_lights(0)
				, m_gyroTrigger(0)
			{
			}
		
			Control::Control(
				const uint32_t &val0, 
				const uint32_t &val1, 
				const uint32_t &val2, 
				const uint32_t &val3
			) :
			    SerializableData(), Visitable()
				, m_steering(val0)
				, m_speed(val1)
				, m_lights(val2)
				, m_gyroTrigger(val3)
			{
			}
		
			Control::Control(const Control &obj) :
			    SerializableData(), Visitable()
				, m_steering(obj.m_steering)
				, m_speed(obj.m_speed)
				, m_lights(obj.m_lights)
				, m_gyroTrigger(obj.m_gyroTrigger)
			{
			}
			
			Control::~Control() {
			}
		
			Control& Control::operator=(const Control &obj) {
				m_steering = obj.m_steering;
				m_speed = obj.m_speed;
				m_lights = obj.m_lights;
				m_gyroTrigger = obj.m_gyroTrigger;
				return (*this);
			}
		
			int32_t Control::ID() {
				return 88;
			}
		
			const string Control::ShortName() {
				return "Control";
			}
		
			const string Control::LongName() {
				return "automotive.carolocup.Control";
			}
		
			int32_t Control::getID() const {
				return Control::ID();
			}
		
			const string Control::getShortName() const {
				return Control::ShortName();
			}
		
			const string Control::getLongName() const {
				return Control::LongName();
			}
		
			uint32_t Control::getSteering() const {
				return m_steering;
			}
			
			void Control::setSteering(const uint32_t &val) {
				m_steering = val;
			}
			uint32_t Control::getSpeed() const {
				return m_speed;
			}
			
			void Control::setSpeed(const uint32_t &val) {
				m_speed = val;
			}
			uint32_t Control::getLights() const {
				return m_lights;
			}
			
			void Control::setLights(const uint32_t &val) {
				m_lights = val;
			}
			uint32_t Control::getGyroTrigger() const {
				return m_gyroTrigger;
			}
			
			void Control::setGyroTrigger(const uint32_t &val) {
				m_gyroTrigger = val;
			}
		
			void Control::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				v.visit(CRC32 < CharList<'s', CharList<'t', CharList<'e', CharList<'e', CharList<'r', CharList<'i', CharList<'n', CharList<'g', NullType> > > > > > > >  >::RESULT, 1, "Control.steering", "steering", m_steering);
				v.visit(CRC32 < CharList<'s', CharList<'p', CharList<'e', CharList<'e', CharList<'d', NullType> > > > >  >::RESULT, 2, "Control.speed", "speed", m_speed);
				v.visit(CRC32 < CharList<'l', CharList<'i', CharList<'g', CharList<'h', CharList<'t', CharList<'s', NullType> > > > > >  >::RESULT, 3, "Control.lights", "lights", m_lights);
				v.visit(CRC32 < CharList<'g', CharList<'y', CharList<'r', CharList<'o', CharList<'T', CharList<'r', CharList<'i', CharList<'g', CharList<'g', CharList<'e', CharList<'r', NullType> > > > > > > > > > >  >::RESULT, 4, "Control.gyroTrigger", "gyroTrigger", m_gyroTrigger);
				v.endVisit();
			}
		
			const string Control::toString() const {
				stringstream s;
		
		
				s << "Steering: " << getSteering() << " ";
				s << "Speed: " << getSpeed() << " ";
				s << "Lights: " << getLights() << " ";
				s << "GyroTrigger: " << getGyroTrigger() << " ";
		
				return s.str();
			}
		
			ostream& Control::operator<<(ostream &out) const {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				s->write(1,
						m_steering);
				s->write(2,
						m_speed);
				s->write(3,
						m_lights);
				s->write(4,
						m_gyroTrigger);
				return out;
			}
		
			istream& Control::operator>>(istream &in) {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				d->read(1,
						m_steering);
				d->read(2,
						m_speed);
				d->read(3,
						m_lights);
				d->read(4,
						m_gyroTrigger);
				return in;
			}
	} // carolocup
} // automotive
