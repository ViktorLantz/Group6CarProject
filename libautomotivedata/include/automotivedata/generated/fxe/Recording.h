/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FXE_RECORDING_H
#define FXE_RECORDING_H

#include "opendavinci/odcore/opendavinci.h"

#include <vector>

#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"

#include "automotivedata/generated/fxe/Noise.h"

namespace fxe {
	using namespace std;
	
	class Recording : public odcore::data::SerializableData, public odcore::base::Visitable {
		public:
			Recording();
	
			Recording(
			const std::string &val0, 
			const uint32_t &val1, 
			const uint32_t &val2, 
			const vector<fxe::Noise> &val3
			);
	
			virtual ~Recording();
	
			/**
			 * Copy constructor.
			 *
			 * @param obj Reference to an object of this class.
			 */
			Recording(const Recording &obj);
	
			/**
			 * Assignment operator.
			 *
			 * @param obj Reference to an object of this class.
			 * @return Reference to this instance.
			 */
			Recording& operator=(const Recording &obj);
	
		public:
			/**
			 * @return filename.
			 */
			std::string getFilename() const;
			
			/**
			 * This method sets filename.
			 *
			 * @param val Value for filename.
			 */
			void setFilename(const std::string &val);
		public:
			/**
			 * @return startFrame.
			 */
			uint32_t getStartFrame() const;
			
			/**
			 * This method sets startFrame.
			 *
			 * @param val Value for startFrame.
			 */
			void setStartFrame(const uint32_t &val);
		public:
			/**
			 * @return endFrame.
			 */
			uint32_t getEndFrame() const;
			
			/**
			 * This method sets endFrame.
			 *
			 * @param val Value for endFrame.
			 */
			void setEndFrame(const uint32_t &val);
		public:
			/**
			 * @return noises.
			 */
			std::vector<fxe::Noise> getListOfNoises() const;
		
			/**
			 * This method sets noises.
			 *
			 * @param val Value for noises.
			 */
			void setListOfNoises(const std::vector<fxe::Noise> &val);
		
			/**
			 * This method clears the list of noises.
			 */
			void clear_ListOfNoises();
		
			/**
			 * @return the size of the list of noises.
			 */
			uint32_t getSize_ListOfNoises() const;
		
			/**
			 * @return true if the list of noises is empty.
			 */
			bool isEmpty_ListOfNoises() const;
		
			/**
			 * This method adds an element to the end of the list of noises.
			 *
			 * @param val Value to be added to the end of the list of noises.
			 */
			void addTo_ListOfNoises(const fxe::Noise &val);
		
			/**
			 * This method adds an element to the beginning of the list of noises.
			 *
			 * @param val Value to be inserted to the beginning of the list of noises.
			 */
			void insertTo_ListOfNoises(const fxe::Noise &val);
		
			/**
			 * @return true if the list of noises contains the element val.
			 *              If the list has a complex data type, the entries are compared using their .toString() method.
			 */
			bool contains_ListOfNoises(const fxe::Noise &val) const;
		
			/**
			 * @return Pair of iterators for the begin and end of the list of noises.
			 */
			std::pair<std::vector<fxe::Noise>::iterator, std::vector<fxe::Noise>::iterator> iteratorPair_ListOfNoises();
	
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
			std::string m_filename;
		private:
			uint32_t m_startFrame;
		private:
			uint32_t m_endFrame;
		private:
			std::vector<fxe::Noise> m_listOfNoises;
	
	};
} // fxe

#endif /*FXE_RECORDING_H*/
