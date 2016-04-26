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


#include "automotivedata/generated/from/opendlv/proxy/reverefh16/BrakeRequest.h"

namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
					using namespace std;
					using namespace odcore::base;
				
				
					BrakeRequest::BrakeRequest() :
					    SerializableData(), Visitable()
						, m_enable_brakerequest(false)
						, m_brakerequest(0.0)
					{
					}
				
					BrakeRequest::BrakeRequest(
						const bool &val0, 
						const double &val1
					) :
					    SerializableData(), Visitable()
						, m_enable_brakerequest(val0)
						, m_brakerequest(val1)
					{
					}
				
					BrakeRequest::BrakeRequest(const BrakeRequest &obj) :
					    SerializableData(), Visitable()
						, m_enable_brakerequest(obj.m_enable_brakerequest)
						, m_brakerequest(obj.m_brakerequest)
					{
					}
					
					BrakeRequest::~BrakeRequest() {
					}
				
					BrakeRequest& BrakeRequest::operator=(const BrakeRequest &obj) {
						m_enable_brakerequest = obj.m_enable_brakerequest;
						m_brakerequest = obj.m_brakerequest;
						return (*this);
					}
				
					int32_t BrakeRequest::ID() {
						return 193;
					}
				
					const string BrakeRequest::ShortName() {
						return "BrakeRequest";
					}
				
					const string BrakeRequest::LongName() {
						return "from.opendlv.proxy.reverefh16.BrakeRequest";
					}
				
					int32_t BrakeRequest::getID() const {
						return BrakeRequest::ID();
					}
				
					const string BrakeRequest::getShortName() const {
						return BrakeRequest::ShortName();
					}
				
					const string BrakeRequest::getLongName() const {
						return BrakeRequest::LongName();
					}
				
					bool BrakeRequest::getEnable_brakerequest() const {
						return m_enable_brakerequest;
					}
					
					void BrakeRequest::setEnable_brakerequest(const bool &val) {
						m_enable_brakerequest = val;
					}
					double BrakeRequest::getBrakerequest() const {
						return m_brakerequest;
					}
					
					void BrakeRequest::setBrakerequest(const double &val) {
						m_brakerequest = val;
					}
				
					void BrakeRequest::accept(odcore::base::Visitor &v) {
						v.beginVisit();
						v.visit(CRC32 < CharList<'e', CharList<'n', CharList<'a', CharList<'b', CharList<'l', CharList<'e', CharList<'_', CharList<'b', CharList<'r', CharList<'a', CharList<'k', CharList<'e', CharList<'r', CharList<'e', CharList<'q', CharList<'u', CharList<'e', CharList<'s', CharList<'t', NullType> > > > > > > > > > > > > > > > > > >  >::RESULT, 1, "BrakeRequest.enable_brakerequest", "enable_brakerequest", m_enable_brakerequest);
						v.visit(CRC32 < CharList<'b', CharList<'r', CharList<'a', CharList<'k', CharList<'e', CharList<'r', CharList<'e', CharList<'q', CharList<'u', CharList<'e', CharList<'s', CharList<'t', NullType> > > > > > > > > > > >  >::RESULT, 2, "BrakeRequest.brakerequest", "brakerequest", m_brakerequest);
						v.endVisit();
					}
				
					const string BrakeRequest::toString() const {
						stringstream s;
				
				
						s << "Enable_brakerequest: " << getEnable_brakerequest() << " ";
						s << "Brakerequest: " << getBrakerequest() << " ";
				
						return s.str();
					}
				
					ostream& BrakeRequest::operator<<(ostream &out) const {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Serializer> s = sf.getSerializer(out);
				
						s->write(1,
								m_enable_brakerequest);
						s->write(2,
								m_brakerequest);
						return out;
					}
				
					istream& BrakeRequest::operator>>(istream &in) {
				
						SerializationFactory& sf = SerializationFactory::getInstance();
				
						std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
				
						d->read(1,
								m_enable_brakerequest);
						d->read(2,
								m_brakerequest);
						return in;
					}
			} // reverefh16
		} // proxy
	} // opendlv
} // from
