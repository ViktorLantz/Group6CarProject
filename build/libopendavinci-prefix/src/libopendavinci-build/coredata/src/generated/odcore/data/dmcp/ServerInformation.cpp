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


#include "opendavinci/generated/odcore/data/dmcp/ServerInformation.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
			
				ServerInformation::ServerInformation() :
				    SerializableData(), Visitable()
					, m_IP("")
					, m_port(0)
					, m_managedLevel()
				{
				}
			
				ServerInformation::ServerInformation(
					const std::string &val0, 
					const uint32_t &val1, 
					const ServerInformation::ManagedLevel &val2
				) :
				    SerializableData(), Visitable()
					, m_IP(val0)
					, m_port(val1)
					, m_managedLevel(val2)
				{
				}
			
				ServerInformation::ServerInformation(const ServerInformation &obj) :
				    SerializableData(), Visitable()
					, m_IP(obj.m_IP)
					, m_port(obj.m_port)
					, m_managedLevel(obj.m_managedLevel)
				{
				}
				
				ServerInformation::~ServerInformation() {
				}
			
				ServerInformation& ServerInformation::operator=(const ServerInformation &obj) {
					m_IP = obj.m_IP;
					m_port = obj.m_port;
					m_managedLevel = obj.m_managedLevel;
					return (*this);
				}
			
				int32_t ServerInformation::ID() {
					return 112;
				}
			
				const string ServerInformation::ShortName() {
					return "ServerInformation";
				}
			
				const string ServerInformation::LongName() {
					return "odcore.data.dmcp.ServerInformation";
				}
			
				int32_t ServerInformation::getID() const {
					return ServerInformation::ID();
				}
			
				const string ServerInformation::getShortName() const {
					return ServerInformation::ShortName();
				}
			
				const string ServerInformation::getLongName() const {
					return ServerInformation::LongName();
				}
			
				std::string ServerInformation::getIP() const {
					return m_IP;
				}
				
				void ServerInformation::setIP(const std::string &val) {
					m_IP = val;
				}
				uint32_t ServerInformation::getPort() const {
					return m_port;
				}
				
				void ServerInformation::setPort(const uint32_t &val) {
					m_port = val;
				}
				ServerInformation::ManagedLevel ServerInformation::getManagedLevel() const {
					return m_managedLevel;
				}
				
				void ServerInformation::setManagedLevel(const ServerInformation::ManagedLevel &val) {
					m_managedLevel = val;
				}
			
				void ServerInformation::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					v.visit(CRC32 < CharList<'I', CharList<'P', NullType> >  >::RESULT, 1, "ServerInformation.IP", "IP", m_IP);
					v.visit(CRC32 < CharList<'p', CharList<'o', CharList<'r', CharList<'t', NullType> > > >  >::RESULT, 2, "ServerInformation.port", "port", m_port);
					int32_t int32t_managedLevel = m_managedLevel;
					v.visit(CRC32 < CharList<'m', CharList<'a', CharList<'n', CharList<'a', CharList<'g', CharList<'e', CharList<'d', CharList<'L', CharList<'e', CharList<'v', CharList<'e', CharList<'l', NullType> > > > > > > > > > > >  >::RESULT, 3, "ServerInformation.managedLevel", "managedLevel", int32t_managedLevel);
					v.endVisit();
				}
			
				const string ServerInformation::toString() const {
					stringstream s;
			
			
					s << "IP: " << getIP() << " ";
					s << "Port: " << getPort() << " ";
					switch(getManagedLevel()) {
						case ML_PULSE_TIME_ACK :
						s << "ManagedLevel: ServerInformation::ML_PULSE_TIME_ACK (4) ";
						break;
						case ML_PULSE_SHIFT :
						s << "ManagedLevel: ServerInformation::ML_PULSE_SHIFT (2) ";
						break;
						case ML_NONE :
						s << "ManagedLevel: ServerInformation::ML_NONE (0) ";
						break;
						case ML_PULSE_TIME :
						s << "ManagedLevel: ServerInformation::ML_PULSE_TIME (3) ";
						break;
						case ML_SIMULATION :
						s << "ManagedLevel: ServerInformation::ML_SIMULATION (6) ";
						break;
						case ML_PULSE :
						s << "ManagedLevel: ServerInformation::ML_PULSE (1) ";
						break;
						case ML_SIMULATION_RT :
						s << "ManagedLevel: ServerInformation::ML_SIMULATION_RT (5) ";
						break;
					}
			
					return s.str();
				}
			
				ostream& ServerInformation::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					s->write(1,
							m_IP);
					s->write(2,
							m_port);
					int32_t int32t_managedLevel = m_managedLevel;
					s->write(3,
							int32t_managedLevel);
					return out;
				}
			
				istream& ServerInformation::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					d->read(1,
							m_IP);
					d->read(2,
							m_port);
					int32_t int32t_managedLevel = 0;
					d->read(3,
							int32t_managedLevel);
					m_managedLevel = static_cast<ServerInformation::ManagedLevel>(int32t_managedLevel);
					return in;
				}
		} // dmcp
	} // data
} // odcore
