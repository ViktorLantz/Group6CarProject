/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef FXE_NOISE_H
#define FXE_NOISE_H

#include "opendavinci/odcore/opendavinci.h"

#include <vector>

#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"

#include "automotivedata/generated/fxe/KeyPoint.h"

namespace fxe {
	using namespace std;
	
	class Noise : public odcore::data::SerializableData, public odcore::base::Visitable {
		public:
			Noise();
	
			Noise(
			const vector<fxe::KeyPoint> &val0
			);
	
			virtual ~Noise();
	
			/**
			 * Copy constructor.
			 *
			 * @param obj Reference to an object of this class.
			 */
			Noise(const Noise &obj);
	
			/**
			 * Assignment operator.
			 *
			 * @param obj Reference to an object of this class.
			 * @return Reference to this instance.
			 */
			Noise& operator=(const Noise &obj);
	
		public:
			/**
			 * @return noisePerFrame.
			 */
			std::vector<fxe::KeyPoint> getListOfNoisePerFrame() const;
		
			/**
			 * This method sets noisePerFrame.
			 *
			 * @param val Value for noisePerFrame.
			 */
			void setListOfNoisePerFrame(const std::vector<fxe::KeyPoint> &val);
		
			/**
			 * This method clears the list of noisePerFrame.
			 */
			void clear_ListOfNoisePerFrame();
		
			/**
			 * @return the size of the list of noisePerFrame.
			 */
			uint32_t getSize_ListOfNoisePerFrame() const;
		
			/**
			 * @return true if the list of noisePerFrame is empty.
			 */
			bool isEmpty_ListOfNoisePerFrame() const;
		
			/**
			 * This method adds an element to the end of the list of noisePerFrame.
			 *
			 * @param val Value to be added to the end of the list of noisePerFrame.
			 */
			void addTo_ListOfNoisePerFrame(const fxe::KeyPoint &val);
		
			/**
			 * This method adds an element to the beginning of the list of noisePerFrame.
			 *
			 * @param val Value to be inserted to the beginning of the list of noisePerFrame.
			 */
			void insertTo_ListOfNoisePerFrame(const fxe::KeyPoint &val);
		
			/**
			 * @return true if the list of noisePerFrame contains the element val.
			 *              If the list has a complex data type, the entries are compared using their .toString() method.
			 */
			bool contains_ListOfNoisePerFrame(const fxe::KeyPoint &val) const;
		
			/**
			 * @return Pair of iterators for the begin and end of the list of noisePerFrame.
			 */
			std::pair<std::vector<fxe::KeyPoint>::iterator, std::vector<fxe::KeyPoint>::iterator> iteratorPair_ListOfNoisePerFrame();
	
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
			std::vector<fxe::KeyPoint> m_listOfNoisePerFrame;
	
	};
} // fxe

#endif /*FXE_NOISE_H*/
