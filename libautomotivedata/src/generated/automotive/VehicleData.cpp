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


#include "automotivedata/generated/automotive/VehicleData.h"

namespace automotive {
		using namespace std;
		using namespace odcore::base;
	
	
		VehicleData::VehicleData() :
		    SerializableData(), Visitable()
			, m_position()
			, m_velocity()
			, m_heading(0.0)
			, m_absTraveledPath(0.0)
			, m_relTraveledPath(0.0)
			, m_speed(0.0)
			, m_v_log(0.0)
			, m_v_batt(0.0)
			, m_temp(0.0)
		{
		}
	
		VehicleData::VehicleData(
			const cartesian::Point2 &val0, 
			const cartesian::Point2 &val1, 
			const double &val2, 
			const double &val3, 
			const double &val4, 
			const double &val5, 
			const double &val6, 
			const double &val7, 
			const double &val8
		) :
		    SerializableData(), Visitable()
			, m_position(val0)
			, m_velocity(val1)
			, m_heading(val2)
			, m_absTraveledPath(val3)
			, m_relTraveledPath(val4)
			, m_speed(val5)
			, m_v_log(val6)
			, m_v_batt(val7)
			, m_temp(val8)
		{
		}
	
		VehicleData::VehicleData(const VehicleData &obj) :
		    SerializableData(), Visitable()
			, m_position(obj.m_position)
			, m_velocity(obj.m_velocity)
			, m_heading(obj.m_heading)
			, m_absTraveledPath(obj.m_absTraveledPath)
			, m_relTraveledPath(obj.m_relTraveledPath)
			, m_speed(obj.m_speed)
			, m_v_log(obj.m_v_log)
			, m_v_batt(obj.m_v_batt)
			, m_temp(obj.m_temp)
		{
		}
		
		VehicleData::~VehicleData() {
		}
	
		VehicleData& VehicleData::operator=(const VehicleData &obj) {
			m_position = obj.m_position;
			m_velocity = obj.m_velocity;
			m_heading = obj.m_heading;
			m_absTraveledPath = obj.m_absTraveledPath;
			m_relTraveledPath = obj.m_relTraveledPath;
			m_speed = obj.m_speed;
			m_v_log = obj.m_v_log;
			m_v_batt = obj.m_v_batt;
			m_temp = obj.m_temp;
			return (*this);
		}
	
		int32_t VehicleData::ID() {
			return 39;
		}
	
		const string VehicleData::ShortName() {
			return "VehicleData";
		}
	
		const string VehicleData::LongName() {
			return "automotive.VehicleData";
		}
	
		int32_t VehicleData::getID() const {
			return VehicleData::ID();
		}
	
		const string VehicleData::getShortName() const {
			return VehicleData::ShortName();
		}
	
		const string VehicleData::getLongName() const {
			return VehicleData::LongName();
		}
	
		cartesian::Point2 VehicleData::getPosition() const {
			return m_position;
		}
		
		void VehicleData::setPosition(const cartesian::Point2 &val) {
			m_position = val;
		}
		cartesian::Point2 VehicleData::getVelocity() const {
			return m_velocity;
		}
		
		void VehicleData::setVelocity(const cartesian::Point2 &val) {
			m_velocity = val;
		}
		double VehicleData::getHeading() const {
			return m_heading;
		}
		
		void VehicleData::setHeading(const double &val) {
			m_heading = val;
		}
		double VehicleData::getAbsTraveledPath() const {
			return m_absTraveledPath;
		}
		
		void VehicleData::setAbsTraveledPath(const double &val) {
			m_absTraveledPath = val;
		}
		double VehicleData::getRelTraveledPath() const {
			return m_relTraveledPath;
		}
		
		void VehicleData::setRelTraveledPath(const double &val) {
			m_relTraveledPath = val;
		}
		double VehicleData::getSpeed() const {
			return m_speed;
		}
		
		void VehicleData::setSpeed(const double &val) {
			m_speed = val;
		}
		double VehicleData::getV_log() const {
			return m_v_log;
		}
		
		void VehicleData::setV_log(const double &val) {
			m_v_log = val;
		}
		double VehicleData::getV_batt() const {
			return m_v_batt;
		}
		
		void VehicleData::setV_batt(const double &val) {
			m_v_batt = val;
		}
		double VehicleData::getTemp() const {
			return m_temp;
		}
		
		void VehicleData::setTemp(const double &val) {
			m_temp = val;
		}
	
		void VehicleData::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.visit(CRC32 < CharList<'p', CharList<'o', CharList<'s', CharList<'i', CharList<'t', CharList<'i', CharList<'o', CharList<'n', NullType> > > > > > > >  >::RESULT, 1, "VehicleData.position", "position", m_position);
			v.visit(CRC32 < CharList<'v', CharList<'e', CharList<'l', CharList<'o', CharList<'c', CharList<'i', CharList<'t', CharList<'y', NullType> > > > > > > >  >::RESULT, 2, "VehicleData.velocity", "velocity", m_velocity);
			v.visit(CRC32 < CharList<'h', CharList<'e', CharList<'a', CharList<'d', CharList<'i', CharList<'n', CharList<'g', NullType> > > > > > >  >::RESULT, 3, "VehicleData.heading", "heading", m_heading);
			v.visit(CRC32 < CharList<'a', CharList<'b', CharList<'s', CharList<'T', CharList<'r', CharList<'a', CharList<'v', CharList<'e', CharList<'l', CharList<'e', CharList<'d', CharList<'P', CharList<'a', CharList<'t', CharList<'h', NullType> > > > > > > > > > > > > > >  >::RESULT, 4, "VehicleData.absTraveledPath", "absTraveledPath", m_absTraveledPath);
			v.visit(CRC32 < CharList<'r', CharList<'e', CharList<'l', CharList<'T', CharList<'r', CharList<'a', CharList<'v', CharList<'e', CharList<'l', CharList<'e', CharList<'d', CharList<'P', CharList<'a', CharList<'t', CharList<'h', NullType> > > > > > > > > > > > > > >  >::RESULT, 5, "VehicleData.relTraveledPath", "relTraveledPath", m_relTraveledPath);
			v.visit(CRC32 < CharList<'s', CharList<'p', CharList<'e', CharList<'e', CharList<'d', NullType> > > > >  >::RESULT, 6, "VehicleData.speed", "speed", m_speed);
			v.visit(CRC32 < CharList<'v', CharList<'_', CharList<'l', CharList<'o', CharList<'g', NullType> > > > >  >::RESULT, 7, "VehicleData.v_log", "v_log", m_v_log);
			v.visit(CRC32 < CharList<'v', CharList<'_', CharList<'b', CharList<'a', CharList<'t', CharList<'t', NullType> > > > > >  >::RESULT, 8, "VehicleData.v_batt", "v_batt", m_v_batt);
			v.visit(CRC32 < CharList<'t', CharList<'e', CharList<'m', CharList<'p', NullType> > > >  >::RESULT, 9, "VehicleData.temp", "temp", m_temp);
			v.endVisit();
		}
	
		const string VehicleData::toString() const {
			stringstream s;
	
	
			s << "Position: " << getPosition().toString() << " ";
			s << "Velocity: " << getVelocity().toString() << " ";
			s << "Heading: " << getHeading() << " ";
			s << "AbsTraveledPath: " << getAbsTraveledPath() << " ";
			s << "RelTraveledPath: " << getRelTraveledPath() << " ";
			s << "Speed: " << getSpeed() << " ";
			s << "V_log: " << getV_log() << " ";
			s << "V_batt: " << getV_batt() << " ";
			s << "Temp: " << getTemp() << " ";
	
			return s.str();
		}
	
		ostream& VehicleData::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);
	
			s->write(1,
					m_position);
			s->write(2,
					m_velocity);
			s->write(3,
					m_heading);
			s->write(4,
					m_absTraveledPath);
			s->write(5,
					m_relTraveledPath);
			s->write(6,
					m_speed);
			s->write(7,
					m_v_log);
			s->write(8,
					m_v_batt);
			s->write(9,
					m_temp);
			return out;
		}
	
		istream& VehicleData::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
	
			d->read(1,
					m_position);
			d->read(2,
					m_velocity);
			d->read(3,
					m_heading);
			d->read(4,
					m_absTraveledPath);
			d->read(5,
					m_relTraveledPath);
			d->read(6,
					m_speed);
			d->read(7,
					m_v_log);
			d->read(8,
					m_v_batt);
			d->read(9,
					m_temp);
			return in;
		}
} // automotive
