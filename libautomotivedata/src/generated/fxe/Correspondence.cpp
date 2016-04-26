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


#include "automotivedata/generated/fxe/Correspondence.h"

namespace fxe {
		using namespace std;
		using namespace odcore::base;
	
	
		Correspondence::Correspondence() :
		    SerializableData(), Visitable()
			, m_simulation()
			, m_listOfRealRecordings()
		{
		}
	
		Correspondence::Correspondence(
			const fxe::Recording &val0, 
			const vector<fxe::Recording> &val1
		) :
		    SerializableData(), Visitable()
			, m_simulation(val0)
			, m_listOfRealRecordings(val1)
		{
		}
	
		Correspondence::Correspondence(const Correspondence &obj) :
		    SerializableData(), Visitable()
			, m_simulation(obj.m_simulation)
			, m_listOfRealRecordings(obj.m_listOfRealRecordings)
		{
		}
		
		Correspondence::~Correspondence() {
		}
	
		Correspondence& Correspondence::operator=(const Correspondence &obj) {
			m_simulation = obj.m_simulation;
			m_listOfRealRecordings = obj.m_listOfRealRecordings;
			return (*this);
		}
	
		int32_t Correspondence::ID() {
			return 304;
		}
	
		const string Correspondence::ShortName() {
			return "Correspondence";
		}
	
		const string Correspondence::LongName() {
			return "fxe.Correspondence";
		}
	
		int32_t Correspondence::getID() const {
			return Correspondence::ID();
		}
	
		const string Correspondence::getShortName() const {
			return Correspondence::ShortName();
		}
	
		const string Correspondence::getLongName() const {
			return Correspondence::LongName();
		}
	
		fxe::Recording Correspondence::getSimulation() const {
			return m_simulation;
		}
		
		void Correspondence::setSimulation(const fxe::Recording &val) {
			m_simulation = val;
		}
		std::vector<fxe::Recording> Correspondence::getListOfRealRecordings() const {
			return m_listOfRealRecordings;
		}
		
		void Correspondence::setListOfRealRecordings(const std::vector<fxe::Recording> &val) {
			m_listOfRealRecordings = val;
		}
		
		void Correspondence::clear_ListOfRealRecordings() {
			m_listOfRealRecordings.clear();
		}
		
		uint32_t Correspondence::getSize_ListOfRealRecordings() const {
			return m_listOfRealRecordings.size();
		}
		
		bool Correspondence::isEmpty_ListOfRealRecordings() const {
			return m_listOfRealRecordings.empty();
		}
		
		void Correspondence::addTo_ListOfRealRecordings(const fxe::Recording &val) {
			m_listOfRealRecordings.push_back(val);
		}
		
		void Correspondence::insertTo_ListOfRealRecordings(const fxe::Recording &val) {
			m_listOfRealRecordings.insert(m_listOfRealRecordings.begin(), val);
		}
		
		bool Correspondence::contains_ListOfRealRecordings(const fxe::Recording &val) const {
			bool found = false;
			std::vector<fxe::Recording>::const_iterator it = m_listOfRealRecordings.begin();
			while (it != m_listOfRealRecordings.end() && !found) {
			    found |= (*it).toString() == val.toString();
			    it++;
			}
			return found;
		}
		
		std::pair<std::vector<fxe::Recording>::iterator, std::vector<fxe::Recording>::iterator> Correspondence::iteratorPair_ListOfRealRecordings() {
			return std::make_pair(m_listOfRealRecordings.begin(), m_listOfRealRecordings.end());
		}
	
		void Correspondence::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.visit(CRC32 < CharList<'s', CharList<'i', CharList<'m', CharList<'u', CharList<'l', CharList<'a', CharList<'t', CharList<'i', CharList<'o', CharList<'n', NullType> > > > > > > > > >  >::RESULT, 1, "Correspondence.simulation", "simulation", m_simulation);
			v.endVisit();
		}
	
		const string Correspondence::toString() const {
			stringstream s;
	
	
			s << "Simulation: " << getSimulation().toString() << " ";
			s << "Number of elements in list of RealRecordings: " << getSize_ListOfRealRecordings() << " ";
	
			return s.str();
		}
	
		ostream& Correspondence::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);
	
			s->write(1,
					m_simulation);
			// Write number of elements in m_listOfRealRecordings.
			const uint32_t numberOfRealRecordings = static_cast<uint32_t>(m_listOfRealRecordings.size());
			s->write(2, numberOfRealRecordings);
			
			// Write actual elements into a stringstream.
			std::stringstream sstrOfRealRecordings;
			for (uint32_t i = 0; i < numberOfRealRecordings; i++) {
			    sstrOfRealRecordings << m_listOfRealRecordings.at(i);
			}
			
			// Write string of elements.
			if (numberOfRealRecordings > 0) {
				s->write(2 + 2,
				        sstrOfRealRecordings.str());
			}
			return out;
		}
	
		istream& Correspondence::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
	
			d->read(1,
					m_simulation);
			// Clean up the existing list of RealRecordings.
			m_listOfRealRecordings.clear();
			
			// Read number of elements in m_listOfRealRecordings.
			uint32_t numberOfRealRecordings = 0;
			d->read(2,
			       numberOfRealRecordings);
			
			if (numberOfRealRecordings > 0) {
			    // Read string of elements.
			    string elements;
				d->read(2 + 2,
				   elements);
			
			    stringstream sstr(elements);
			
			    // Read actual elements from stringstream.
			    for (uint32_t i = 0; i < numberOfRealRecordings; i++) {
			        fxe::Recording element;
			        sstr >> element;
			        m_listOfRealRecordings.push_back(element);
			    }
			}
			return in;
		}
} // fxe
