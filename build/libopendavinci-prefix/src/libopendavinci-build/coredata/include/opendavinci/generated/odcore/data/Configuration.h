/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_CONFIGURATION_H
#define ODCORE_DATA_CONFIGURATION_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"

#include "opendavinci/odcore/base/KeyValueConfiguration.h"

namespace odcore {
	namespace data {
		using namespace std;
		
		class Configuration : public odcore::data::SerializableData, public odcore::base::Visitable {
			public:
				Configuration();
		
				Configuration(
				const odcore::base::KeyValueConfiguration &val0
				);
		
				virtual ~Configuration();
		
				/**
				 * Copy constructor.
				 *
				 * @param obj Reference to an object of this class.
				 */
				Configuration(const Configuration &obj);
		
				/**
				 * Assignment operator.
				 *
				 * @param obj Reference to an object of this class.
				 * @return Reference to this instance.
				 */
				Configuration& operator=(const Configuration &obj);
		
			public:
				/**
				 * @return keyValueConfiguration.
				 */
				odcore::base::KeyValueConfiguration getKeyValueConfiguration() const;
				
				/**
				 * This method sets keyValueConfiguration.
				 *
				 * @param val Value for keyValueConfiguration.
				 */
				void setKeyValueConfiguration(const odcore::base::KeyValueConfiguration &val);
		
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
				odcore::base::KeyValueConfiguration m_keyValueConfiguration;
		
		};
	} // data
} // odcore

#endif /*ODCORE_DATA_CONFIGURATION_H*/
