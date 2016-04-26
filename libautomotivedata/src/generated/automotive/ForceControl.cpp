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


#include "automotivedata/generated/automotive/ForceControl.h"

namespace automotive {
		using namespace std;
		using namespace odcore::base;
	
	
		ForceControl::ForceControl() :
		    SerializableData(), Visitable()
			, m_accelerationForce(0.0)
			, m_brakeForce(0.0)
			, m_steeringForce(0.0)
			, m_brakeLights(false)
			, m_flashingLightsLeft(false)
			, m_flashingLightsRight(false)
		{
		}
	
		ForceControl::ForceControl(
			const double &val0, 
			const double &val1, 
			const double &val2, 
			const bool &val3, 
			const bool &val4, 
			const bool &val5
		) :
		    SerializableData(), Visitable()
			, m_accelerationForce(val0)
			, m_brakeForce(val1)
			, m_steeringForce(val2)
			, m_brakeLights(val3)
			, m_flashingLightsLeft(val4)
			, m_flashingLightsRight(val5)
		{
		}
	
		ForceControl::ForceControl(const ForceControl &obj) :
		    SerializableData(), Visitable()
			, m_accelerationForce(obj.m_accelerationForce)
			, m_brakeForce(obj.m_brakeForce)
			, m_steeringForce(obj.m_steeringForce)
			, m_brakeLights(obj.m_brakeLights)
			, m_flashingLightsLeft(obj.m_flashingLightsLeft)
			, m_flashingLightsRight(obj.m_flashingLightsRight)
		{
		}
		
		ForceControl::~ForceControl() {
		}
	
		ForceControl& ForceControl::operator=(const ForceControl &obj) {
			m_accelerationForce = obj.m_accelerationForce;
			m_brakeForce = obj.m_brakeForce;
			m_steeringForce = obj.m_steeringForce;
			m_brakeLights = obj.m_brakeLights;
			m_flashingLightsLeft = obj.m_flashingLightsLeft;
			m_flashingLightsRight = obj.m_flashingLightsRight;
			return (*this);
		}
	
		int32_t ForceControl::ID() {
			return 33;
		}
	
		const string ForceControl::ShortName() {
			return "ForceControl";
		}
	
		const string ForceControl::LongName() {
			return "automotive.ForceControl";
		}
	
		int32_t ForceControl::getID() const {
			return ForceControl::ID();
		}
	
		const string ForceControl::getShortName() const {
			return ForceControl::ShortName();
		}
	
		const string ForceControl::getLongName() const {
			return ForceControl::LongName();
		}
	
		double ForceControl::getAccelerationForce() const {
			return m_accelerationForce;
		}
		
		void ForceControl::setAccelerationForce(const double &val) {
			m_accelerationForce = val;
		}
		double ForceControl::getBrakeForce() const {
			return m_brakeForce;
		}
		
		void ForceControl::setBrakeForce(const double &val) {
			m_brakeForce = val;
		}
		double ForceControl::getSteeringForce() const {
			return m_steeringForce;
		}
		
		void ForceControl::setSteeringForce(const double &val) {
			m_steeringForce = val;
		}
		bool ForceControl::getBrakeLights() const {
			return m_brakeLights;
		}
		
		void ForceControl::setBrakeLights(const bool &val) {
			m_brakeLights = val;
		}
		bool ForceControl::getFlashingLightsLeft() const {
			return m_flashingLightsLeft;
		}
		
		void ForceControl::setFlashingLightsLeft(const bool &val) {
			m_flashingLightsLeft = val;
		}
		bool ForceControl::getFlashingLightsRight() const {
			return m_flashingLightsRight;
		}
		
		void ForceControl::setFlashingLightsRight(const bool &val) {
			m_flashingLightsRight = val;
		}
	
		void ForceControl::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.visit(0x0E435991, 1, "ForceControl.accelerationForce", "accelerationForce", m_accelerationForce);
			v.visit(0x0E43598D, 2, "ForceControl.brakeForce", "brakeForce", m_brakeForce);
			v.visit(0x0E435969, 3, "ForceControl.steeringForce", "steeringForce", m_steeringForce);
			v.visit(0x0E43599B, 4, "ForceControl.brakeLights", "brakeLights", m_brakeLights);
			v.visit(0x09823BD7, 5, "ForceControl.flashingLightsLeft", "flashingLightsLeft", m_flashingLightsLeft);
			v.visit(0x0E435996, 6, "ForceControl.flashingLightsRight", "flashingLightsRight", m_flashingLightsRight);
			v.endVisit();
		}
	
		const string ForceControl::toString() const {
			stringstream s;
	
	
			s << "AccelerationForce: " << getAccelerationForce() << " ";
			s << "BrakeForce: " << getBrakeForce() << " ";
			s << "SteeringForce: " << getSteeringForce() << " ";
			s << "BrakeLights: " << getBrakeLights() << " ";
			s << "FlashingLightsLeft: " << getFlashingLightsLeft() << " ";
			s << "FlashingLightsRight: " << getFlashingLightsRight() << " ";
	
			return s.str();
		}
	
		ostream& ForceControl::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);
	
			s->write(0x0E435991, m_accelerationForce);
			s->write(0x0E43598D, m_brakeForce);
			s->write(0x0E435969, m_steeringForce);
			s->write(0x0E43599B, m_brakeLights);
			s->write(0x09823BD7, m_flashingLightsLeft);
			s->write(0x0E435996, m_flashingLightsRight);
			return out;
		}
	
		istream& ForceControl::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
	
			d->read(0x0E435991, m_accelerationForce);
			d->read(0x0E43598D, m_brakeForce);
			d->read(0x0E435969, m_steeringForce);
			d->read(0x0E43599B, m_brakeLights);
			d->read(0x09823BD7, m_flashingLightsLeft);
			d->read(0x0E435996, m_flashingLightsRight);
			return in;
		}
} // automotive
