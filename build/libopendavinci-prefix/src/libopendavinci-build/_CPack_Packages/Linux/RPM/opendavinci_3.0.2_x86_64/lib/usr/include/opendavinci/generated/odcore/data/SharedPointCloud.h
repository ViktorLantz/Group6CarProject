/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_SHAREDPOINTCLOUD_H
#define ODCORE_DATA_SHAREDPOINTCLOUD_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
namespace odcore {
	namespace data {
		using namespace std;
		
		class SharedPointCloud : public odcore::data::SharedData {
			public:
				enum USERINFO {
					XYZ_INTENSITY = 0,
				};
			public:
				enum COMPONENTDATATYPE {
					UINT8_T = 2,
					UINT32_T = 6,
					INTEGERS_END = 10,
					DOUBLE_T = 14,
					INT64_T = 9,
					INT8_T = 3,
					FLOAT_T = 13,
					UINT64_T = 8,
					INT32_T = 7,
					BOOL_T = 0,
					INT16_T = 5,
					UINT16_T = 4,
					INTEGERS_START = 1,
					CHAR_T = 11,
					UCHAR_T = 12,
				};
			public:
				SharedPointCloud();
		
				SharedPointCloud(
				const uint32_t &val0, 
				const uint32_t &val1, 
				const uint8_t &val2, 
				const COMPONENTDATATYPE &val3, 
				const uint32_t &val4
				);
		
				virtual ~SharedPointCloud();
		
				/**
				 * Copy constructor.
				 *
				 * @param obj Reference to an object of this class.
				 */
				SharedPointCloud(const SharedPointCloud &obj);
		
				/**
				 * Assignment operator.
				 *
				 * @param obj Reference to an object of this class.
				 * @return Reference to this instance.
				 */
				SharedPointCloud& operator=(const SharedPointCloud &obj);
		
			public:
			public:
			public:
				/**
				 * @return width.
				 */
				uint32_t getWidth() const;
				
				/**
				 * This method sets width.
				 *
				 * @param val Value for width.
				 */
				void setWidth(const uint32_t &val);
			public:
				/**
				 * @return height.
				 */
				uint32_t getHeight() const;
				
				/**
				 * This method sets height.
				 *
				 * @param val Value for height.
				 */
				void setHeight(const uint32_t &val);
			public:
				/**
				 * @return numberOfComponentsPerPoint.
				 */
				uint8_t getNumberOfComponentsPerPoint() const;
				
				/**
				 * This method sets numberOfComponentsPerPoint.
				 *
				 * @param val Value for numberOfComponentsPerPoint.
				 */
				void setNumberOfComponentsPerPoint(const uint8_t &val);
			public:
				/**
				 * @return componentDataType.
				 */
				COMPONENTDATATYPE getComponentDataType() const;
				
				/**
				 * This method sets componentDataType.
				 *
				 * @param val Value for componentDataType.
				 */
				void setComponentDataType(const COMPONENTDATATYPE &val);
			public:
				/**
				 * @return userInfo.
				 */
				uint32_t getUserInfo() const;
				
				/**
				 * This method sets userInfo.
				 *
				 * @param val Value for userInfo.
				 */
				void setUserInfo(const uint32_t &val);
		
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
			private:
			private:
				uint32_t m_width;
			private:
				uint32_t m_height;
			private:
				uint8_t m_numberOfComponentsPerPoint;
			private:
				COMPONENTDATATYPE m_componentDataType;
			private:
				uint32_t m_userInfo;
		
		};
	} // data
} // odcore

#endif /*ODCORE_DATA_SHAREDPOINTCLOUD_H*/
