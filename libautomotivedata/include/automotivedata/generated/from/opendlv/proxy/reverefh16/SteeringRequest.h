/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FROM_OPENDLV_PROXY_REVEREFH16_STEERINGREQUEST_H
#define FROM_OPENDLV_PROXY_REVEREFH16_STEERINGREQUEST_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
				using namespace std;
				
				class SteeringRequest : public odcore::data::SerializableData, public odcore::base::Visitable {
					public:
						SteeringRequest();
				
						SteeringRequest(
						const bool &val0, 
						const double &val1, 
						const double &val2
						);
				
						virtual ~SteeringRequest();
				
						/**
						 * Copy constructor.
						 *
						 * @param obj Reference to an object of this class.
						 */
						SteeringRequest(const SteeringRequest &obj);
				
						/**
						 * Assignment operator.
						 *
						 * @param obj Reference to an object of this class.
						 * @return Reference to this instance.
						 */
						SteeringRequest& operator=(const SteeringRequest &obj);
				
					public:
						/**
						 * @return enable_steerreq.
						 */
						bool getEnable_steerreq() const;
						
						/**
						 * This method sets enable_steerreq.
						 *
						 * @param val Value for enable_steerreq.
						 */
						void setEnable_steerreq(const bool &val);
					public:
						/**
						 * @return steerreq_rwa.
						 */
						double getSteerreq_rwa() const;
						
						/**
						 * This method sets steerreq_rwa.
						 *
						 * @param val Value for steerreq_rwa.
						 */
						void setSteerreq_rwa(const double &val);
					public:
						/**
						 * @return steerreq_deltatrq.
						 */
						double getSteerreq_deltatrq() const;
						
						/**
						 * This method sets steerreq_deltatrq.
						 *
						 * @param val Value for steerreq_deltatrq.
						 */
						void setSteerreq_deltatrq(const double &val);
				
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
						bool m_enable_steerreq;
					private:
						double m_steerreq_rwa;
					private:
						double m_steerreq_deltatrq;
				
				};
			} // reverefh16
		} // proxy
	} // opendlv
} // from

#endif /*FROM_OPENDLV_PROXY_REVEREFH16_STEERINGREQUEST_H*/
