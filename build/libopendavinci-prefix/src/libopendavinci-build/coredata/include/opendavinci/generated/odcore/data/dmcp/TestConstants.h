/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_TESTCONSTANTS_H
#define ODCORE_DATA_DMCP_TESTCONSTANTS_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace odcore {
	namespace data {
		namespace dmcp {
			using namespace std;
			
			class TestConstants : public odcore::data::SerializableData, public odcore::base::Visitable {
				public:
					TestConstants();
			
			
					virtual ~TestConstants();
			
					/**
					 * Copy constructor.
					 *
					 * @param obj Reference to an object of this class.
					 */
					TestConstants(const TestConstants &obj);
			
					/**
					 * Assignment operator.
					 *
					 * @param obj Reference to an object of this class.
					 * @return Reference to this instance.
					 */
					TestConstants& operator=(const TestConstants &obj);
			
				public:
				public:
				public:
			
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
			
			public:
				static const std::string DMCPCONFIG_TEST_GROUP;
			public:
				static const uint32_t DMCPCONFIG_TEST_SERVERPORT;
			public:
				static const uint32_t DMCPCONFIG_TEST_CLIENTPORT;
			};
		} // dmcp
	} // data
} // odcore

#endif /*ODCORE_DATA_DMCP_TESTCONSTANTS_H*/
