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


#include "opendavinci/generated/odcore/data/LogMessage.h"

namespace odcore {
	namespace data {
			using namespace std;
			using namespace odcore::base;
		
		
			LogMessage::LogMessage() :
			    SerializableData(), Visitable()
				, m_logLevel()
				, m_logMessage("")
				, m_componentName("")
			{
			}
		
			LogMessage::LogMessage(
				const LogMessage::LogLevel &val0, 
				const std::string &val1, 
				const std::string &val2
			) :
			    SerializableData(), Visitable()
				, m_logLevel(val0)
				, m_logMessage(val1)
				, m_componentName(val2)
			{
			}
		
			LogMessage::LogMessage(const LogMessage &obj) :
			    SerializableData(), Visitable()
				, m_logLevel(obj.m_logLevel)
				, m_logMessage(obj.m_logMessage)
				, m_componentName(obj.m_componentName)
			{
			}
			
			LogMessage::~LogMessage() {
			}
		
			LogMessage& LogMessage::operator=(const LogMessage &obj) {
				m_logLevel = obj.m_logLevel;
				m_logMessage = obj.m_logMessage;
				m_componentName = obj.m_componentName;
				return (*this);
			}
		
			int32_t LogMessage::ID() {
				return 100;
			}
		
			const string LogMessage::ShortName() {
				return "LogMessage";
			}
		
			const string LogMessage::LongName() {
				return "odcore.data.LogMessage";
			}
		
			int32_t LogMessage::getID() const {
				return LogMessage::ID();
			}
		
			const string LogMessage::getShortName() const {
				return LogMessage::ShortName();
			}
		
			const string LogMessage::getLongName() const {
				return LogMessage::LongName();
			}
		
			LogMessage::LogLevel LogMessage::getLogLevel() const {
				return m_logLevel;
			}
			
			void LogMessage::setLogLevel(const LogMessage::LogLevel &val) {
				m_logLevel = val;
			}
			std::string LogMessage::getLogMessage() const {
				return m_logMessage;
			}
			
			void LogMessage::setLogMessage(const std::string &val) {
				m_logMessage = val;
			}
			std::string LogMessage::getComponentName() const {
				return m_componentName;
			}
			
			void LogMessage::setComponentName(const std::string &val) {
				m_componentName = val;
			}
		
			void LogMessage::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				int32_t int32t_logLevel = m_logLevel;
				v.visit(CRC32 < CharList<'l', CharList<'o', CharList<'g', CharList<'L', CharList<'e', CharList<'v', CharList<'e', CharList<'l', NullType> > > > > > > >  >::RESULT, 1, "LogMessage.logLevel", "logLevel", int32t_logLevel);
				v.visit(CRC32 < CharList<'l', CharList<'o', CharList<'g', CharList<'M', CharList<'e', CharList<'s', CharList<'s', CharList<'a', CharList<'g', CharList<'e', NullType> > > > > > > > > >  >::RESULT, 2, "LogMessage.logMessage", "logMessage", m_logMessage);
				v.visit(CRC32 < CharList<'c', CharList<'o', CharList<'m', CharList<'p', CharList<'o', CharList<'n', CharList<'e', CharList<'n', CharList<'t', CharList<'N', CharList<'a', CharList<'m', CharList<'e', NullType> > > > > > > > > > > > >  >::RESULT, 3, "LogMessage.componentName", "componentName", m_componentName);
				v.endVisit();
			}
		
			const string LogMessage::toString() const {
				stringstream s;
		
		
				switch(getLogLevel()) {
					case WARN :
					s << "LogLevel: LogMessage::WARN (2) ";
					break;
					case INFO :
					s << "LogLevel: LogMessage::INFO (1) ";
					break;
					case NONE :
					s << "LogLevel: LogMessage::NONE (0) ";
					break;
					case DEBUG :
					s << "LogLevel: LogMessage::DEBUG (3) ";
					break;
				}
				s << "LogMessage: " << getLogMessage() << " ";
				s << "ComponentName: " << getComponentName() << " ";
		
				return s.str();
			}
		
			ostream& LogMessage::operator<<(ostream &out) const {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				int32_t int32t_logLevel = m_logLevel;
				s->write(1,
						int32t_logLevel);
				s->write(2,
						m_logMessage);
				s->write(3,
						m_componentName);
				return out;
			}
		
			istream& LogMessage::operator>>(istream &in) {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				int32_t int32t_logLevel = 0;
				d->read(1,
						int32t_logLevel);
				m_logLevel = static_cast<LogMessage::LogLevel>(int32t_logLevel);
				d->read(2,
						m_logMessage);
				d->read(3,
						m_componentName);
				return in;
			}
	} // data
} // odcore
