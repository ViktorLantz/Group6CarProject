/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_CAROLOCUP_SENSORS_H
#define AUTOMOTIVE_CAROLOCUP_SENSORS_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace automotive {
	namespace carolocup {
		using namespace std;
		
		class Sensors : public odcore::data::SerializableData, public odcore::base::Visitable {
			public:
				Sensors();
		
				Sensors(
				const uint32_t &val0, 
				const uint32_t &val1, 
				const uint32_t &val2, 
				const uint32_t &val3, 
				const uint32_t &val4, 
				const uint32_t &val5, 
				const uint32_t &val6, 
				const uint32_t &val7, 
				const uint32_t &val8, 
				const uint32_t &val9, 
				const uint32_t &val10
				);
		
				virtual ~Sensors();
		
				/**
				 * Copy constructor.
				 *
				 * @param obj Reference to an object of this class.
				 */
				Sensors(const Sensors &obj);
		
				/**
				 * Assignment operator.
				 *
				 * @param obj Reference to an object of this class.
				 * @return Reference to this instance.
				 */
				Sensors& operator=(const Sensors &obj);
		
			public:
				/**
				 * @return usFront.
				 */
				uint32_t getUsFront() const;
				
				/**
				 * This method sets usFront.
				 *
				 * @param val Value for usFront.
				 */
				void setUsFront(const uint32_t &val);
			public:
				/**
				 * @return usRear.
				 */
				uint32_t getUsRear() const;
				
				/**
				 * This method sets usRear.
				 *
				 * @param val Value for usRear.
				 */
				void setUsRear(const uint32_t &val);
			public:
				/**
				 * @return irFrontRight.
				 */
				uint32_t getIrFrontRight() const;
				
				/**
				 * This method sets irFrontRight.
				 *
				 * @param val Value for irFrontRight.
				 */
				void setIrFrontRight(const uint32_t &val);
			public:
				/**
				 * @return irRearRight.
				 */
				uint32_t getIrRearRight() const;
				
				/**
				 * This method sets irRearRight.
				 *
				 * @param val Value for irRearRight.
				 */
				void setIrRearRight(const uint32_t &val);
			public:
				/**
				 * @return irBackLeft.
				 */
				uint32_t getIrBackLeft() const;
				
				/**
				 * This method sets irBackLeft.
				 *
				 * @param val Value for irBackLeft.
				 */
				void setIrBackLeft(const uint32_t &val);
			public:
				/**
				 * @return irBackRight.
				 */
				uint32_t getIrBackRight() const;
				
				/**
				 * This method sets irBackRight.
				 *
				 * @param val Value for irBackRight.
				 */
				void setIrBackRight(const uint32_t &val);
			public:
				/**
				 * @return gyroHeading.
				 */
				uint32_t getGyroHeading() const;
				
				/**
				 * This method sets gyroHeading.
				 *
				 * @param val Value for gyroHeading.
				 */
				void setGyroHeading(const uint32_t &val);
			public:
				/**
				 * @return wheelRearLeft.
				 */
				uint32_t getWheelRearLeft() const;
				
				/**
				 * This method sets wheelRearLeft.
				 *
				 * @param val Value for wheelRearLeft.
				 */
				void setWheelRearLeft(const uint32_t &val);
			public:
				/**
				 * @return wheelRearRight.
				 */
				uint32_t getWheelRearRight() const;
				
				/**
				 * This method sets wheelRearRight.
				 *
				 * @param val Value for wheelRearRight.
				 */
				void setWheelRearRight(const uint32_t &val);
			public:
				/**
				 * @return buttonState.
				 */
				uint32_t getButtonState() const;
				
				/**
				 * This method sets buttonState.
				 *
				 * @param val Value for buttonState.
				 */
				void setButtonState(const uint32_t &val);
			public:
				/**
				 * @return lightReading.
				 */
				uint32_t getLightReading() const;
				
				/**
				 * This method sets lightReading.
				 *
				 * @param val Value for lightReading.
				 */
				void setLightReading(const uint32_t &val);
		
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
				uint32_t m_usFront;
			private:
				uint32_t m_usRear;
			private:
				uint32_t m_irFrontRight;
			private:
				uint32_t m_irRearRight;
			private:
				uint32_t m_irBackLeft;
			private:
				uint32_t m_irBackRight;
			private:
				uint32_t m_gyroHeading;
			private:
				uint32_t m_wheelRearLeft;
			private:
				uint32_t m_wheelRearRight;
			private:
				uint32_t m_buttonState;
			private:
				uint32_t m_lightReading;
		
		};
	} // carolocup
} // automotive

#endif /*AUTOMOTIVE_CAROLOCUP_SENSORS_H*/
