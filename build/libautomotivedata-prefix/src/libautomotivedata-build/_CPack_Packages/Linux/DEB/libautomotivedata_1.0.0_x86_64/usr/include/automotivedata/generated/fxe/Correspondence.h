/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FXE_CORRESPONDENCE_H
#define FXE_CORRESPONDENCE_H

#include "opendavinci/odcore/opendavinci.h"

#include <vector>

#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"

#include "automotivedata/generated/fxe/Recording.h"
#include "automotivedata/generated/fxe/Recording.h"

namespace fxe {
	using namespace std;
	
	class Correspondence : public odcore::data::SerializableData, public odcore::base::Visitable {
		public:
			Correspondence();
	
			Correspondence(
			const fxe::Recording &val0, 
			const vector<fxe::Recording> &val1
			);
	
			virtual ~Correspondence();
	
			/**
			 * Copy constructor.
			 *
			 * @param obj Reference to an object of this class.
			 */
			Correspondence(const Correspondence &obj);
	
			/**
			 * Assignment operator.
			 *
			 * @param obj Reference to an object of this class.
			 * @return Reference to this instance.
			 */
			Correspondence& operator=(const Correspondence &obj);
	
		public:
			/**
			 * @return simulation.
			 */
			fxe::Recording getSimulation() const;
			
			/**
			 * This method sets simulation.
			 *
			 * @param val Value for simulation.
			 */
			void setSimulation(const fxe::Recording &val);
		public:
			/**
			 * @return realRecordings.
			 */
			std::vector<fxe::Recording> getListOfRealRecordings() const;
		
			/**
			 * This method sets realRecordings.
			 *
			 * @param val Value for realRecordings.
			 */
			void setListOfRealRecordings(const std::vector<fxe::Recording> &val);
		
			/**
			 * This method clears the list of realRecordings.
			 */
			void clear_ListOfRealRecordings();
		
			/**
			 * @return the size of the list of realRecordings.
			 */
			uint32_t getSize_ListOfRealRecordings() const;
		
			/**
			 * @return true if the list of realRecordings is empty.
			 */
			bool isEmpty_ListOfRealRecordings() const;
		
			/**
			 * This method adds an element to the end of the list of realRecordings.
			 *
			 * @param val Value to be added to the end of the list of realRecordings.
			 */
			void addTo_ListOfRealRecordings(const fxe::Recording &val);
		
			/**
			 * This method adds an element to the beginning of the list of realRecordings.
			 *
			 * @param val Value to be inserted to the beginning of the list of realRecordings.
			 */
			void insertTo_ListOfRealRecordings(const fxe::Recording &val);
		
			/**
			 * @return true if the list of realRecordings contains the element val.
			 *              If the list has a complex data type, the entries are compared using their .toString() method.
			 */
			bool contains_ListOfRealRecordings(const fxe::Recording &val) const;
		
			/**
			 * @return Pair of iterators for the begin and end of the list of realRecordings.
			 */
			std::pair<std::vector<fxe::Recording>::iterator, std::vector<fxe::Recording>::iterator> iteratorPair_ListOfRealRecordings();
	
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
			fxe::Recording m_simulation;
		private:
			std::vector<fxe::Recording> m_listOfRealRecordings;
	
	};
} // fxe

#endif /*FXE_CORRESPONDENCE_H*/
