/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FXE_KEYPOINT_H
#define FXE_KEYPOINT_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"

#include "automotivedata/generated/cartesian/Point2.h"

namespace fxe {
	using namespace std;
	
	class KeyPoint : public odcore::data::SerializableData, public odcore::base::Visitable {
		public:
			KeyPoint();
	
			KeyPoint(
			const cartesian::Point2 &val0, 
			const float &val1
			);
	
			virtual ~KeyPoint();
	
			/**
			 * Copy constructor.
			 *
			 * @param obj Reference to an object of this class.
			 */
			KeyPoint(const KeyPoint &obj);
	
			/**
			 * Assignment operator.
			 *
			 * @param obj Reference to an object of this class.
			 * @return Reference to this instance.
			 */
			KeyPoint& operator=(const KeyPoint &obj);
	
		public:
			/**
			 * @return pt.
			 */
			cartesian::Point2 getPt() const;
			
			/**
			 * This method sets pt.
			 *
			 * @param val Value for pt.
			 */
			void setPt(const cartesian::Point2 &val);
		public:
			/**
			 * @return size.
			 */
			float getSize() const;
			
			/**
			 * This method sets size.
			 *
			 * @param val Value for size.
			 */
			void setSize(const float &val);
	
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
			cartesian::Point2 m_pt;
		private:
			float m_size;
	
	};
} // fxe

#endif /*FXE_KEYPOINT_H*/
