/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_LOGMESSAGE_H
#define ODCORE_DATA_LOGMESSAGE_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace odcore {
	namespace data {
		using namespace std;
		
		class LogMessage : public odcore::data::SerializableData, public odcore::base::Visitable {
			public:
				enum LogLevel {
					WARN = 2,
					INFO = 1,
					NONE = 0,
					DEBUG = 3,
				};
			public:
				LogMessage();
		
				LogMessage(
				const LogLevel &val0, 
				const std::string &val1, 
				const std::string &val2
				);
		
				virtual ~LogMessage();
		
				/**
				 * Copy constructor.
				 *
				 * @param obj Reference to an object of this class.
				 */
				LogMessage(const LogMessage &obj);
		
				/**
				 * Assignment operator.
				 *
				 * @param obj Reference to an object of this class.
				 * @return Reference to this instance.
				 */
				LogMessage& operator=(const LogMessage &obj);
		
			public:
			public:
				/**
				 * @return logLevel.
				 */
				LogLevel getLogLevel() const;
				
				/**
				 * This method sets logLevel.
				 *
				 * @param val Value for logLevel.
				 */
				void setLogLevel(const LogLevel &val);
			public:
				/**
				 * @return logMessage.
				 */
				std::string getLogMessage() const;
				
				/**
				 * This method sets logMessage.
				 *
				 * @param val Value for logMessage.
				 */
				void setLogMessage(const std::string &val);
			public:
				/**
				 * @return componentName.
				 */
				std::string getComponentName() const;
				
				/**
				 * This method sets componentName.
				 *
				 * @param val Value for componentName.
				 */
				void setComponentName(const std::string &val);
		
			public:
				/**
				 * This method returns the message id.
				 *
				 * @return Message id.
				 */
				static int32_t ID();
		
				/**
				 * This method returns the short message name.
				 *
				 * @return Short message name.
				 */
				static const string ShortName();
		
				/**
				 * This method returns the long message name include package/sub structure.
				 *
				 * @return Long message name.
				 */
				static const string LongName();
		
				/**
				 * This method returns the message id.
				 *
				 * @return Message id.
				 */
				virtual int32_t getID() const;
		
				/**
				 * This method returns the short message name.
				 *
				 * @return Short message name.
				 */
				virtual const string getShortName() const;
		
				/**
				 * This method returns the long message name include package/sub structure.
				 *
				 * @return Long message name.
				 */
				virtual const string getLongName() const;
		
			public:
				virtual void accept(odcore::base::Visitor &v);
		
				virtual ostream& operator<<(ostream &out) const;
				virtual istream& operator>>(istream &in);
		
				virtual const string toString() const;
		
			private:
			private:
				LogLevel m_logLevel;
			private:
				std::string m_logMessage;
			private:
				std::string m_componentName;
		
		};
	} // data
} // odcore

#endif /*ODCORE_DATA_LOGMESSAGE_H*/
