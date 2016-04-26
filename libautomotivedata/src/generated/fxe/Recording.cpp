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


#include "automotivedata/generated/fxe/Recording.h"

namespace fxe {
		using namespace std;
		using namespace odcore::base;
	
	
		Recording::Recording() :
		    SerializableData(), Visitable()
			, m_filename("")
			, m_startFrame(0)
			, m_endFrame(0)
			, m_listOfNoises()
		{
		}
	
		Recording::Recording(
			const std::string &val0, 
			const uint32_t &val1, 
			const uint32_t &val2, 
			const vector<fxe::Noise> &val3
		) :
		    SerializableData(), Visitable()
			, m_filename(val0)
			, m_startFrame(val1)
			, m_endFrame(val2)
			, m_listOfNoises(val3)
		{
		}
	
		Recording::Recording(const Recording &obj) :
		    SerializableData(), Visitable()
			, m_filename(obj.m_filename)
			, m_startFrame(obj.m_startFrame)
			, m_endFrame(obj.m_endFrame)
			, m_listOfNoises(obj.m_listOfNoises)
		{
		}
		
		Recording::~Recording() {
		}
	
		Recording& Recording::operator=(const Recording &obj) {
			m_filename = obj.m_filename;
			m_startFrame = obj.m_startFrame;
			m_endFrame = obj.m_endFrame;
			m_listOfNoises = obj.m_listOfNoises;
			return (*this);
		}
	
		int32_t Recording::ID() {
			return 303;
		}
	
		const string Recording::ShortName() {
			return "Recording";
		}
	
		const string Recording::LongName() {
			return "fxe.Recording";
		}
	
		int32_t Recording::getID() const {
			return Recording::ID();
		}
	
		const string Recording::getShortName() const {
			return Recording::ShortName();
		}
	
		const string Recording::getLongName() const {
			return Recording::LongName();
		}
	
		std::string Recording::getFilename() const {
			return m_filename;
		}
		
		void Recording::setFilename(const std::string &val) {
			m_filename = val;
		}
		uint32_t Recording::getStartFrame() const {
			return m_startFrame;
		}
		
		void Recording::setStartFrame(const uint32_t &val) {
			m_startFrame = val;
		}
		uint32_t Recording::getEndFrame() const {
			return m_endFrame;
		}
		
		void Recording::setEndFrame(const uint32_t &val) {
			m_endFrame = val;
		}
		std::vector<fxe::Noise> Recording::getListOfNoises() const {
			return m_listOfNoises;
		}
		
		void Recording::setListOfNoises(const std::vector<fxe::Noise> &val) {
			m_listOfNoises = val;
		}
		
		void Recording::clear_ListOfNoises() {
			m_listOfNoises.clear();
		}
		
		uint32_t Recording::getSize_ListOfNoises() const {
			return m_listOfNoises.size();
		}
		
		bool Recording::isEmpty_ListOfNoises() const {
			return m_listOfNoises.empty();
		}
		
		void Recording::addTo_ListOfNoises(const fxe::Noise &val) {
			m_listOfNoises.push_back(val);
		}
		
		void Recording::insertTo_ListOfNoises(const fxe::Noise &val) {
			m_listOfNoises.insert(m_listOfNoises.begin(), val);
		}
		
		bool Recording::contains_ListOfNoises(const fxe::Noise &val) const {
			bool found = false;
			std::vector<fxe::Noise>::const_iterator it = m_listOfNoises.begin();
			while (it != m_listOfNoises.end() && !found) {
			    found |= (*it).toString() == val.toString();
			    it++;
			}
			return found;
		}
		
		std::pair<std::vector<fxe::Noise>::iterator, std::vector<fxe::Noise>::iterator> Recording::iteratorPair_ListOfNoises() {
			return std::make_pair(m_listOfNoises.begin(), m_listOfNoises.end());
		}
	
		void Recording::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.visit(CRC32 < CharList<'f', CharList<'i', CharList<'l', CharList<'e', CharList<'n', CharList<'a', CharList<'m', CharList<'e', NullType> > > > > > > >  >::RESULT, 1, "Recording.filename", "filename", m_filename);
			v.visit(CRC32 < CharList<'s', CharList<'t', CharList<'a', CharList<'r', CharList<'t', CharList<'F', CharList<'r', CharList<'a', CharList<'m', CharList<'e', NullType> > > > > > > > > >  >::RESULT, 2, "Recording.startFrame", "startFrame", m_startFrame);
			v.visit(CRC32 < CharList<'e', CharList<'n', CharList<'d', CharList<'F', CharList<'r', CharList<'a', CharList<'m', CharList<'e', NullType> > > > > > > >  >::RESULT, 3, "Recording.endFrame", "endFrame", m_endFrame);
			v.endVisit();
		}
	
		const string Recording::toString() const {
			stringstream s;
	
	
			s << "Filename: " << getFilename() << " ";
			s << "StartFrame: " << getStartFrame() << " ";
			s << "EndFrame: " << getEndFrame() << " ";
			s << "Number of elements in list of Noises: " << getSize_ListOfNoises() << " ";
	
			return s.str();
		}
	
		ostream& Recording::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);
	
			s->write(1,
					m_filename);
			s->write(2,
					m_startFrame);
			s->write(3,
					m_endFrame);
			// Write number of elements in m_listOfNoises.
			const uint32_t numberOfNoises = static_cast<uint32_t>(m_listOfNoises.size());
			s->write(4, numberOfNoises);
			
			// Write actual elements into a stringstream.
			std::stringstream sstrOfNoises;
			for (uint32_t i = 0; i < numberOfNoises; i++) {
			    sstrOfNoises << m_listOfNoises.at(i);
			}
			
			// Write string of elements.
			if (numberOfNoises > 0) {
				s->write(4 + 4,
				        sstrOfNoises.str());
			}
			return out;
		}
	
		istream& Recording::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
	
			d->read(1,
					m_filename);
			d->read(2,
					m_startFrame);
			d->read(3,
					m_endFrame);
			// Clean up the existing list of Noises.
			m_listOfNoises.clear();
			
			// Read number of elements in m_listOfNoises.
			uint32_t numberOfNoises = 0;
			d->read(4,
			       numberOfNoises);
			
			if (numberOfNoises > 0) {
			    // Read string of elements.
			    string elements;
				d->read(4 + 4,
				   elements);
			
			    stringstream sstr(elements);
			
			    // Read actual elements from stringstream.
			    for (uint32_t i = 0; i < numberOfNoises; i++) {
			        fxe::Noise element;
			        sstr >> element;
			        m_listOfNoises.push_back(element);
			    }
			}
			return in;
		}
} // fxe
