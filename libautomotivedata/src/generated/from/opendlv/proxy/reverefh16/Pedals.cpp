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


#include "automotivedata/generated/from/opendlv/proxy/reverefh16/Pedals.h"

namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
					using namespace std;
					using namespace odcore::base;
				
				
					Pedals::Pedals() :
					    SerializableData(), Visitable()
						, m_accelerationpedalposition(0.0)
						, m_brakepedalposition(0.0)
						, m_torsionbartorque(0.0)
					{
					}
				
					Pedals::Pedals(
						const double &val0, 
						const double &val1, 
						const double &val2
					) :
					    SerializableData(), Visitable()
						, m_accelerationpedalposition(val0)
						, m_brakepedalposition(val1)
						, m_torsionbartorque(val2)
					{
					}
				
					Pedals::Pedals(const Pedals &obj) :
					    SerializableData(), Visitable()
						, m_accelerationpedalposition(obj.m_accelerationpedalposition)
						, m_brakepedalposition(obj.m_brakepedalposition)
						, m_torsionbartorque(obj.m_torsionbartorque)
					{
					}
					
					Pedals::~Pedals() {
					}
				
					Pedals& Pedals::operator=(const Pedals &obj) {
						m_accelerationpedalposition = obj.m_accelerationpedalposition;
						m_brakepedalposition = obj.m_brakepedalposition;
						m_torsionbartorque = obj.m_torsionbartorque;
						return (*this);
					}
				
					int32_t Pedals::ID() {
						return 191;
					}
				
					const string Pedals::ShortName() {
						return "Pedals";
					}
				
					const string Pedals::LongName() {
						return "from.opendlv.proxy.reverefh16.Pedals";
					}
				
					int32_t Pedals::getID() const {
						return Pedals::ID();
					}
				
					const string Pedals::getShortName() const {
						return Pedals::ShortName();
					}
				
					const string Pedals::getLongName() const {
						return Pedals::LongName();
					}
				
					double Pedals::getAccelerationpedalposition() const {
						return m_accelerationpedalposition;
					}
					
					void Pedals::setAccelerationpedalposition(const double &val) {
						m_accelerationpedalposition = val;
					}
					double Pedals::getBrakepedalposition() const {
						return m_brakepedalposition;
					}
					
					void Pedals::setBrakepedalposition(const double &val) {
						m_brakepedalposition = val;
					}
					double Pedals::getTorsionbartorque() const {
						return m_torsionbartorque;
					}
					
					void Pedals::setTorsionbartorque(const double &val) {
						m_torsionbartorque = val;
					}
				
					void Pedals::accept(odcore::base::Visitor &v) {
						v.beginVisit();
						v.visit(CRC32 < CharList<'a', CharList<'c', CharList<'c', CharList<'e', CharList<'l', CharList<'e', CharList<'r', CharList<'a', CharList<'t', CharList<'i', CharList<'o', CharList<'n', CharList<'p', CharList<'e', CharList<'d', CharList<'a', CharList<'l', CharList<'p', CharList<'o', CharList<'s', CharList<'i', CharList<'t', CharList<'i', CharList<'o', CharList<'n', NullType> > > > > > > > > > > > > > > > > > > > > > > > >  >::RESULT, 1, "Pedals.accelerationpedalposition", "accelerationpedalposition", m_accelerationpedalposition);
						v.visit(CRC32 < CharList<'b', CharList<'r', CharList<'a', CharList<'k', CharList<'e', CharList<'p', CharList<'e', CharList<'d', CharList<'a', CharList<'l', CharList<'p', CharList<'o', CharList<'s', CharList<'i', CharList<'t', CharList<'i', CharList<'o', CharList<'n', NullType> > > > > > > > > > > > > > > > > >  >::RESULT, 2, "Pedals.brakepedalposition", "brakepedalposition", m_brakepedalposition);
						v.visit(CRC32 < CharList<'t', CharList<'o', CharList<'r', CharList<'s', CharList<'i', CharList<'o', CharList<'n', CharList<'b', CharList<'a', CharList<'r', CharList<'t', CharList<'o', CharList<'r', CharList<'q', CharList<'u', CharList<'e', NullType> > > > > > > > > > > > > > > >  >::RESULT, 3, "Pedals.torsionbartorque", "torsionbartorque", m_torsionbartorque);
						v.endVisit();
					}
				
					const string Pedals::toString() const {
						stringstream s;
				
				
						s << "Accelerationpedalposition: " << getAccelerationpedalposition() << " ";
						s << "Brakepedalposition: " << getBrakepedalposition() << " ";
						s << "Torsionbartorque: " << getTorsionbartorque() << " ";
				
						return s.str();
					}
				
					ostream& Pedals::operator<<(ostream &out) const {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Serializer> s = sf.getSerializer(out);
				
						s->write(1,
								m_accelerationpedalposition);
						s->write(2,
								m_brakepedalposition);
						s->write(3,
								m_torsionbartorque);
						return out;
					}
				
					istream& Pedals::operator>>(istream &in) {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
				
						d->read(1,
								m_accelerationpedalposition);
						d->read(2,
								m_brakepedalposition);
						d->read(3,
								m_torsionbartorque);
						return in;
					}
			} // reverefh16
		} // proxy
	} // opendlv
} // from
