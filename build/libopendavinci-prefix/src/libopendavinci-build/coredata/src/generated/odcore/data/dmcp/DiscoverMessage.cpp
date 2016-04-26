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


#include "opendavinci/generated/odcore/data/dmcp/DiscoverMessage.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
			
				DiscoverMessage::DiscoverMessage() :
				    SerializableData(), Visitable()
					, m_type()
					, m_serverInformation()
					, m_moduleName("")
				{
				}
			
				DiscoverMessage::DiscoverMessage(
					const DiscoverMessage::Type &val0, 
					const odcore::data::dmcp::ServerInformation &val1, 
					const std::string &val2
				) :
				    SerializableData(), Visitable()
					, m_type(val0)
					, m_serverInformation(val1)
					, m_moduleName(val2)
				{
				}
			
				DiscoverMessage::DiscoverMessage(const DiscoverMessage &obj) :
				    SerializableData(), Visitable()
					, m_type(obj.m_type)
					, m_serverInformation(obj.m_serverInformation)
					, m_moduleName(obj.m_moduleName)
				{
				}
				
				DiscoverMessage::~DiscoverMessage() {
				}
			
				DiscoverMessage& DiscoverMessage::operator=(const DiscoverMessage &obj) {
					m_type = obj.m_type;
					m_serverInformation = obj.m_serverInformation;
					m_moduleName = obj.m_moduleName;
					return (*this);
				}
			
				int32_t DiscoverMessage::ID() {
					return 3;
				}
			
				const string DiscoverMessage::ShortName() {
					return "DiscoverMessage";
				}
			
				const string DiscoverMessage::LongName() {
					return "odcore.data.dmcp.DiscoverMessage";
				}
			
				int32_t DiscoverMessage::getID() const {
					return DiscoverMessage::ID();
				}
			
				const string DiscoverMessage::getShortName() const {
					return DiscoverMessage::ShortName();
				}
			
				const string DiscoverMessage::getLongName() const {
					return DiscoverMessage::LongName();
				}
			
				DiscoverMessage::Type DiscoverMessage::getType() const {
					return m_type;
				}
				
				void DiscoverMessage::setType(const DiscoverMessage::Type &val) {
					m_type = val;
				}
				odcore::data::dmcp::ServerInformation DiscoverMessage::getServerInformation() const {
					return m_serverInformation;
				}
				
				void DiscoverMessage::setServerInformation(const odcore::data::dmcp::ServerInformation &val) {
					m_serverInformation = val;
				}
				std::string DiscoverMessage::getModuleName() const {
					return m_moduleName;
				}
				
				void DiscoverMessage::setModuleName(const std::string &val) {
					m_moduleName = val;
				}
			
				void DiscoverMessage::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					int32_t int32t_type = m_type;
					v.visit(CRC32 < CharList<'t', CharList<'y', CharList<'p', CharList<'e', NullType> > > >  >::RESULT, 1, "DiscoverMessage.type", "type", int32t_type);
					v.visit(CRC32 < CharList<'s', CharList<'e', CharList<'r', CharList<'v', CharList<'e', CharList<'r', CharList<'I', CharList<'n', CharList<'f', CharList<'o', CharList<'r', CharList<'m', CharList<'a', CharList<'t', CharList<'i', CharList<'o', CharList<'n', NullType> > > > > > > > > > > > > > > > >  >::RESULT, 2, "DiscoverMessage.serverInformation", "serverInformation", m_serverInformation);
					v.visit(CRC32 < CharList<'m', CharList<'o', CharList<'d', CharList<'u', CharList<'l', CharList<'e', CharList<'N', CharList<'a', CharList<'m', CharList<'e', NullType> > > > > > > > > >  >::RESULT, 3, "DiscoverMessage.moduleName", "moduleName", m_moduleName);
					v.endVisit();
				}
			
				const string DiscoverMessage::toString() const {
					stringstream s;
			
			
					switch(getType()) {
						case UNDEFINED :
						s << "Type: DiscoverMessage::UNDEFINED (0) ";
						break;
						case RESPONSE :
						s << "Type: DiscoverMessage::RESPONSE (2) ";
						break;
						case DISCOVER :
						s << "Type: DiscoverMessage::DISCOVER (1) ";
						break;
					}
					s << "ServerInformation: " << getServerInformation().toString() << " ";
					s << "ModuleName: " << getModuleName() << " ";
			
					return s.str();
				}
			
				ostream& DiscoverMessage::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					int32_t int32t_type = m_type;
					s->write(1,
							int32t_type);
					s->write(2,
							m_serverInformation);
					s->write(3,
							m_moduleName);
					return out;
				}
			
				istream& DiscoverMessage::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					int32_t int32t_type = 0;
					d->read(1,
							int32t_type);
					m_type = static_cast<DiscoverMessage::Type>(int32t_type);
					d->read(2,
							m_serverInformation);
					d->read(3,
							m_moduleName);
					return in;
				}
		} // dmcp
	} // data
} // odcore
