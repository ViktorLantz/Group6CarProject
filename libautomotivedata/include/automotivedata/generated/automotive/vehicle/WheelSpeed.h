/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef AUTOMOTIVE_VEHICLE_WHEELSPEED_H
#define AUTOMOTIVE_VEHICLE_WHEELSPEED_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace automotive {
	namespace vehicle {
		using namespace std;
		
		class WheelSpeed : public odcore::data::SerializableData, public odcore::base::Visitable {
			public:
				WheelSpeed();
		
				WheelSpeed(
				const float &val0, 
				const float &val1, 
				const float &val2, 
				const float &val3
				);
		
				virtual ~WheelSpeed();
		
				/**
				 * Copy constructor.
				 *
				 * @param obj Reference to an object of this class.
				 */
				WheelSpeed(const WheelSpeed &obj);
		
				/**
				 * Assignment operator.
				 *
				 * @param obj Reference to an object of this class.
				 * @return Reference to this instance.
				 */
				WheelSpeed& operator=(const WheelSpeed &obj);
		
			public:
				/**
				 * @return frontLeft.
				 */
				float getFrontLeft() const;
				
				/**
				 * This method sets frontLeft.
				 *
				 * @param val Value for frontLeft.
				 */
				void setFrontLeft(const float &val);
			public:
				/**
				 * @return frontRight.
				 */
				float getFrontRight() const;
				
				/**
				 * This method sets frontRight.
				 *
				 * @param val Value for frontRight.
				 */
				void setFrontRight(const float &val);
			public:
				/**
				 * @return rearLeft.
				 */
				float getRearLeft() const;
				
				/**
				 * This method sets rearLeft.
				 *
				 * @param val Value for rearLeft.
				 */
				void setRearLeft(const float &val);
			public:
				/**
				 * @return rearRight.
				 */
				float getRearRight() const;
				
				/**
				 * This method sets rearRight.
				 *
				 * @param val Value for rearRight.
				 */
				void setRearRight(const float &val);
		
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
				float m_frontLeft;
			private:
				float m_frontRight;
			private:
				float m_rearLeft;
			private:
				float m_rearRight;
		
		};
	} // vehicle
} // automotive

#endif /*AUTOMOTIVE_VEHICLE_WHEELSPEED_H*/
