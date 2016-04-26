/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#include <memory>
#include <algorithm>
#include <sstream>
#include <utility>

#include "opendavinci/odcore/base/Hash.h"
#include "opendavinci/odcore/base/Deserializer.h"
#include "opendavinci/odcore/base/SerializationFactory.h"
#include "opendavinci/odcore/base/Serializer.h"


#include "automotivedata/generated/fxe/Noise.h"

namespace fxe {
		using namespace std;
		using namespace odcore::base;
	
	
		Noise::Noise() :
		    SerializableData(), Visitable()
			, m_listOfNoisePerFrame()
		{
		}
	
		Noise::Noise(
			const vector<fxe::KeyPoint> &val0
		) :
		    SerializableData(), Visitable()
			, m_listOfNoisePerFrame(val0)
		{
		}
	
		Noise::Noise(const Noise &obj) :
		    SerializableData(), Visitable()
			, m_listOfNoisePerFrame(obj.m_listOfNoisePerFrame)
		{
		}
		
		Noise::~Noise() {
		}
	
		Noise& Noise::operator=(const Noise &obj) {
			m_listOfNoisePerFrame = obj.m_listOfNoisePerFrame;
			return (*this);
		}
	
		int32_t Noise::ID() {
			return 302;
		}
	
		const string Noise::ShortName() {
			return "Noise";
		}
	
		const string Noise::LongName() {
			return "fxe.Noise";
		}
	
		int32_t Noise::getID() const {
			return Noise::ID();
		}
	
		const string Noise::getShortName() const {
			return Noise::ShortName();
		}
	
		const string Noise::getLongName() const {
			return Noise::LongName();
		}
	
		std::vector<fxe::KeyPoint> Noise::getListOfNoisePerFrame() const {
			return m_listOfNoisePerFrame;
		}
		
		void Noise::setListOfNoisePerFrame(const std::vector<fxe::KeyPoint> &val) {
			m_listOfNoisePerFrame = val;
		}
		
		void Noise::clear_ListOfNoisePerFrame() {
			m_listOfNoisePerFrame.clear();
		}
		
		uint32_t Noise::getSize_ListOfNoisePerFrame() const {
			return m_listOfNoisePerFrame.size();
		}
		
		bool Noise::isEmpty_ListOfNoisePerFrame() const {
			return m_listOfNoisePerFrame.empty();
		}
		
		void Noise::addTo_ListOfNoisePerFrame(const fxe::KeyPoint &val) {
			m_listOfNoisePerFrame.push_back(val);
		}
		
		void Noise::insertTo_ListOfNoisePerFrame(const fxe::KeyPoint &val) {
			m_listOfNoisePerFrame.insert(m_listOfNoisePerFrame.begin(), val);
		}
		
		bool Noise::contains_ListOfNoisePerFrame(const fxe::KeyPoint &val) const {
			bool found = false;
			std::vector<fxe::KeyPoint>::const_iterator it = m_listOfNoisePerFrame.begin();
			while (it != m_listOfNoisePerFrame.end() && !found) {
			    found |= (*it).toString() == val.toString();
			    it++;
			}
			return found;
		}
		
		std::pair<std::vector<fxe::KeyPoint>::iterator, std::vector<fxe::KeyPoint>::iterator> Noise::iteratorPair_ListOfNoisePerFrame() {
			return std::make_pair(m_listOfNoisePerFrame.begin(), m_listOfNoisePerFrame.end());
		}
	
		void Noise::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.endVisit();
		}
	
		const string Noise::toString() const {
			stringstream s;
	
	
			s << "Number of elements in list of NoisePerFrame: " << getSize_ListOfNoisePerFrame() << " ";
	
			return s.str();
		}
	
		ostream& Noise::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);
	
			// Write number of elements in m_listOfNoisePerFrame.
			const uint32_t numberOfNoisePerFrame = static_cast<uint32_t>(m_listOfNoisePerFrame.size());
			s->write(1, numberOfNoisePerFrame);
			
			// Write actual elements into a stringstream.
			std::stringstream sstrOfNoisePerFrame;
			for (uint32_t i = 0; i < numberOfNoisePerFrame; i++) {
			    sstrOfNoisePerFrame << m_listOfNoisePerFrame.at(i);
			}
			
			// Write string of elements.
			if (numberOfNoisePerFrame > 0) {
				s->write(1 + 1,
				        sstrOfNoisePerFrame.str());
			}
			return out;
		}
	
		istream& Noise::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
	
			// Clean up the existing list of NoisePerFrame.
			m_listOfNoisePerFrame.clear();
			
			// Read number of elements in m_listOfNoisePerFrame.
			uint32_t numberOfNoisePerFrame = 0;
			d->read(1,
			       numberOfNoisePerFrame);
			
			if (numberOfNoisePerFrame > 0) {
			    // Read string of elements.
			    string elements;
				d->read(1 + 1,
				   elements);
			
			    stringstream sstr(elements);
			
			    // Read actual elements from stringstream.
			    for (uint32_t i = 0; i < numberOfNoisePerFrame; i++) {
			        fxe::KeyPoint element;
			        sstr >> element;
			        m_listOfNoisePerFrame.push_back(element);
			    }
			}
			return in;
		}
} // fxe
