/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_GENERICCANMESSAGE_H
#define AUTOMOTIVE_GENERICCANMESSAGE_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"

#include "opendavinci/odcore/data/TimeStamp.h"

namespace automotive {
	using namespace std;
	
	class GenericCANMessage : public odcore::data::SerializableData, public odcore::base::Visitable {
		public:
			GenericCANMessage();
	
			GenericCANMessage(
			const odcore::data::TimeStamp &val0, 
			const uint64_t &val1, 
			const uint8_t &val2, 
			const uint64_t &val3
			);
	
			virtual ~GenericCANMessage();
	
			/**
			 * Copy constructor.
			 *
			 * @param obj Reference to an object of this class.
			 */
			GenericCANMessage(const GenericCANMessage &obj);
	
			/**
			 * Assignment operator.
			 *
			 * @param obj Reference to an object of this class.
			 * @return Reference to this instance.
			 */
			GenericCANMessage& operator=(const GenericCANMessage &obj);
	
		public:
			/**
			 * @return driverTimeStamp.
			 */
			odcore::data::TimeStamp getDriverTimeStamp() const;
			
			/**
			 * This method sets driverTimeStamp.
			 *
			 * @param val Value for driverTimeStamp.
			 */
			void setDriverTimeStamp(const odcore::data::TimeStamp &val);
		public:
			/**
			 * @return identifier.
			 */
			uint64_t getIdentifier() const;
			
			/**
			 * This method sets identifier.
			 *
			 * @param val Value for identifier.
			 */
			void setIdentifier(const uint64_t &val);
		public:
			/**
			 * @return length.
			 */
			uint8_t getLength() const;
			
			/**
			 * This method sets length.
			 *
			 * @param val Value for length.
			 */
			void setLength(const uint8_t &val);
		public:
			/**
			 * @return data.
			 */
			uint64_t getData() const;
			
			/**
			 * This method sets data.
			 *
			 * @param val Value for data.
			 */
			void setData(const uint64_t &val);
	
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
			odcore::data::TimeStamp m_driverTimeStamp;
		private:
			uint64_t m_identifier;
		private:
			uint8_t m_length;
		private:
			uint64_t m_data;
	
	};
} // automotive

#endif /*AUTOMOTIVE_GENERICCANMESSAGE_H*/
