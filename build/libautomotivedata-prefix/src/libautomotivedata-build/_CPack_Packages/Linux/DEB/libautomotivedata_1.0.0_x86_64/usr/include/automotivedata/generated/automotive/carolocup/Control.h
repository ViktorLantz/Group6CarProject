/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_CAROLOCUP_CONTROL_H
#define AUTOMOTIVE_CAROLOCUP_CONTROL_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace automotive {
	namespace carolocup {
		using namespace std;
		
		class Control : public odcore::data::SerializableData, public odcore::base::Visitable {
			public:
				Control();
		
				Control(
				const uint32_t &val0, 
				const uint32_t &val1, 
				const uint32_t &val2, 
				const uint32_t &val3
				);
		
				virtual ~Control();
		
				/**
				 * Copy constructor.
				 *
				 * @param obj Reference to an object of this class.
				 */
				Control(const Control &obj);
		
				/**
				 * Assignment operator.
				 *
				 * @param obj Reference to an object of this class.
				 * @return Reference to this instance.
				 */
				Control& operator=(const Control &obj);
		
			public:
				/**
				 * @return steering.
				 */
				uint32_t getSteering() const;
				
				/**
				 * This method sets steering.
				 *
				 * @param val Value for steering.
				 */
				void setSteering(const uint32_t &val);
			public:
				/**
				 * @return speed.
				 */
				uint32_t getSpeed() const;
				
				/**
				 * This method sets speed.
				 *
				 * @param val Value for speed.
				 */
				void setSpeed(const uint32_t &val);
			public:
				/**
				 * @return lights.
				 */
				uint32_t getLights() const;
				
				/**
				 * This method sets lights.
				 *
				 * @param val Value for lights.
				 */
				void setLights(const uint32_t &val);
			public:
				/**
				 * @return gyroTrigger.
				 */
				uint32_t getGyroTrigger() const;
				
				/**
				 * This method sets gyroTrigger.
				 *
				 * @param val Value for gyroTrigger.
				 */
				void setGyroTrigger(const uint32_t &val);
		
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
				uint32_t m_steering;
			private:
				uint32_t m_speed;
			private:
				uint32_t m_lights;
			private:
				uint32_t m_gyroTrigger;
		
		};
	} // carolocup
} // automotive

#endif /*AUTOMOTIVE_CAROLOCUP_CONTROL_H*/
