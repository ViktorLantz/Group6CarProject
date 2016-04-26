/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_MODULESTATISTIC_H
#define ODCORE_DATA_DMCP_MODULESTATISTIC_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"

#include "opendavinci/generated/odcore/data/dmcp/ModuleDescriptor.h"
#include "opendavinci/generated/odcore/data/dmcp/RuntimeStatistic.h"

namespace odcore {
	namespace data {
		namespace dmcp {
			using namespace std;
			
			class ModuleStatistic : public odcore::data::SerializableData, public odcore::base::Visitable {
				public:
					ModuleStatistic();
			
					ModuleStatistic(
					const odcore::data::dmcp::ModuleDescriptor &val0, 
					const odcore::data::dmcp::RuntimeStatistic &val1
					);
			
					virtual ~ModuleStatistic();
			
					/**
					 * Copy constructor.
					 *
					 * @param obj Reference to an object of this class.
					 */
					ModuleStatistic(const ModuleStatistic &obj);
			
					/**
					 * Assignment operator.
					 *
					 * @param obj Reference to an object of this class.
					 * @return Reference to this instance.
					 */
					ModuleStatistic& operator=(const ModuleStatistic &obj);
			
				public:
					/**
					 * @return module.
					 */
					odcore::data::dmcp::ModuleDescriptor getModule() const;
					
					/**
					 * This method sets module.
					 *
					 * @param val Value for module.
					 */
					void setModule(const odcore::data::dmcp::ModuleDescriptor &val);
				public:
					/**
					 * @return runtimeStatistic.
					 */
					odcore::data::dmcp::RuntimeStatistic getRuntimeStatistic() const;
					
					/**
					 * This method sets runtimeStatistic.
					 *
					 * @param val Value for runtimeStatistic.
					 */
					void setRuntimeStatistic(const odcore::data::dmcp::RuntimeStatistic &val);
			
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
					odcore::data::dmcp::ModuleDescriptor m_module;
				private:
					odcore::data::dmcp::RuntimeStatistic m_runtimeStatistic;
			
			};
		} // dmcp
	} // data
} // odcore

#endif /*ODCORE_DATA_DMCP_MODULESTATISTIC_H*/
