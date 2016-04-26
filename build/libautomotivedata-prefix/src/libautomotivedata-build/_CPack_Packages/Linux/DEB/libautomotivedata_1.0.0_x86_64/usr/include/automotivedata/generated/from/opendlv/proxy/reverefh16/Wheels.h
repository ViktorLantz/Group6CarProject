/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FROM_OPENDLV_PROXY_REVEREFH16_WHEELS_H
#define FROM_OPENDLV_PROXY_REVEREFH16_WHEELS_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace from {
	namespace opendlv {
		namespace proxy {
			namespace reverefh16 {
				using namespace std;
				
				class Wheels : public odcore::data::SerializableData, public odcore::base::Visitable {
					public:
						Wheels();
				
						Wheels(
						const double &val0, 
						const double &val1, 
						const double &val2, 
						const double &val3, 
						const double &val4, 
						const double &val5
						);
				
						virtual ~Wheels();
				
						/**
						 * Copy constructor.
						 *
						 * @param obj Reference to an object of this class.
						 */
						Wheels(const Wheels &obj);
				
						/**
						 * Assignment operator.
						 *
						 * @param obj Reference to an object of this class.
						 * @return Reference to this instance.
						 */
						Wheels& operator=(const Wheels &obj);
				
					public:
						/**
						 * @return frontaxle1wheelspeedleft.
						 */
						double getFrontaxle1wheelspeedleft() const;
						
						/**
						 * This method sets frontaxle1wheelspeedleft.
						 *
						 * @param val Value for frontaxle1wheelspeedleft.
						 */
						void setFrontaxle1wheelspeedleft(const double &val);
					public:
						/**
						 * @return frontaxle1wheelspeedright.
						 */
						double getFrontaxle1wheelspeedright() const;
						
						/**
						 * This method sets frontaxle1wheelspeedright.
						 *
						 * @param val Value for frontaxle1wheelspeedright.
						 */
						void setFrontaxle1wheelspeedright(const double &val);
					public:
						/**
						 * @return driveaxle1wheelspeedleft.
						 */
						double getDriveaxle1wheelspeedleft() const;
						
						/**
						 * This method sets driveaxle1wheelspeedleft.
						 *
						 * @param val Value for driveaxle1wheelspeedleft.
						 */
						void setDriveaxle1wheelspeedleft(const double &val);
					public:
						/**
						 * @return driveaxle1wheelspeedright.
						 */
						double getDriveaxle1wheelspeedright() const;
						
						/**
						 * This method sets driveaxle1wheelspeedright.
						 *
						 * @param val Value for driveaxle1wheelspeedright.
						 */
						void setDriveaxle1wheelspeedright(const double &val);
					public:
						/**
						 * @return driveaxle2wheelspeedleft.
						 */
						double getDriveaxle2wheelspeedleft() const;
						
						/**
						 * This method sets driveaxle2wheelspeedleft.
						 *
						 * @param val Value for driveaxle2wheelspeedleft.
						 */
						void setDriveaxle2wheelspeedleft(const double &val);
					public:
						/**
						 * @return driveaxle2wheelspeedright.
						 */
						double getDriveaxle2wheelspeedright() const;
						
						/**
						 * This method sets driveaxle2wheelspeedright.
						 *
						 * @param val Value for driveaxle2wheelspeedright.
						 */
						void setDriveaxle2wheelspeedright(const double &val);
				
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
						double m_frontaxle1wheelspeedleft;
					private:
						double m_frontaxle1wheelspeedright;
					private:
						double m_driveaxle1wheelspeedleft;
					private:
						double m_driveaxle1wheelspeedright;
					private:
						double m_driveaxle2wheelspeedleft;
					private:
						double m_driveaxle2wheelspeedright;
				
				};
			} // reverefh16
		} // proxy
	} // opendlv
} // from

#endif /*FROM_OPENDLV_PROXY_REVEREFH16_WHEELS_H*/
