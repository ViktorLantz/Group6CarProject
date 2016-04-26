/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_REFLECTION_ABSTRACTFIELD_H
#define ODCORE_DATA_REFLECTION_ABSTRACTFIELD_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace odcore {
	namespace data {
		namespace reflection {
			using namespace std;
			
			class AbstractField : public odcore::data::SerializableData, public odcore::base::Visitable {
				public:
					enum FIELDDATATYPE {
						UINT8_T = 2,
						UINT32_T = 6,
						DATA_T = 52,
						SERIALIZABLE_T = 53,
						INTEGERS_END = 10,
						NON_PRIMITIVE_END = 54,
						DOUBLE_T = 14,
						INT64_T = 9,
						INT8_T = 3,
						FLOAT_T = 13,
						UINT64_T = 8,
						INT32_T = 7,
						BOOL_T = 0,
						NON_PRIMITIVE_START = 50,
						INT16_T = 5,
						UINT16_T = 4,
						INTEGERS_START = 1,
						CHAR_T = 11,
						STRING_T = 51,
						UCHAR_T = 12,
					};
				public:
					AbstractField();
			
					AbstractField(
					const uint32_t &val0, 
					const uint8_t &val1, 
					const std::string &val2, 
					const std::string &val3, 
					const FIELDDATATYPE &val4, 
					const int8_t &val5
					);
			
					virtual ~AbstractField();
			
					/**
					 * Copy constructor.
					 *
					 * @param obj Reference to an object of this class.
					 */
					AbstractField(const AbstractField &obj);
			
					/**
					 * Assignment operator.
					 *
					 * @param obj Reference to an object of this class.
					 * @return Reference to this instance.
					 */
					AbstractField& operator=(const AbstractField &obj);
			
				public:
				public:
					/**
					 * @return longFieldIdentifier.
					 */
					uint32_t getLongFieldIdentifier() const;
					
					/**
					 * This method sets longFieldIdentifier.
					 *
					 * @param val Value for longFieldIdentifier.
					 */
					void setLongFieldIdentifier(const uint32_t &val);
				public:
					/**
					 * @return shortFieldIdentifier.
					 */
					uint8_t getShortFieldIdentifier() const;
					
					/**
					 * This method sets shortFieldIdentifier.
					 *
					 * @param val Value for shortFieldIdentifier.
					 */
					void setShortFieldIdentifier(const uint8_t &val);
				public:
					/**
					 * @return longFieldName.
					 */
					std::string getLongFieldName() const;
					
					/**
					 * This method sets longFieldName.
					 *
					 * @param val Value for longFieldName.
					 */
					void setLongFieldName(const std::string &val);
				public:
					/**
					 * @return shortFieldName.
					 */
					std::string getShortFieldName() const;
					
					/**
					 * This method sets shortFieldName.
					 *
					 * @param val Value for shortFieldName.
					 */
					void setShortFieldName(const std::string &val);
				public:
					/**
					 * @return fieldDataType.
					 */
					FIELDDATATYPE getFieldDataType() const;
					
					/**
					 * This method sets fieldDataType.
					 *
					 * @param val Value for fieldDataType.
					 */
					void setFieldDataType(const FIELDDATATYPE &val);
				public:
					/**
					 * @return size.
					 */
					int8_t getSize() const;
					
					/**
					 * This method sets size.
					 *
					 * @param val Value for size.
					 */
					void setSize(const int8_t &val);
			
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
					uint32_t m_longFieldIdentifier;
				private:
					uint8_t m_shortFieldIdentifier;
				private:
					std::string m_longFieldName;
				private:
					std::string m_shortFieldName;
				private:
					FIELDDATATYPE m_fieldDataType;
				private:
					int8_t m_size;
			
			};
		} // reflection
	} // data
} // odcore

#endif /*ODCORE_DATA_REFLECTION_ABSTRACTFIELD_H*/
