/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_BUFFER_MEMORYSEGMENT_H
#define ODCORE_DATA_BUFFER_MEMORYSEGMENT_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"

#include "opendavinci/odcore/data/Container.h"

namespace odcore {
	namespace data {
		namespace buffer {
			using namespace std;
			
			class MemorySegment : public odcore::data::SerializableData, public odcore::base::Visitable {
				public:
					MemorySegment();
			
					MemorySegment(
					const odcore::data::Container &val0, 
					const uint32_t &val1, 
					const uint32_t &val2, 
					const uint16_t &val3
					);
			
					virtual ~MemorySegment();
			
					/**
					 * Copy constructor.
					 *
					 * @param obj Reference to an object of this class.
					 */
					MemorySegment(const MemorySegment &obj);
			
					/**
					 * Assignment operator.
					 *
					 * @param obj Reference to an object of this class.
					 * @return Reference to this instance.
					 */
					MemorySegment& operator=(const MemorySegment &obj);
			
				public:
					/**
					 * @return header.
					 */
					odcore::data::Container getHeader() const;
					
					/**
					 * This method sets header.
					 *
					 * @param val Value for header.
					 */
					void setHeader(const odcore::data::Container &val);
				public:
					/**
					 * @return size.
					 */
					uint32_t getSize() const;
					
					/**
					 * This method sets size.
					 *
					 * @param val Value for size.
					 */
					void setSize(const uint32_t &val);
				public:
					/**
					 * @return consumedSize.
					 */
					uint32_t getConsumedSize() const;
					
					/**
					 * This method sets consumedSize.
					 *
					 * @param val Value for consumedSize.
					 */
					void setConsumedSize(const uint32_t &val);
				public:
					/**
					 * @return identifier.
					 */
					uint16_t getIdentifier() const;
					
					/**
					 * This method sets identifier.
					 *
					 * @param val Value for identifier.
					 */
					void setIdentifier(const uint16_t &val);
			
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
					odcore::data::Container m_header;
				private:
					uint32_t m_size;
				private:
					uint32_t m_consumedSize;
				private:
					uint16_t m_identifier;
			
			};
		} // buffer
	} // data
} // odcore

#endif /*ODCORE_DATA_BUFFER_MEMORYSEGMENT_H*/
