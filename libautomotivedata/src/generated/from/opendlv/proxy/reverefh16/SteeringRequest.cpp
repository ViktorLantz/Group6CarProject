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


#include "automotivedata/generated/from/opendlv/proxy/reverefh16/SteeringRequest.h"

namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
					using namespace std;
					using namespace odcore::base;
				
				
					SteeringRequest::SteeringRequest() :
					    SerializableData(), Visitable()
						, m_enable_steerreq(false)
						, m_steerreq_rwa(0.0)
						, m_steerreq_deltatrq(0.0)
					{
					}
				
					SteeringRequest::SteeringRequest(
						const bool &val0, 
						const double &val1, 
						const double &val2
					) :
					    SerializableData(), Visitable()
						, m_enable_steerreq(val0)
						, m_steerreq_rwa(val1)
						, m_steerreq_deltatrq(val2)
					{
					}
				
					SteeringRequest::SteeringRequest(const SteeringRequest &obj) :
					    SerializableData(), Visitable()
						, m_enable_steerreq(obj.m_enable_steerreq)
						, m_steerreq_rwa(obj.m_steerreq_rwa)
						, m_steerreq_deltatrq(obj.m_steerreq_deltatrq)
					{
					}
					
					SteeringRequest::~SteeringRequest() {
					}
				
					SteeringRequest& SteeringRequest::operator=(const SteeringRequest &obj) {
						m_enable_steerreq = obj.m_enable_steerreq;
						m_steerreq_rwa = obj.m_steerreq_rwa;
						m_steerreq_deltatrq = obj.m_steerreq_deltatrq;
						return (*this);
					}
				
					int32_t SteeringRequest::ID() {
						return 194;
					}
				
					const string SteeringRequest::ShortName() {
						return "SteeringRequest";
					}
				
					const string SteeringRequest::LongName() {
						return "from.opendlv.proxy.reverefh16.SteeringRequest";
					}
				
					int32_t SteeringRequest::getID() const {
						return SteeringRequest::ID();
					}
				
					const string SteeringRequest::getShortName() const {
						return SteeringRequest::ShortName();
					}
				
					const string SteeringRequest::getLongName() const {
						return SteeringRequest::LongName();
					}
				
					bool SteeringRequest::getEnable_steerreq() const {
						return m_enable_steerreq;
					}
					
					void SteeringRequest::setEnable_steerreq(const bool &val) {
						m_enable_steerreq = val;
					}
					double SteeringRequest::getSteerreq_rwa() const {
						return m_steerreq_rwa;
					}
					
					void SteeringRequest::setSteerreq_rwa(const double &val) {
						m_steerreq_rwa = val;
					}
					double SteeringRequest::getSteerreq_deltatrq() const {
						return m_steerreq_deltatrq;
					}
					
					void SteeringRequest::setSteerreq_deltatrq(const double &val) {
						m_steerreq_deltatrq = val;
					}
				
					void SteeringRequest::accept(odcore::base::Visitor &v) {
						v.beginVisit();
						v.visit(CRC32 < CharList<'e', CharList<'n', CharList<'a', CharList<'b', CharList<'l', CharList<'e', CharList<'_', CharList<'s', CharList<'t', CharList<'e', CharList<'e', CharList<'r', CharList<'r', CharList<'e', CharList<'q', NullType> > > > > > > > > > > > > > >  >::RESULT, 1, "SteeringRequest.enable_steerreq", "enable_steerreq", m_enable_steerreq);
						v.visit(CRC32 < CharList<'s', CharList<'t', CharList<'e', CharList<'e', CharList<'r', CharList<'r', CharList<'e', CharList<'q', CharList<'_', CharList<'r', CharList<'w', CharList<'a', NullType> > > > > > > > > > > >  >::RESULT, 2, "SteeringRequest.steerreq_rwa", "steerreq_rwa", m_steerreq_rwa);
						v.visit(CRC32 < CharList<'s', CharList<'t', CharList<'e', CharList<'e', CharList<'r', CharList<'r', CharList<'e', CharList<'q', CharList<'_', CharList<'d', CharList<'e', CharList<'l', CharList<'t', CharList<'a', CharList<'t', CharList<'r', CharList<'q', NullType> > > > > > > > > > > > > > > > >  >::RESULT, 3, "SteeringRequest.steerreq_deltatrq", "steerreq_deltatrq", m_steerreq_deltatrq);
						v.endVisit();
					}
				
					const string SteeringRequest::toString() const {
						stringstream s;
				
				
						s << "Enable_steerreq: " << getEnable_steerreq() << " ";
						s << "Steerreq_rwa: " << getSteerreq_rwa() << " ";
						s << "Steerreq_deltatrq: " << getSteerreq_deltatrq() << " ";
				
						return s.str();
					}
				
					ostream& SteeringRequest::operator<<(ostream &out) const {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Serializer> s = sf.getSerializer(out);
				
						s->write(1,
								m_enable_steerreq);
						s->write(2,
								m_steerreq_rwa);
						s->write(3,
								m_steerreq_deltatrq);
						return out;
					}
				
					istream& SteeringRequest::operator>>(istream &in) {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
				
						d->read(1,
								m_enable_steerreq);
						d->read(2,
								m_steerreq_rwa);
						d->read(3,
								m_steerreq_deltatrq);
						return in;
					}
			} // reverefh16
		} // proxy
	} // opendlv
} // from
