/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_MINIATURE_STM32F4CONTROL_H
#define AUTOMOTIVE_MINIATURE_STM32F4CONTROL_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace automotive {
	namespace miniature {
		using namespace std;
		
		class STM32F4Control : public odcore::data::SerializableData, public odcore::base::Visitable {
			public:
				STM32F4Control();
		
				STM32F4Control(
				const uint32_t &val0
				);
		
				virtual ~STM32F4Control();
		
				/**
				 * Copy constructor.
				 *
				 * @param obj Reference to an object of this class.
				 */
				STM32F4Control(const STM32F4Control &obj);
		
				/**
				 * Assignment operator.
				 *
				 * @param obj Reference to an object of this class.
				 * @return Reference to this instance.
				 */
				STM32F4Control& operator=(const STM32F4Control &obj);
		
			public:
				/**
				 * @return dataFeed.
				 */
				uint32_t getDataFeed() const;
				
				/**
				 * This method sets dataFeed.
				 *
				 * @param val Value for dataFeed.
				 */
				void setDataFeed(const uint32_t &val);
		
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
				uint32_t m_dataFeed;
		
		};
	} // miniature
} // automotive

#endif /*AUTOMOTIVE_MINIATURE_STM32F4CONTROL_H*/
