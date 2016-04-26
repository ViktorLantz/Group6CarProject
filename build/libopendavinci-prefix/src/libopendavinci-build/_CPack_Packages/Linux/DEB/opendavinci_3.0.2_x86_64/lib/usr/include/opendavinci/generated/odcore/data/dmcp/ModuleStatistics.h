/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_MODULESTATISTICS_H
#define ODCORE_DATA_DMCP_MODULESTATISTICS_H

#include "opendavinci/odcore/opendavinci.h"

#include <vector>

#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"

#include "opendavinci/generated/odcore/data/dmcp/ModuleStatistic.h"

namespace odcore {
	namespace data {
		namespace dmcp {
			using namespace std;
			
			class ModuleStatistics : public odcore::data::SerializableData, public odcore::base::Visitable {
				public:
					ModuleStatistics();
			
					ModuleStatistics(
					const vector<odcore::data::dmcp::ModuleStatistic> &val0
					);
			
					virtual ~ModuleStatistics();
			
					/**
					 * Copy constructor.
					 *
					 * @param obj Reference to an object of this class.
					 */
					ModuleStatistics(const ModuleStatistics &obj);
			
					/**
					 * Assignment operator.
					 *
					 * @param obj Reference to an object of this class.
					 * @return Reference to this instance.
					 */
					ModuleStatistics& operator=(const ModuleStatistics &obj);
			
				public:
					/**
					 * @return moduleStatistics.
					 */
					std::vector<odcore::data::dmcp::ModuleStatistic> getListOfModuleStatistics() const;
				
					/**
					 * This method sets moduleStatistics.
					 *
					 * @param val Value for moduleStatistics.
					 */
					void setListOfModuleStatistics(const std::vector<odcore::data::dmcp::ModuleStatistic> &val);
				
					/**
					 * This method clears the list of moduleStatistics.
					 */
					void clear_ListOfModuleStatistics();
				
					/**
					 * @return the size of the list of moduleStatistics.
					 */
					uint32_t getSize_ListOfModuleStatistics() const;
				
					/**
					 * @return true if the list of moduleStatistics is empty.
					 */
					bool isEmpty_ListOfModuleStatistics() const;
				
					/**
					 * This method adds an element to the end of the list of moduleStatistics.
					 *
					 * @param val Value to be added to the end of the list of moduleStatistics.
					 */
					void addTo_ListOfModuleStatistics(const odcore::data::dmcp::ModuleStatistic &val);
				
					/**
					 * This method adds an element to the beginning of the list of moduleStatistics.
					 *
					 * @param val Value to be inserted to the beginning of the list of moduleStatistics.
					 */
					void insertTo_ListOfModuleStatistics(const odcore::data::dmcp::ModuleStatistic &val);
				
					/**
					 * @return true if the list of moduleStatistics contains the element val.
					 *              If the list has a complex data type, the entries are compared using their .toString() method.
					 */
					bool contains_ListOfModuleStatistics(const odcore::data::dmcp::ModuleStatistic &val) const;
				
					/**
					 * @return Pair of iterators for the begin and end of the list of moduleStatistics.
					 */
					std::pair<std::vector<odcore::data::dmcp::ModuleStatistic>::iterator, std::vector<odcore::data::dmcp::ModuleStatistic>::iterator> iteratorPair_ListOfModuleStatistics();
			
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
					std::vector<odcore::data::dmcp::ModuleStatistic> m_listOfModuleStatistics;
			
			};
		} // dmcp
	} // data
} // odcore

#endif /*ODCORE_DATA_DMCP_MODULESTATISTICS_H*/
