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


#include "automotivedata/generated/from/opendlv/proxy/reverefh16/VehicleState.h"

namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
					using namespace std;
					using namespace odcore::base;
				
				
					VehicleState::VehicleState() :
					    SerializableData(), Visitable()
						, m_acceleration_x(0.0)
						, m_acceleration_y(0.0)
						, m_yawrate(0.0)
					{
					}
				
					VehicleState::VehicleState(
						const double &val0, 
						const double &val1, 
						const double &val2
					) :
					    SerializableData(), Visitable()
						, m_acceleration_x(val0)
						, m_acceleration_y(val1)
						, m_yawrate(val2)
					{
					}
				
					VehicleState::VehicleState(const VehicleState &obj) :
					    SerializableData(), Visitable()
						, m_acceleration_x(obj.m_acceleration_x)
						, m_acceleration_y(obj.m_acceleration_y)
						, m_yawrate(obj.m_yawrate)
					{
					}
					
					VehicleState::~VehicleState() {
					}
				
					VehicleState& VehicleState::operator=(const VehicleState &obj) {
						m_acceleration_x = obj.m_acceleration_x;
						m_acceleration_y = obj.m_acceleration_y;
						m_yawrate = obj.m_yawrate;
						return (*this);
					}
				
					int32_t VehicleState::ID() {
						return 197;
					}
				
					const string VehicleState::ShortName() {
						return "VehicleState";
					}
				
					const string VehicleState::LongName() {
						return "from.opendlv.proxy.reverefh16.VehicleState";
					}
				
					int32_t VehicleState::getID() const {
						return VehicleState::ID();
					}
				
					const string VehicleState::getShortName() const {
						return VehicleState::ShortName();
					}
				
					const string VehicleState::getLongName() const {
						return VehicleState::LongName();
					}
				
					double VehicleState::getAcceleration_x() const {
						return m_acceleration_x;
					}
					
					void VehicleState::setAcceleration_x(const double &val) {
						m_acceleration_x = val;
					}
					double VehicleState::getAcceleration_y() const {
						return m_acceleration_y;
					}
					
					void VehicleState::setAcceleration_y(const double &val) {
						m_acceleration_y = val;
					}
					double VehicleState::getYawrate() const {
						return m_yawrate;
					}
					
					void VehicleState::setYawrate(const double &val) {
						m_yawrate = val;
					}
				
					void VehicleState::accept(odcore::base::Visitor &v) {
						v.beginVisit();
						v.visit(CRC32 < CharList<'a', CharList<'c', CharList<'c', CharList<'e', CharList<'l', CharList<'e', CharList<'r', CharList<'a', CharList<'t', CharList<'i', CharList<'o', CharList<'n', CharList<'_', CharList<'x', NullType> > > > > > > > > > > > > >  >::RESULT, 1, "VehicleState.acceleration_x", "acceleration_x", m_acceleration_x);
						v.visit(CRC32 < CharList<'a', CharList<'c', CharList<'c', CharList<'e', CharList<'l', CharList<'e', CharList<'r', CharList<'a', CharList<'t', CharList<'i', CharList<'o', CharList<'n', CharList<'_', CharList<'y', NullType> > > > > > > > > > > > > >  >::RESULT, 2, "VehicleState.acceleration_y", "acceleration_y", m_acceleration_y);
						v.visit(CRC32 < CharList<'y', CharList<'a', CharList<'w', CharList<'r', CharList<'a', CharList<'t', CharList<'e', NullType> > > > > > >  >::RESULT, 3, "VehicleState.yawrate", "yawrate", m_yawrate);
						v.endVisit();
					}
				
					const string VehicleState::toString() const {
						stringstream s;
				
				
						s << "Acceleration_x: " << getAcceleration_x() << " ";
						s << "Acceleration_y: " << getAcceleration_y() << " ";
						s << "Yawrate: " << getYawrate() << " ";
				
						return s.str();
					}
				
					ostream& VehicleState::operator<<(ostream &out) const {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Serializer> s = sf.getSerializer(out);
				
						s->write(1,
								m_acceleration_x);
						s->write(2,
								m_acceleration_y);
						s->write(3,
								m_yawrate);
						return out;
					}
				
					istream& VehicleState::operator>>(istream &in) {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
				
						d->read(1,
								m_acceleration_x);
						d->read(2,
								m_acceleration_y);
						d->read(3,
								m_yawrate);
						return in;
					}
			} // reverefh16
		} // proxy
	} // opendlv
} // from
