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


#include "automotivedata/generated/from/opendlv/proxy/reverefh16/Propulsion.h"

namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
					using namespace std;
					using namespace odcore::base;
				
				
					Propulsion::Propulsion() :
					    SerializableData(), Visitable()
						, m_vehiclespeedpropshaft(0.0)
					{
					}
				
					Propulsion::Propulsion(
						const double &val0
					) :
					    SerializableData(), Visitable()
						, m_vehiclespeedpropshaft(val0)
					{
					}
				
					Propulsion::Propulsion(const Propulsion &obj) :
					    SerializableData(), Visitable()
						, m_vehiclespeedpropshaft(obj.m_vehiclespeedpropshaft)
					{
					}
					
					Propulsion::~Propulsion() {
					}
				
					Propulsion& Propulsion::operator=(const Propulsion &obj) {
						m_vehiclespeedpropshaft = obj.m_vehiclespeedpropshaft;
						return (*this);
					}
				
					int32_t Propulsion::ID() {
						return 196;
					}
				
					const string Propulsion::ShortName() {
						return "Propulsion";
					}
				
					const string Propulsion::LongName() {
						return "from.opendlv.proxy.reverefh16.Propulsion";
					}
				
					int32_t Propulsion::getID() const {
						return Propulsion::ID();
					}
				
					const string Propulsion::getShortName() const {
						return Propulsion::ShortName();
					}
				
					const string Propulsion::getLongName() const {
						return Propulsion::LongName();
					}
				
					double Propulsion::getVehiclespeedpropshaft() const {
						return m_vehiclespeedpropshaft;
					}
					
					void Propulsion::setVehiclespeedpropshaft(const double &val) {
						m_vehiclespeedpropshaft = val;
					}
				
					void Propulsion::accept(odcore::base::Visitor &v) {
						v.beginVisit();
						v.visit(CRC32 < CharList<'v', CharList<'e', CharList<'h', CharList<'i', CharList<'c', CharList<'l', CharList<'e', CharList<'s', CharList<'p', CharList<'e', CharList<'e', CharList<'d', CharList<'p', CharList<'r', CharList<'o', CharList<'p', CharList<'s', CharList<'h', CharList<'a', CharList<'f', CharList<'t', NullType> > > > > > > > > > > > > > > > > > > > >  >::RESULT, 1, "Propulsion.vehiclespeedpropshaft", "vehiclespeedpropshaft", m_vehiclespeedpropshaft);
						v.endVisit();
					}
				
					const string Propulsion::toString() const {
						stringstream s;
				
				
						s << "Vehiclespeedpropshaft: " << getVehiclespeedpropshaft() << " ";
				
						return s.str();
					}
				
					ostream& Propulsion::operator<<(ostream &out) const {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Serializer> s = sf.getSerializer(out);
				
						s->write(1,
								m_vehiclespeedpropshaft);
						return out;
					}
				
					istream& Propulsion::operator>>(istream &in) {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
				
						d->read(1,
								m_vehiclespeedpropshaft);
						return in;
					}
			} // reverefh16
		} // proxy
	} // opendlv
} // from
