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


#include "automotivedata/generated/from/opendlv/proxy/reverefh16/Axles.h"

namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
					using namespace std;
					using namespace odcore::base;
				
				
					Axles::Axles() :
					    SerializableData(), Visitable()
						, m_frontaxle1load(0.0)
						, m_driveaxle1load(0.0)
						, m_driveaxle2load(0.0)
					{
					}
				
					Axles::Axles(
						const double &val0, 
						const double &val1, 
						const double &val2
					) :
					    SerializableData(), Visitable()
						, m_frontaxle1load(val0)
						, m_driveaxle1load(val1)
						, m_driveaxle2load(val2)
					{
					}
				
					Axles::Axles(const Axles &obj) :
					    SerializableData(), Visitable()
						, m_frontaxle1load(obj.m_frontaxle1load)
						, m_driveaxle1load(obj.m_driveaxle1load)
						, m_driveaxle2load(obj.m_driveaxle2load)
					{
					}
					
					Axles::~Axles() {
					}
				
					Axles& Axles::operator=(const Axles &obj) {
						m_frontaxle1load = obj.m_frontaxle1load;
						m_driveaxle1load = obj.m_driveaxle1load;
						m_driveaxle2load = obj.m_driveaxle2load;
						return (*this);
					}
				
					int32_t Axles::ID() {
						return 195;
					}
				
					const string Axles::ShortName() {
						return "Axles";
					}
				
					const string Axles::LongName() {
						return "from.opendlv.proxy.reverefh16.Axles";
					}
				
					int32_t Axles::getID() const {
						return Axles::ID();
					}
				
					const string Axles::getShortName() const {
						return Axles::ShortName();
					}
				
					const string Axles::getLongName() const {
						return Axles::LongName();
					}
				
					double Axles::getFrontaxle1load() const {
						return m_frontaxle1load;
					}
					
					void Axles::setFrontaxle1load(const double &val) {
						m_frontaxle1load = val;
					}
					double Axles::getDriveaxle1load() const {
						return m_driveaxle1load;
					}
					
					void Axles::setDriveaxle1load(const double &val) {
						m_driveaxle1load = val;
					}
					double Axles::getDriveaxle2load() const {
						return m_driveaxle2load;
					}
					
					void Axles::setDriveaxle2load(const double &val) {
						m_driveaxle2load = val;
					}
				
					void Axles::accept(odcore::base::Visitor &v) {
						v.beginVisit();
						v.visit(CRC32 < CharList<'f', CharList<'r', CharList<'o', CharList<'n', CharList<'t', CharList<'a', CharList<'x', CharList<'l', CharList<'e', CharList<'1', CharList<'l', CharList<'o', CharList<'a', CharList<'d', NullType> > > > > > > > > > > > > >  >::RESULT, 1, "Axles.frontaxle1load", "frontaxle1load", m_frontaxle1load);
						v.visit(CRC32 < CharList<'d', CharList<'r', CharList<'i', CharList<'v', CharList<'e', CharList<'a', CharList<'x', CharList<'l', CharList<'e', CharList<'1', CharList<'l', CharList<'o', CharList<'a', CharList<'d', NullType> > > > > > > > > > > > > >  >::RESULT, 2, "Axles.driveaxle1load", "driveaxle1load", m_driveaxle1load);
						v.visit(CRC32 < CharList<'d', CharList<'r', CharList<'i', CharList<'v', CharList<'e', CharList<'a', CharList<'x', CharList<'l', CharList<'e', CharList<'2', CharList<'l', CharList<'o', CharList<'a', CharList<'d', NullType> > > > > > > > > > > > > >  >::RESULT, 3, "Axles.driveaxle2load", "driveaxle2load", m_driveaxle2load);
						v.endVisit();
					}
				
					const string Axles::toString() const {
						stringstream s;
				
				
						s << "Frontaxle1load: " << getFrontaxle1load() << " ";
						s << "Driveaxle1load: " << getDriveaxle1load() << " ";
						s << "Driveaxle2load: " << getDriveaxle2load() << " ";
				
						return s.str();
					}
				
					ostream& Axles::operator<<(ostream &out) const {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Serializer> s = sf.getSerializer(out);
				
						s->write(1,
								m_frontaxle1load);
						s->write(2,
								m_driveaxle1load);
						s->write(3,
								m_driveaxle2load);
						return out;
					}
				
					istream& Axles::operator>>(istream &in) {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
				
						d->read(1,
								m_frontaxle1load);
						d->read(2,
								m_driveaxle1load);
						d->read(3,
								m_driveaxle2load);
						return in;
					}
			} // reverefh16
		} // proxy
	} // opendlv
} // from
