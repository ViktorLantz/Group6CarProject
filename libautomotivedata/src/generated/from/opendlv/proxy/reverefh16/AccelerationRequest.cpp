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


#include "automotivedata/generated/from/opendlv/proxy/reverefh16/AccelerationRequest.h"

namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
					using namespace std;
					using namespace odcore::base;
				
				
					AccelerationRequest::AccelerationRequest() :
					    SerializableData(), Visitable()
						, m_enable_accrequest(false)
						, m_accelerationrequest(0.0)
					{
					}
				
					AccelerationRequest::AccelerationRequest(
						const bool &val0, 
						const double &val1
					) :
					    SerializableData(), Visitable()
						, m_enable_accrequest(val0)
						, m_accelerationrequest(val1)
					{
					}
				
					AccelerationRequest::AccelerationRequest(const AccelerationRequest &obj) :
					    SerializableData(), Visitable()
						, m_enable_accrequest(obj.m_enable_accrequest)
						, m_accelerationrequest(obj.m_accelerationrequest)
					{
					}
					
					AccelerationRequest::~AccelerationRequest() {
					}
				
					AccelerationRequest& AccelerationRequest::operator=(const AccelerationRequest &obj) {
						m_enable_accrequest = obj.m_enable_accrequest;
						m_accelerationrequest = obj.m_accelerationrequest;
						return (*this);
					}
				
					int32_t AccelerationRequest::ID() {
						return 192;
					}
				
					const string AccelerationRequest::ShortName() {
						return "AccelerationRequest";
					}
				
					const string AccelerationRequest::LongName() {
						return "from.opendlv.proxy.reverefh16.AccelerationRequest";
					}
				
					int32_t AccelerationRequest::getID() const {
						return AccelerationRequest::ID();
					}
				
					const string AccelerationRequest::getShortName() const {
						return AccelerationRequest::ShortName();
					}
				
					const string AccelerationRequest::getLongName() const {
						return AccelerationRequest::LongName();
					}
				
					bool AccelerationRequest::getEnable_accrequest() const {
						return m_enable_accrequest;
					}
					
					void AccelerationRequest::setEnable_accrequest(const bool &val) {
						m_enable_accrequest = val;
					}
					double AccelerationRequest::getAccelerationrequest() const {
						return m_accelerationrequest;
					}
					
					void AccelerationRequest::setAccelerationrequest(const double &val) {
						m_accelerationrequest = val;
					}
				
					void AccelerationRequest::accept(odcore::base::Visitor &v) {
						v.beginVisit();
						v.visit(CRC32 < CharList<'e', CharList<'n', CharList<'a', CharList<'b', CharList<'l', CharList<'e', CharList<'_', CharList<'a', CharList<'c', CharList<'c', CharList<'r', CharList<'e', CharList<'q', CharList<'u', CharList<'e', CharList<'s', CharList<'t', NullType> > > > > > > > > > > > > > > > >  >::RESULT, 1, "AccelerationRequest.enable_accrequest", "enable_accrequest", m_enable_accrequest);
						v.visit(CRC32 < CharList<'a', CharList<'c', CharList<'c', CharList<'e', CharList<'l', CharList<'e', CharList<'r', CharList<'a', CharList<'t', CharList<'i', CharList<'o', CharList<'n', CharList<'r', CharList<'e', CharList<'q', CharList<'u', CharList<'e', CharList<'s', CharList<'t', NullType> > > > > > > > > > > > > > > > > > >  >::RESULT, 2, "AccelerationRequest.accelerationrequest", "accelerationrequest", m_accelerationrequest);
						v.endVisit();
					}
				
					const string AccelerationRequest::toString() const {
						stringstream s;
				
				
						s << "Enable_accrequest: " << getEnable_accrequest() << " ";
						s << "Accelerationrequest: " << getAccelerationrequest() << " ";
				
						return s.str();
					}
				
					ostream& AccelerationRequest::operator<<(ostream &out) const {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Serializer> s = sf.getSerializer(out);
				
						s->write(1,
								m_enable_accrequest);
						s->write(2,
								m_accelerationrequest);
						return out;
					}
				
					istream& AccelerationRequest::operator>>(istream &in) {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
				
						d->read(1,
								m_enable_accrequest);
						d->read(2,
								m_accelerationrequest);
						return in;
					}
			} // reverefh16
		} // proxy
	} // opendlv
} // from
