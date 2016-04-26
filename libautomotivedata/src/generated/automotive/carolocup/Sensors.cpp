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


#include "automotivedata/generated/automotive/carolocup/Sensors.h"

namespace automotive {
	namespace carolocup {
			using namespace std;
			using namespace odcore::base;
		
		
			Sensors::Sensors() :
			    SerializableData(), Visitable()
				, m_usFront(0)
				, m_usRear(0)
				, m_irFrontRight(0)
				, m_irRearRight(0)
				, m_irBackLeft(0)
				, m_irBackRight(0)
				, m_gyroHeading(0)
				, m_wheelRearLeft(0)
				, m_wheelRearRight(0)
				, m_buttonState(0)
				, m_lightReading(0)
			{
			}
		
			Sensors::Sensors(
				const uint32_t &val0, 
				const uint32_t &val1, 
				const uint32_t &val2, 
				const uint32_t &val3, 
				const uint32_t &val4, 
				const uint32_t &val5, 
				const uint32_t &val6, 
				const uint32_t &val7, 
				const uint32_t &val8, 
				const uint32_t &val9, 
				const uint32_t &val10
			) :
			    SerializableData(), Visitable()
				, m_usFront(val0)
				, m_usRear(val1)
				, m_irFrontRight(val2)
				, m_irRearRight(val3)
				, m_irBackLeft(val4)
				, m_irBackRight(val5)
				, m_gyroHeading(val6)
				, m_wheelRearLeft(val7)
				, m_wheelRearRight(val8)
				, m_buttonState(val9)
				, m_lightReading(val10)
			{
			}
		
			Sensors::Sensors(const Sensors &obj) :
			    SerializableData(), Visitable()
				, m_usFront(obj.m_usFront)
				, m_usRear(obj.m_usRear)
				, m_irFrontRight(obj.m_irFrontRight)
				, m_irRearRight(obj.m_irRearRight)
				, m_irBackLeft(obj.m_irBackLeft)
				, m_irBackRight(obj.m_irBackRight)
				, m_gyroHeading(obj.m_gyroHeading)
				, m_wheelRearLeft(obj.m_wheelRearLeft)
				, m_wheelRearRight(obj.m_wheelRearRight)
				, m_buttonState(obj.m_buttonState)
				, m_lightReading(obj.m_lightReading)
			{
			}
			
			Sensors::~Sensors() {
			}
		
			Sensors& Sensors::operator=(const Sensors &obj) {
				m_usFront = obj.m_usFront;
				m_usRear = obj.m_usRear;
				m_irFrontRight = obj.m_irFrontRight;
				m_irRearRight = obj.m_irRearRight;
				m_irBackLeft = obj.m_irBackLeft;
				m_irBackRight = obj.m_irBackRight;
				m_gyroHeading = obj.m_gyroHeading;
				m_wheelRearLeft = obj.m_wheelRearLeft;
				m_wheelRearRight = obj.m_wheelRearRight;
				m_buttonState = obj.m_buttonState;
				m_lightReading = obj.m_lightReading;
				return (*this);
			}
		
			int32_t Sensors::ID() {
				return 87;
			}
		
			const string Sensors::ShortName() {
				return "Sensors";
			}
		
			const string Sensors::LongName() {
				return "automotive.carolocup.Sensors";
			}
		
			int32_t Sensors::getID() const {
				return Sensors::ID();
			}
		
			const string Sensors::getShortName() const {
				return Sensors::ShortName();
			}
		
			const string Sensors::getLongName() const {
				return Sensors::LongName();
			}
		
			uint32_t Sensors::getUsFront() const {
				return m_usFront;
			}
			
			void Sensors::setUsFront(const uint32_t &val) {
				m_usFront = val;
			}
			uint32_t Sensors::getUsRear() const {
				return m_usRear;
			}
			
			void Sensors::setUsRear(const uint32_t &val) {
				m_usRear = val;
			}
			uint32_t Sensors::getIrFrontRight() const {
				return m_irFrontRight;
			}
			
			void Sensors::setIrFrontRight(const uint32_t &val) {
				m_irFrontRight = val;
			}
			uint32_t Sensors::getIrRearRight() const {
				return m_irRearRight;
			}
			
			void Sensors::setIrRearRight(const uint32_t &val) {
				m_irRearRight = val;
			}
			uint32_t Sensors::getIrBackLeft() const {
				return m_irBackLeft;
			}
			
			void Sensors::setIrBackLeft(const uint32_t &val) {
				m_irBackLeft = val;
			}
			uint32_t Sensors::getIrBackRight() const {
				return m_irBackRight;
			}
			
			void Sensors::setIrBackRight(const uint32_t &val) {
				m_irBackRight = val;
			}
			uint32_t Sensors::getGyroHeading() const {
				return m_gyroHeading;
			}
			
			void Sensors::setGyroHeading(const uint32_t &val) {
				m_gyroHeading = val;
			}
			uint32_t Sensors::getWheelRearLeft() const {
				return m_wheelRearLeft;
			}
			
			void Sensors::setWheelRearLeft(const uint32_t &val) {
				m_wheelRearLeft = val;
			}
			uint32_t Sensors::getWheelRearRight() const {
				return m_wheelRearRight;
			}
			
			void Sensors::setWheelRearRight(const uint32_t &val) {
				m_wheelRearRight = val;
			}
			uint32_t Sensors::getButtonState() const {
				return m_buttonState;
			}
			
			void Sensors::setButtonState(const uint32_t &val) {
				m_buttonState = val;
			}
			uint32_t Sensors::getLightReading() const {
				return m_lightReading;
			}
			
			void Sensors::setLightReading(const uint32_t &val) {
				m_lightReading = val;
			}
		
			void Sensors::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				v.visit(CRC32 < CharList<'u', CharList<'s', CharList<'F', CharList<'r', CharList<'o', CharList<'n', CharList<'t', NullType> > > > > > >  >::RESULT, 1, "Sensors.usFront", "usFront", m_usFront);
				v.visit(CRC32 < CharList<'u', CharList<'s', CharList<'R', CharList<'e', CharList<'a', CharList<'r', NullType> > > > > >  >::RESULT, 2, "Sensors.usRear", "usRear", m_usRear);
				v.visit(CRC32 < CharList<'i', CharList<'r', CharList<'F', CharList<'r', CharList<'o', CharList<'n', CharList<'t', CharList<'R', CharList<'i', CharList<'g', CharList<'h', CharList<'t', NullType> > > > > > > > > > > >  >::RESULT, 3, "Sensors.irFrontRight", "irFrontRight", m_irFrontRight);
				v.visit(CRC32 < CharList<'i', CharList<'r', CharList<'R', CharList<'e', CharList<'a', CharList<'r', CharList<'R', CharList<'i', CharList<'g', CharList<'h', CharList<'t', NullType> > > > > > > > > > >  >::RESULT, 4, "Sensors.irRearRight", "irRearRight", m_irRearRight);
				v.visit(CRC32 < CharList<'i', CharList<'r', CharList<'B', CharList<'a', CharList<'c', CharList<'k', CharList<'L', CharList<'e', CharList<'f', CharList<'t', NullType> > > > > > > > > >  >::RESULT, 5, "Sensors.irBackLeft", "irBackLeft", m_irBackLeft);
				v.visit(CRC32 < CharList<'i', CharList<'r', CharList<'B', CharList<'a', CharList<'c', CharList<'k', CharList<'R', CharList<'i', CharList<'g', CharList<'h', CharList<'t', NullType> > > > > > > > > > >  >::RESULT, 6, "Sensors.irBackRight", "irBackRight", m_irBackRight);
				v.visit(CRC32 < CharList<'g', CharList<'y', CharList<'r', CharList<'o', CharList<'H', CharList<'e', CharList<'a', CharList<'d', CharList<'i', CharList<'n', CharList<'g', NullType> > > > > > > > > > >  >::RESULT, 7, "Sensors.gyroHeading", "gyroHeading", m_gyroHeading);
				v.visit(CRC32 < CharList<'w', CharList<'h', CharList<'e', CharList<'e', CharList<'l', CharList<'R', CharList<'e', CharList<'a', CharList<'r', CharList<'L', CharList<'e', CharList<'f', CharList<'t', NullType> > > > > > > > > > > > >  >::RESULT, 8, "Sensors.wheelRearLeft", "wheelRearLeft", m_wheelRearLeft);
				v.visit(CRC32 < CharList<'w', CharList<'h', CharList<'e', CharList<'e', CharList<'l', CharList<'R', CharList<'e', CharList<'a', CharList<'r', CharList<'R', CharList<'i', CharList<'g', CharList<'h', CharList<'t', NullType> > > > > > > > > > > > > >  >::RESULT, 9, "Sensors.wheelRearRight", "wheelRearRight", m_wheelRearRight);
				v.visit(CRC32 < CharList<'b', CharList<'u', CharList<'t', CharList<'t', CharList<'o', CharList<'n', CharList<'S', CharList<'t', CharList<'a', CharList<'t', CharList<'e', NullType> > > > > > > > > > >  >::RESULT, 10, "Sensors.buttonState", "buttonState", m_buttonState);
				v.visit(CRC32 < CharList<'l', CharList<'i', CharList<'g', CharList<'h', CharList<'t', CharList<'R', CharList<'e', CharList<'a', CharList<'d', CharList<'i', CharList<'n', CharList<'g', NullType> > > > > > > > > > > >  >::RESULT, 11, "Sensors.lightReading", "lightReading", m_lightReading);
				v.endVisit();
			}
		
			const string Sensors::toString() const {
				stringstream s;
		
		
				s << "UsFront: " << getUsFront() << " ";
				s << "UsRear: " << getUsRear() << " ";
				s << "IrFrontRight: " << getIrFrontRight() << " ";
				s << "IrRearRight: " << getIrRearRight() << " ";
				s << "IrBackLeft: " << getIrBackLeft() << " ";
				s << "IrBackRight: " << getIrBackRight() << " ";
				s << "GyroHeading: " << getGyroHeading() << " ";
				s << "WheelRearLeft: " << getWheelRearLeft() << " ";
				s << "WheelRearRight: " << getWheelRearRight() << " ";
				s << "ButtonState: " << getButtonState() << " ";
				s << "LightReading: " << getLightReading() << " ";
		
				return s.str();
			}
		
			ostream& Sensors::operator<<(ostream &out) const {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				s->write(1,
						m_usFront);
				s->write(2,
						m_usRear);
				s->write(3,
						m_irFrontRight);
				s->write(4,
						m_irRearRight);
				s->write(5,
						m_irBackLeft);
				s->write(6,
						m_irBackRight);
				s->write(7,
						m_gyroHeading);
				s->write(8,
						m_wheelRearLeft);
				s->write(9,
						m_wheelRearRight);
				s->write(10,
						m_buttonState);
				s->write(11,
						m_lightReading);
				return out;
			}
		
			istream& Sensors::operator>>(istream &in) {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				d->read(1,
						m_usFront);
				d->read(2,
						m_usRear);
				d->read(3,
						m_irFrontRight);
				d->read(4,
						m_irRearRight);
				d->read(5,
						m_irBackLeft);
				d->read(6,
						m_irBackRight);
				d->read(7,
						m_gyroHeading);
				d->read(8,
						m_wheelRearLeft);
				d->read(9,
						m_wheelRearRight);
				d->read(10,
						m_buttonState);
				d->read(11,
						m_lightReading);
				return in;
			}
	} // carolocup
} // automotive
