/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_PULSEMESSAGE_H
#define ODCORE_DATA_DMCP_PULSEMESSAGE_H

#include "opendavinci/odcore/opendavinci.h"

#include <vector>

#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"

#include "opendavinci/odcore/data/TimeStamp.h"
#include "opendavinci/odcore/data/Container.h"

namespace odcore {
	namespace data {
		namespace dmcp {
			using namespace std;
			
			class PulseMessage : public odcore::data::SerializableData, public odcore::base::Visitable {
				public:
					PulseMessage();
			
					PulseMessage(
					const odcore::data::TimeStamp &val0, 
					const uint32_t &val1, 
					const uint32_t &val2, 
					const vector<odcore::data::Container> &val3
					);
			
					virtual ~PulseMessage();
			
					/**
					 * Copy constructor.
					 *
					 * @param obj Reference to an object of this class.
					 */
					PulseMessage(const PulseMessage &obj);
			
					/**
					 * Assignment operator.
					 *
					 * @param obj Reference to an object of this class.
					 * @return Reference to this instance.
					 */
					PulseMessage& operator=(const PulseMessage &obj);
			
				public:
					/**
					 * @return realTimeFromSupercomponent.
					 */
					odcore::data::TimeStamp getRealTimeFromSupercomponent() const;
					
					/**
					 * This method sets realTimeFromSupercomponent.
					 *
					 * @param val Value for realTimeFromSupercomponent.
					 */
					void setRealTimeFromSupercomponent(const odcore::data::TimeStamp &val);
				public:
					/**
					 * @return nominalTimeSlice.
					 */
					uint32_t getNominalTimeSlice() const;
					
					/**
					 * This method sets nominalTimeSlice.
					 *
					 * @param val Value for nominalTimeSlice.
					 */
					void setNominalTimeSlice(const uint32_t &val);
				public:
					/**
					 * @return cumulatedTimeSlice.
					 */
					uint32_t getCumulatedTimeSlice() const;
					
					/**
					 * This method sets cumulatedTimeSlice.
					 *
					 * @param val Value for cumulatedTimeSlice.
					 */
					void setCumulatedTimeSlice(const uint32_t &val);
				public:
					/**
					 * @return containers.
					 */
					std::vector<odcore::data::Container> getListOfContainers() const;
				
					/**
					 * This method sets containers.
					 *
					 * @param val Value for containers.
					 */
					void setListOfContainers(const std::vector<odcore::data::Container> &val);
				
					/**
					 * This method clears the list of containers.
					 */
					void clear_ListOfContainers();
				
					/**
					 * @return the size of the list of containers.
					 */
					uint32_t getSize_ListOfContainers() const;
				
					/**
					 * @return true if the list of containers is empty.
					 */
					bool isEmpty_ListOfContainers() const;
				
					/**
					 * This method adds an element to the end of the list of containers.
					 *
					 * @param val Value to be added to the end of the list of containers.
					 */
					void addTo_ListOfContainers(const odcore::data::Container &val);
				
					/**
					 * This method adds an element to the beginning of the list of containers.
					 *
					 * @param val Value to be inserted to the beginning of the list of containers.
					 */
					void insertTo_ListOfContainers(const odcore::data::Container &val);
				
					/**
					 * @return true if the list of containers contains the element val.
					 *              If the list has a complex data type, the entries are compared using their .toString() method.
					 */
					bool contains_ListOfContainers(const odcore::data::Container &val) const;
				
					/**
					 * @return Pair of iterators for the begin and end of the list of containers.
					 */
					std::pair<std::vector<odcore::data::Container>::iterator, std::vector<odcore::data::Container>::iterator> iteratorPair_ListOfContainers();
			
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
					odcore::data::TimeStamp m_realTimeFromSupercomponent;
				private:
					uint32_t m_nominalTimeSlice;
				private:
					uint32_t m_cumulatedTimeSlice;
				private:
					std::vector<odcore::data::Container> m_listOfContainers;
			
			};
		} // dmcp
	} // data
} // odcore

#endif /*ODCORE_DATA_DMCP_PULSEMESSAGE_H*/
