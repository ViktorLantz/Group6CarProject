/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_MODULEDESCRIPTOR_H
#define ODCORE_DATA_DMCP_MODULEDESCRIPTOR_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace odcore {
	namespace data {
		namespace dmcp {
			using namespace std;
			
			class ModuleDescriptor : public odcore::data::SerializableData, public odcore::base::Visitable {
				public:
					ModuleDescriptor();
			
					ModuleDescriptor(
					const std::string &val0, 
					const std::string &val1, 
					const std::string &val2, 
					const float &val3
					);
			
					virtual ~ModuleDescriptor();
			
					/**
					 * Copy constructor.
					 *
					 * @param obj Reference to an object of this class.
					 */
					ModuleDescriptor(const ModuleDescriptor &obj);
			
					/**
					 * Assignment operator.
					 *
					 * @param obj Reference to an object of this class.
					 * @return Reference to this instance.
					 */
					ModuleDescriptor& operator=(const ModuleDescriptor &obj);
			
				public:
					/**
					 * @return name.
					 */
					std::string getName() const;
					
					/**
					 * This method sets name.
					 *
					 * @param val Value for name.
					 */
					void setName(const std::string &val);
				public:
					/**
					 * @return identifier.
					 */
					std::string getIdentifier() const;
					
					/**
					 * This method sets identifier.
					 *
					 * @param val Value for identifier.
					 */
					void setIdentifier(const std::string &val);
				public:
					/**
					 * @return version.
					 */
					std::string getVersion() const;
					
					/**
					 * This method sets version.
					 *
					 * @param val Value for version.
					 */
					void setVersion(const std::string &val);
				public:
					/**
					 * @return frequency.
					 */
					float getFrequency() const;
					
					/**
					 * This method sets frequency.
					 *
					 * @param val Value for frequency.
					 */
					void setFrequency(const float &val);
			
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
					std::string m_name;
				private:
					std::string m_identifier;
				private:
					std::string m_version;
				private:
					float m_frequency;
			
			};
		} // dmcp
	} // data
} // odcore

#endif /*ODCORE_DATA_DMCP_MODULEDESCRIPTOR_H*/
