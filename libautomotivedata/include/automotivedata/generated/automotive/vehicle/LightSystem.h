/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_VEHICLE_LIGHTSYSTEM_H
#define AUTOMOTIVE_VEHICLE_LIGHTSYSTEM_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace automotive {
	namespace vehicle {
		using namespace std;
		
		class LightSystem : public odcore::data::SerializableData, public odcore::base::Visitable {
			public:
				LightSystem();
		
				LightSystem(
				const uint8_t &val0
				);
		
				virtual ~LightSystem();
		
				/**
				 * Copy constructor.
				 *
				 * @param obj Reference to an object of this class.
				 */
				LightSystem(const LightSystem &obj);
		
				/**
				 * Assignment operator.
				 *
				 * @param obj Reference to an object of this class.
				 * @return Reference to this instance.
				 */
				LightSystem& operator=(const LightSystem &obj);
		
			public:
				/**
				 * @return headlights.
				 */
				uint8_t getHeadlights() const;
				
				/**
				 * This method sets headlights.
				 *
				 * @param val Value for headlights.
				 */
				void setHeadlights(const uint8_t &val);
		
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
				uint8_t m_headlights;
		
		};
	} // vehicle
} // automotive

#endif /*AUTOMOTIVE_VEHICLE_LIGHTSYSTEM_H*/
