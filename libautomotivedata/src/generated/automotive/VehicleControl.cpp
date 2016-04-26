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


#include "automotivedata/generated/automotive/VehicleControl.h"

namespace automotive {
		using namespace std;
		using namespace odcore::base;
	
	
		VehicleControl::VehicleControl() :
		    SerializableData(), Visitable()
			, m_speed(0.0)
			, m_acceleration(0.0)
			, m_steeringWheelAngle(0.0)
			, m_brakeLights(false)
			, m_flashingLightsLeft(false)
			, m_flashingLightsRight(false)
		{
		}
	
		VehicleControl::VehicleControl(
			const double &val0, 
			const double &val1, 
			const double &val2, 
			const bool &val3, 
			const bool &val4, 
			const bool &val5
		) :
		    SerializableData(), Visitable()
			, m_speed(val0)
			, m_acceleration(val1)
			, m_steeringWheelAngle(val2)
			, m_brakeLights(val3)
			, m_flashingLightsLeft(val4)
			, m_flashingLightsRight(val5)
		{
		}
	
		VehicleControl::VehicleControl(const VehicleControl &obj) :
		    SerializableData(), Visitable()
			, m_speed(obj.m_speed)
			, m_acceleration(obj.m_acceleration)
			, m_steeringWheelAngle(obj.m_steeringWheelAngle)
			, m_brakeLights(obj.m_brakeLights)
			, m_flashingLightsLeft(obj.m_flashingLightsLeft)
			, m_flashingLightsRight(obj.m_flashingLightsRight)
		{
		}
		
		VehicleControl::~VehicleControl() {
		}
	
		VehicleControl& VehicleControl::operator=(const VehicleControl &obj) {
			m_speed = obj.m_speed;
			m_acceleration = obj.m_acceleration;
			m_steeringWheelAngle = obj.m_steeringWheelAngle;
			m_brakeLights = obj.m_brakeLights;
			m_flashingLightsLeft = obj.m_flashingLightsLeft;
			m_flashingLightsRight = obj.m_flashingLightsRight;
			return (*this);
		}
	
		int32_t VehicleControl::ID() {
			return 41;
		}
	
		const string VehicleControl::ShortName() {
			return "VehicleControl";
		}
	
		const string VehicleControl::LongName() {
			return "automotive.VehicleControl";
		}
	
		int32_t VehicleControl::getID() const {
			return VehicleControl::ID();
		}
	
		const string VehicleControl::getShortName() const {
			return VehicleControl::ShortName();
		}
	
		const string VehicleControl::getLongName() const {
			return VehicleControl::LongName();
		}
	
		double VehicleControl::getSpeed() const {
			return m_speed;
		}
		
		void VehicleControl::setSpeed(const double &val) {
			m_speed = val;
		}
		double VehicleControl::getAcceleration() const {
			return m_acceleration;
		}
		
		void VehicleControl::setAcceleration(const double &val) {
			m_acceleration = val;
		}
		double VehicleControl::getSteeringWheelAngle() const {
			return m_steeringWheelAngle;
		}
		
		void VehicleControl::setSteeringWheelAngle(const double &val) {
			m_steeringWheelAngle = val;
		}
		bool VehicleControl::getBrakeLights() const {
			return m_brakeLights;
		}
		
		void VehicleControl::setBrakeLights(const bool &val) {
			m_brakeLights = val;
		}
		bool VehicleControl::getFlashingLightsLeft() const {
			return m_flashingLightsLeft;
		}
		
		void VehicleControl::setFlashingLightsLeft(const bool &val) {
			m_flashingLightsLeft = val;
		}
		bool VehicleControl::getFlashingLightsRight() const {
			return m_flashingLightsRight;
		}
		
		void VehicleControl::setFlashingLightsRight(const bool &val) {
			m_flashingLightsRight = val;
		}
	
		void VehicleControl::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.visit(0x0E43596B, 1, "VehicleControl.speed", "speed", m_speed);
			v.visit(0x0E435991, 2, "VehicleControl.acceleration", "acceleration", m_acceleration);
			v.visit(0x0E435969, 3, "VehicleControl.steeringWheelAngle", "steeringWheelAngle", m_steeringWheelAngle);
			v.visit(0x0E43599B, 4, "VehicleControl.brakeLights", "brakeLights", m_brakeLights);
			v.visit(0x09823BD7, 5, "VehicleControl.flashingLightsLeft", "flashingLightsLeft", m_flashingLightsLeft);
			v.visit(0x0E435996, 6, "VehicleControl.flashingLightsRight", "flashingLightsRight", m_flashingLightsRight);
			v.endVisit();
		}
	
		const string VehicleControl::toString() const {
			stringstream s;
	
	
			s << "Speed: " << getSpeed() << " ";
			s << "Acceleration: " << getAcceleration() << " ";
			s << "SteeringWheelAngle: " << getSteeringWheelAngle() << " ";
			s << "BrakeLights: " << getBrakeLights() << " ";
			s << "FlashingLightsLeft: " << getFlashingLightsLeft() << " ";
			s << "FlashingLightsRight: " << getFlashingLightsRight() << " ";
	
			return s.str();
		}
	
		ostream& VehicleControl::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);
	
			s->write(0x0E43596B, m_speed);
			s->write(0x0E435991, m_acceleration);
			s->write(0x0E435969, m_steeringWheelAngle);
			s->write(0x0E43599B, m_brakeLights);
			s->write(0x09823BD7, m_flashingLightsLeft);
			s->write(0x0E435996, m_flashingLightsRight);
			return out;
		}
	
		istream& VehicleControl::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
	
			d->read(0x0E43596B, m_speed);
			d->read(0x0E435991, m_acceleration);
			d->read(0x0E435969, m_steeringWheelAngle);
			d->read(0x0E43599B, m_brakeLights);
			d->read(0x09823BD7, m_flashingLightsLeft);
			d->read(0x0E435996, m_flashingLightsRight);
			return in;
		}
} // automotive
