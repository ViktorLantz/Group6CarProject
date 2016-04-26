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


#include "automotivedata/generated/from/opendlv/proxy/reverefh16/Wheels.h"

namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
					using namespace std;
					using namespace odcore::base;
				
				
					Wheels::Wheels() :
					    SerializableData(), Visitable()
						, m_frontaxle1wheelspeedleft(0.0)
						, m_frontaxle1wheelspeedright(0.0)
						, m_driveaxle1wheelspeedleft(0.0)
						, m_driveaxle1wheelspeedright(0.0)
						, m_driveaxle2wheelspeedleft(0.0)
						, m_driveaxle2wheelspeedright(0.0)
					{
					}
				
					Wheels::Wheels(
						const double &val0, 
						const double &val1, 
						const double &val2, 
						const double &val3, 
						const double &val4, 
						const double &val5
					) :
					    SerializableData(), Visitable()
						, m_frontaxle1wheelspeedleft(val0)
						, m_frontaxle1wheelspeedright(val1)
						, m_driveaxle1wheelspeedleft(val2)
						, m_driveaxle1wheelspeedright(val3)
						, m_driveaxle2wheelspeedleft(val4)
						, m_driveaxle2wheelspeedright(val5)
					{
					}
				
					Wheels::Wheels(const Wheels &obj) :
					    SerializableData(), Visitable()
						, m_frontaxle1wheelspeedleft(obj.m_frontaxle1wheelspeedleft)
						, m_frontaxle1wheelspeedright(obj.m_frontaxle1wheelspeedright)
						, m_driveaxle1wheelspeedleft(obj.m_driveaxle1wheelspeedleft)
						, m_driveaxle1wheelspeedright(obj.m_driveaxle1wheelspeedright)
						, m_driveaxle2wheelspeedleft(obj.m_driveaxle2wheelspeedleft)
						, m_driveaxle2wheelspeedright(obj.m_driveaxle2wheelspeedright)
					{
					}
					
					Wheels::~Wheels() {
					}
				
					Wheels& Wheels::operator=(const Wheels &obj) {
						m_frontaxle1wheelspeedleft = obj.m_frontaxle1wheelspeedleft;
						m_frontaxle1wheelspeedright = obj.m_frontaxle1wheelspeedright;
						m_driveaxle1wheelspeedleft = obj.m_driveaxle1wheelspeedleft;
						m_driveaxle1wheelspeedright = obj.m_driveaxle1wheelspeedright;
						m_driveaxle2wheelspeedleft = obj.m_driveaxle2wheelspeedleft;
						m_driveaxle2wheelspeedright = obj.m_driveaxle2wheelspeedright;
						return (*this);
					}
				
					int32_t Wheels::ID() {
						return 198;
					}
				
					const string Wheels::ShortName() {
						return "Wheels";
					}
				
					const string Wheels::LongName() {
						return "from.opendlv.proxy.reverefh16.Wheels";
					}
				
					int32_t Wheels::getID() const {
						return Wheels::ID();
					}
				
					const string Wheels::getShortName() const {
						return Wheels::ShortName();
					}
				
					const string Wheels::getLongName() const {
						return Wheels::LongName();
					}
				
					double Wheels::getFrontaxle1wheelspeedleft() const {
						return m_frontaxle1wheelspeedleft;
					}
					
					void Wheels::setFrontaxle1wheelspeedleft(const double &val) {
						m_frontaxle1wheelspeedleft = val;
					}
					double Wheels::getFrontaxle1wheelspeedright() const {
						return m_frontaxle1wheelspeedright;
					}
					
					void Wheels::setFrontaxle1wheelspeedright(const double &val) {
						m_frontaxle1wheelspeedright = val;
					}
					double Wheels::getDriveaxle1wheelspeedleft() const {
						return m_driveaxle1wheelspeedleft;
					}
					
					void Wheels::setDriveaxle1wheelspeedleft(const double &val) {
						m_driveaxle1wheelspeedleft = val;
					}
					double Wheels::getDriveaxle1wheelspeedright() const {
						return m_driveaxle1wheelspeedright;
					}
					
					void Wheels::setDriveaxle1wheelspeedright(const double &val) {
						m_driveaxle1wheelspeedright = val;
					}
					double Wheels::getDriveaxle2wheelspeedleft() const {
						return m_driveaxle2wheelspeedleft;
					}
					
					void Wheels::setDriveaxle2wheelspeedleft(const double &val) {
						m_driveaxle2wheelspeedleft = val;
					}
					double Wheels::getDriveaxle2wheelspeedright() const {
						return m_driveaxle2wheelspeedright;
					}
					
					void Wheels::setDriveaxle2wheelspeedright(const double &val) {
						m_driveaxle2wheelspeedright = val;
					}
				
					void Wheels::accept(odcore::base::Visitor &v) {
						v.beginVisit();
						v.visit(CRC32 < CharList<'f', CharList<'r', CharList<'o', CharList<'n', CharList<'t', CharList<'a', CharList<'x', CharList<'l', CharList<'e', CharList<'1', CharList<'w', CharList<'h', CharList<'e', CharList<'e', CharList<'l', CharList<'s', CharList<'p', CharList<'e', CharList<'e', CharList<'d', CharList<'l', CharList<'e', CharList<'f', CharList<'t', NullType> > > > > > > > > > > > > > > > > > > > > > > >  >::RESULT, 1, "Wheels.frontaxle1wheelspeedleft", "frontaxle1wheelspeedleft", m_frontaxle1wheelspeedleft);
						v.visit(CRC32 < CharList<'f', CharList<'r', CharList<'o', CharList<'n', CharList<'t', CharList<'a', CharList<'x', CharList<'l', CharList<'e', CharList<'1', CharList<'w', CharList<'h', CharList<'e', CharList<'e', CharList<'l', CharList<'s', CharList<'p', CharList<'e', CharList<'e', CharList<'d', CharList<'r', CharList<'i', CharList<'g', CharList<'h', CharList<'t', NullType> > > > > > > > > > > > > > > > > > > > > > > > >  >::RESULT, 2, "Wheels.frontaxle1wheelspeedright", "frontaxle1wheelspeedright", m_frontaxle1wheelspeedright);
						v.visit(CRC32 < CharList<'d', CharList<'r', CharList<'i', CharList<'v', CharList<'e', CharList<'a', CharList<'x', CharList<'l', CharList<'e', CharList<'1', CharList<'w', CharList<'h', CharList<'e', CharList<'e', CharList<'l', CharList<'s', CharList<'p', CharList<'e', CharList<'e', CharList<'d', CharList<'l', CharList<'e', CharList<'f', CharList<'t', NullType> > > > > > > > > > > > > > > > > > > > > > > >  >::RESULT, 3, "Wheels.driveaxle1wheelspeedleft", "driveaxle1wheelspeedleft", m_driveaxle1wheelspeedleft);
						v.visit(CRC32 < CharList<'d', CharList<'r', CharList<'i', CharList<'v', CharList<'e', CharList<'a', CharList<'x', CharList<'l', CharList<'e', CharList<'1', CharList<'w', CharList<'h', CharList<'e', CharList<'e', CharList<'l', CharList<'s', CharList<'p', CharList<'e', CharList<'e', CharList<'d', CharList<'r', CharList<'i', CharList<'g', CharList<'h', CharList<'t', NullType> > > > > > > > > > > > > > > > > > > > > > > > >  >::RESULT, 4, "Wheels.driveaxle1wheelspeedright", "driveaxle1wheelspeedright", m_driveaxle1wheelspeedright);
						v.visit(CRC32 < CharList<'d', CharList<'r', CharList<'i', CharList<'v', CharList<'e', CharList<'a', CharList<'x', CharList<'l', CharList<'e', CharList<'2', CharList<'w', CharList<'h', CharList<'e', CharList<'e', CharList<'l', CharList<'s', CharList<'p', CharList<'e', CharList<'e', CharList<'d', CharList<'l', CharList<'e', CharList<'f', CharList<'t', NullType> > > > > > > > > > > > > > > > > > > > > > > >  >::RESULT, 5, "Wheels.driveaxle2wheelspeedleft", "driveaxle2wheelspeedleft", m_driveaxle2wheelspeedleft);
						v.visit(CRC32 < CharList<'d', CharList<'r', CharList<'i', CharList<'v', CharList<'e', CharList<'a', CharList<'x', CharList<'l', CharList<'e', CharList<'2', CharList<'w', CharList<'h', CharList<'e', CharList<'e', CharList<'l', CharList<'s', CharList<'p', CharList<'e', CharList<'e', CharList<'d', CharList<'r', CharList<'i', CharList<'g', CharList<'h', CharList<'t', NullType> > > > > > > > > > > > > > > > > > > > > > > > >  >::RESULT, 6, "Wheels.driveaxle2wheelspeedright", "driveaxle2wheelspeedright", m_driveaxle2wheelspeedright);
						v.endVisit();
					}
				
					const string Wheels::toString() const {
						stringstream s;
				
				
						s << "Frontaxle1wheelspeedleft: " << getFrontaxle1wheelspeedleft() << " ";
						s << "Frontaxle1wheelspeedright: " << getFrontaxle1wheelspeedright() << " ";
						s << "Driveaxle1wheelspeedleft: " << getDriveaxle1wheelspeedleft() << " ";
						s << "Driveaxle1wheelspeedright: " << getDriveaxle1wheelspeedright() << " ";
						s << "Driveaxle2wheelspeedleft: " << getDriveaxle2wheelspeedleft() << " ";
						s << "Driveaxle2wheelspeedright: " << getDriveaxle2wheelspeedright() << " ";
				
						return s.str();
					}
				
					ostream& Wheels::operator<<(ostream &out) const {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Serializer> s = sf.getSerializer(out);
				
						s->write(1,
								m_frontaxle1wheelspeedleft);
						s->write(2,
								m_frontaxle1wheelspeedright);
						s->write(3,
								m_driveaxle1wheelspeedleft);
						s->write(4,
								m_driveaxle1wheelspeedright);
						s->write(5,
								m_driveaxle2wheelspeedleft);
						s->write(6,
								m_driveaxle2wheelspeedright);
						return out;
					}
				
					istream& Wheels::operator>>(istream &in) {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
				
						d->read(1,
								m_frontaxle1wheelspeedleft);
						d->read(2,
								m_frontaxle1wheelspeedright);
						d->read(3,
								m_driveaxle1wheelspeedleft);
						d->read(4,
								m_driveaxle1wheelspeedright);
						d->read(5,
								m_driveaxle2wheelspeedleft);
						d->read(6,
								m_driveaxle2wheelspeedright);
						return in;
					}
			} // reverefh16
		} // proxy
	} // opendlv
} // from
