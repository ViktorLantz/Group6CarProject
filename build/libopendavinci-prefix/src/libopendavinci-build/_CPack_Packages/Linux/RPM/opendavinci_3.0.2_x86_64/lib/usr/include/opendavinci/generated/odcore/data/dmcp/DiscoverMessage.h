/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_DISCOVERMESSAGE_H
#define ODCORE_DATA_DMCP_DISCOVERMESSAGE_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"

#include "opendavinci/generated/odcore/data/dmcp/ServerInformation.h"

namespace odcore {
	namespace data {
		namespace dmcp {
			using namespace std;
			
			class DiscoverMessage : public odcore::data::SerializableData, public odcore::base::Visitable {
				public:
					enum Type {
						UNDEFINED = 0,
						RESPONSE = 2,
						DISCOVER = 1,
					};
				public:
					DiscoverMessage();
			
					DiscoverMessage(
					const Type &val0, 
					const odcore::data::dmcp::ServerInformation &val1, 
					const std::string &val2
					);
			
					virtual ~DiscoverMessage();
			
					/**
					 * Copy constructor.
					 *
					 * @param obj Reference to an object of this class.
					 */
					DiscoverMessage(const DiscoverMessage &obj);
			
					/**
					 * Assignment operator.
					 *
					 * @param obj Reference to an object of this class.
					 * @return Reference to this instance.
					 */
					DiscoverMessage& operator=(const DiscoverMessage &obj);
			
				public:
				public:
					/**
					 * @return type.
					 */
					Type getType() const;
					
					/**
					 * This method sets type.
					 *
					 * @param val Value for type.
					 */
					void setType(const Type &val);
				public:
					/**
					 * @return serverInformation.
					 */
					odcore::data::dmcp::ServerInformation getServerInformation() const;
					
					/**
					 * This method sets serverInformation.
					 *
					 * @param val Value for serverInformation.
					 */
					void setServerInformation(const odcore::data::dmcp::ServerInformation &val);
				public:
					/**
					 * @return moduleName.
					 */
					std::string getModuleName() const;
					
					/**
					 * This method sets moduleName.
					 *
					 * @param val Value for moduleName.
					 */
					void setModuleName(const std::string &val);
			
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
					Type m_type;
				private:
					odcore::data::dmcp::ServerInformation m_serverInformation;
				private:
					std::string m_moduleName;
			
			};
		} // dmcp
	} // data
} // odcore

#endif /*ODCORE_DATA_DMCP_DISCOVERMESSAGE_H*/
