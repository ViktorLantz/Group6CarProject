/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FROM_OPENDLV_PROXY_REVEREFH16_PEDALS_H
#define FROM_OPENDLV_PROXY_REVEREFH16_PEDALS_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
				using namespace std;
				
				class Pedals : public odcore::data::SerializableData, public odcore::base::Visitable {
					public:
						Pedals();
				
						Pedals(
						const double &val0, 
						const double &val1, 
						const double &val2
						);
				
						virtual ~Pedals();
				
						/**
						 * Copy constructor.
						 *
						 * @param obj Reference to an object of this class.
						 */
						Pedals(const Pedals &obj);
				
						/**
						 * Assignment operator.
						 *
						 * @param obj Reference to an object of this class.
						 * @return Reference to this instance.
						 */
						Pedals& operator=(const Pedals &obj);
				
					public:
						/**
						 * @return accelerationpedalposition.
						 */
						double getAccelerationpedalposition() const;
						
						/**
						 * This method sets accelerationpedalposition.
						 *
						 * @param val Value for accelerationpedalposition.
						 */
						void setAccelerationpedalposition(const double &val);
					public:
						/**
						 * @return brakepedalposition.
						 */
						double getBrakepedalposition() const;
						
						/**
						 * This method sets brakepedalposition.
						 *
						 * @param val Value for brakepedalposition.
						 */
						void setBrakepedalposition(const double &val);
					public:
						/**
						 * @return torsionbartorque.
						 */
						double getTorsionbartorque() const;
						
						/**
						 * This method sets torsionbartorque.
						 *
						 * @param val Value for torsionbartorque.
						 */
						void setTorsionbartorque(const double &val);
				
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
						double m_accelerationpedalposition;
					private:
						double m_brakepedalposition;
					private:
						double m_torsionbartorque;
				
				};
			} // reverefh16
		} // proxy
	} // opendlv
} // from

#endif /*FROM_OPENDLV_PROXY_REVEREFH16_PEDALS_H*/
