/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FROM_OPENDLV_PROXY_REVEREFH16_AXLES_H
#define FROM_OPENDLV_PROXY_REVEREFH16_AXLES_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
				using namespace std;
				
				class Axles : public odcore::data::SerializableData, public odcore::base::Visitable {
					public:
						Axles();
				
						Axles(
						const double &val0, 
						const double &val1, 
						const double &val2
						);
				
						virtual ~Axles();
				
						/**
						 * Copy constructor.
						 *
						 * @param obj Reference to an object of this class.
						 */
						Axles(const Axles &obj);
				
						/**
						 * Assignment operator.
						 *
						 * @param obj Reference to an object of this class.
						 * @return Reference to this instance.
						 */
						Axles& operator=(const Axles &obj);
				
					public:
						/**
						 * @return frontaxle1load.
						 */
						double getFrontaxle1load() const;
						
						/**
						 * This method sets frontaxle1load.
						 *
						 * @param val Value for frontaxle1load.
						 */
						void setFrontaxle1load(const double &val);
					public:
						/**
						 * @return driveaxle1load.
						 */
						double getDriveaxle1load() const;
						
						/**
						 * This method sets driveaxle1load.
						 *
						 * @param val Value for driveaxle1load.
						 */
						void setDriveaxle1load(const double &val);
					public:
						/**
						 * @return driveaxle2load.
						 */
						double getDriveaxle2load() const;
						
						/**
						 * This method sets driveaxle2load.
						 *
						 * @param val Value for driveaxle2load.
						 */
						void setDriveaxle2load(const double &val);
				
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
						double m_frontaxle1load;
					private:
						double m_driveaxle1load;
					private:
						double m_driveaxle2load;
				
				};
			} // reverefh16
		} // proxy
	} // opendlv
} // from

#endif /*FROM_OPENDLV_PROXY_REVEREFH16_AXLES_H*/
