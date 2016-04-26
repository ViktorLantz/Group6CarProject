/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_SERVERINFORMATION_H
#define ODCORE_DATA_DMCP_SERVERINFORMATION_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace odcore {
	namespace data {
		namespace dmcp {
			using namespace std;
			
			class ServerInformation : public odcore::data::SerializableData, public odcore::base::Visitable {
				public:
					enum ManagedLevel {
						ML_PULSE_TIME_ACK = 4,
						ML_PULSE_SHIFT = 2,
						ML_NONE = 0,
						ML_PULSE_TIME = 3,
						ML_SIMULATION = 6,
						ML_PULSE = 1,
						ML_SIMULATION_RT = 5,
					};
				public:
					ServerInformation();
			
					ServerInformation(
					const std::string &val0, 
					const uint32_t &val1, 
					const ManagedLevel &val2
					);
			
					virtual ~ServerInformation();
			
					/**
					 * Copy constructor.
					 *
					 * @param obj Reference to an object of this class.
					 */
					ServerInformation(const ServerInformation &obj);
			
					/**
					 * Assignment operator.
					 *
					 * @param obj Reference to an object of this class.
					 * @return Reference to this instance.
					 */
					ServerInformation& operator=(const ServerInformation &obj);
			
				public:
				public:
					/**
					 * @return IP.
					 */
					std::string getIP() const;
					
					/**
					 * This method sets IP.
					 *
					 * @param val Value for IP.
					 */
					void setIP(const std::string &val);
				public:
					/**
					 * @return port.
					 */
					uint32_t getPort() const;
					
					/**
					 * This method sets port.
					 *
					 * @param val Value for port.
					 */
					void setPort(const uint32_t &val);
				public:
					/**
					 * @return managedLevel.
					 */
					ManagedLevel getManagedLevel() const;
					
					/**
					 * This method sets managedLevel.
					 *
					 * @param val Value for managedLevel.
					 */
					void setManagedLevel(const ManagedLevel &val);
			
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
					std::string m_IP;
				private:
					uint32_t m_port;
				private:
					ManagedLevel m_managedLevel;
			
			};
		} // dmcp
	} // data
} // odcore

#endif /*ODCORE_DATA_DMCP_SERVERINFORMATION_H*/
