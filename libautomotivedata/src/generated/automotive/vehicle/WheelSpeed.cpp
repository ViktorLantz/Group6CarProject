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


#include "automotivedata/generated/automotive/vehicle/WheelSpeed.h"

namespace automotive {
	namespace vehicle {
			using namespace std;
			using namespace odcore::base;
		
		
			WheelSpeed::WheelSpeed() :
			    SerializableData(), Visitable()
				, m_frontLeft(0)
				, m_frontRight(0)
				, m_rearLeft(0)
				, m_rearRight(0)
			{
			}
		
			WheelSpeed::WheelSpeed(
				const float &val0, 
				const float &val1, 
				const float &val2, 
				const float &val3
			) :
			    SerializableData(), Visitable()
				, m_frontLeft(val0)
				, m_frontRight(val1)
				, m_rearLeft(val2)
				, m_rearRight(val3)
			{
			}
		
			WheelSpeed::WheelSpeed(const WheelSpeed &obj) :
			    SerializableData(), Visitable()
				, m_frontLeft(obj.m_frontLeft)
				, m_frontRight(obj.m_frontRight)
				, m_rearLeft(obj.m_rearLeft)
				, m_rearRight(obj.m_rearRight)
			{
			}
			
			WheelSpeed::~WheelSpeed() {
			}
		
			WheelSpeed& WheelSpeed::operator=(const WheelSpeed &obj) {
				m_frontLeft = obj.m_frontLeft;
				m_frontRight = obj.m_frontRight;
				m_rearLeft = obj.m_rearLeft;
				m_rearRight = obj.m_rearRight;
				return (*this);
			}
		
			int32_t WheelSpeed::ID() {
				return 75;
			}
		
			const string WheelSpeed::ShortName() {
				return "WheelSpeed";
			}
		
			const string WheelSpeed::LongName() {
				return "automotive.vehicle.WheelSpeed";
			}
		
			int32_t WheelSpeed::getID() const {
				return WheelSpeed::ID();
			}
		
			const string WheelSpeed::getShortName() const {
				return WheelSpeed::ShortName();
			}
		
			const string WheelSpeed::getLongName() const {
				return WheelSpeed::LongName();
			}
		
			float WheelSpeed::getFrontLeft() const {
				return m_frontLeft;
			}
			
			void WheelSpeed::setFrontLeft(const float &val) {
				m_frontLeft = val;
			}
			float WheelSpeed::getFrontRight() const {
				return m_frontRight;
			}
			
			void WheelSpeed::setFrontRight(const float &val) {
				m_frontRight = val;
			}
			float WheelSpeed::getRearLeft() const {
				return m_rearLeft;
			}
			
			void WheelSpeed::setRearLeft(const float &val) {
				m_rearLeft = val;
			}
			float WheelSpeed::getRearRight() const {
				return m_rearRight;
			}
			
			void WheelSpeed::setRearRight(const float &val) {
				m_rearRight = val;
			}
		
			void WheelSpeed::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				v.visit(CRC32 < CharList<'f', CharList<'r', CharList<'o', CharList<'n', CharList<'t', CharList<'L', CharList<'e', CharList<'f', CharList<'t', NullType> > > > > > > > >  >::RESULT, 1, "WheelSpeed.frontLeft", "frontLeft", m_frontLeft);
				v.visit(CRC32 < CharList<'f', CharList<'r', CharList<'o', CharList<'n', CharList<'t', CharList<'R', CharList<'i', CharList<'g', CharList<'h', CharList<'t', NullType> > > > > > > > > >  >::RESULT, 2, "WheelSpeed.frontRight", "frontRight", m_frontRight);
				v.visit(CRC32 < CharList<'r', CharList<'e', CharList<'a', CharList<'r', CharList<'L', CharList<'e', CharList<'f', CharList<'t', NullType> > > > > > > >  >::RESULT, 3, "WheelSpeed.rearLeft", "rearLeft", m_rearLeft);
				v.visit(CRC32 < CharList<'r', CharList<'e', CharList<'a', CharList<'r', CharList<'R', CharList<'i', CharList<'g', CharList<'h', CharList<'t', NullType> > > > > > > > >  >::RESULT, 4, "WheelSpeed.rearRight", "rearRight", m_rearRight);
				v.endVisit();
			}
		
			const string WheelSpeed::toString() const {
				stringstream s;
		
		
				s << "FrontLeft: " << getFrontLeft() << " ";
				s << "FrontRight: " << getFrontRight() << " ";
				s << "RearLeft: " << getRearLeft() << " ";
				s << "RearRight: " << getRearRight() << " ";
		
				return s.str();
			}
		
			ostream& WheelSpeed::operator<<(ostream &out) const {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				s->write(1,
						m_frontLeft);
				s->write(2,
						m_frontRight);
				s->write(3,
						m_rearLeft);
				s->write(4,
						m_rearRight);
				return out;
			}
		
			istream& WheelSpeed::operator>>(istream &in) {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				d->read(1,
						m_frontLeft);
				d->read(2,
						m_frontRight);
				d->read(3,
						m_rearLeft);
				d->read(4,
						m_rearRight);
				return in;
			}
	} // vehicle
} // automotive
