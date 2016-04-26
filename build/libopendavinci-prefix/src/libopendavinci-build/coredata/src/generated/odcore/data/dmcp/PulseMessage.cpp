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


#include "opendavinci/generated/odcore/data/dmcp/PulseMessage.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
			
				PulseMessage::PulseMessage() :
				    SerializableData(), Visitable()
					, m_realTimeFromSupercomponent()
					, m_nominalTimeSlice(0)
					, m_cumulatedTimeSlice(0)
					, m_listOfContainers()
				{
				}
			
				PulseMessage::PulseMessage(
					const odcore::data::TimeStamp &val0, 
					const uint32_t &val1, 
					const uint32_t &val2, 
					const vector<odcore::data::Container> &val3
				) :
				    SerializableData(), Visitable()
					, m_realTimeFromSupercomponent(val0)
					, m_nominalTimeSlice(val1)
					, m_cumulatedTimeSlice(val2)
					, m_listOfContainers(val3)
				{
				}
			
				PulseMessage::PulseMessage(const PulseMessage &obj) :
				    SerializableData(), Visitable()
					, m_realTimeFromSupercomponent(obj.m_realTimeFromSupercomponent)
					, m_nominalTimeSlice(obj.m_nominalTimeSlice)
					, m_cumulatedTimeSlice(obj.m_cumulatedTimeSlice)
					, m_listOfContainers(obj.m_listOfContainers)
				{
				}
				
				PulseMessage::~PulseMessage() {
				}
			
				PulseMessage& PulseMessage::operator=(const PulseMessage &obj) {
					m_realTimeFromSupercomponent = obj.m_realTimeFromSupercomponent;
					m_nominalTimeSlice = obj.m_nominalTimeSlice;
					m_cumulatedTimeSlice = obj.m_cumulatedTimeSlice;
					m_listOfContainers = obj.m_listOfContainers;
					return (*this);
				}
			
				int32_t PulseMessage::ID() {
					return 101;
				}
			
				const string PulseMessage::ShortName() {
					return "PulseMessage";
				}
			
				const string PulseMessage::LongName() {
					return "odcore.data.dmcp.PulseMessage";
				}
			
				int32_t PulseMessage::getID() const {
					return PulseMessage::ID();
				}
			
				const string PulseMessage::getShortName() const {
					return PulseMessage::ShortName();
				}
			
				const string PulseMessage::getLongName() const {
					return PulseMessage::LongName();
				}
			
				odcore::data::TimeStamp PulseMessage::getRealTimeFromSupercomponent() const {
					return m_realTimeFromSupercomponent;
				}
				
				void PulseMessage::setRealTimeFromSupercomponent(const odcore::data::TimeStamp &val) {
					m_realTimeFromSupercomponent = val;
				}
				uint32_t PulseMessage::getNominalTimeSlice() const {
					return m_nominalTimeSlice;
				}
				
				void PulseMessage::setNominalTimeSlice(const uint32_t &val) {
					m_nominalTimeSlice = val;
				}
				uint32_t PulseMessage::getCumulatedTimeSlice() const {
					return m_cumulatedTimeSlice;
				}
				
				void PulseMessage::setCumulatedTimeSlice(const uint32_t &val) {
					m_cumulatedTimeSlice = val;
				}
				std::vector<odcore::data::Container> PulseMessage::getListOfContainers() const {
					return m_listOfContainers;
				}
				
				void PulseMessage::setListOfContainers(const std::vector<odcore::data::Container> &val) {
					m_listOfContainers = val;
				}
				
				void PulseMessage::clear_ListOfContainers() {
					m_listOfContainers.clear();
				}
				
				uint32_t PulseMessage::getSize_ListOfContainers() const {
					return m_listOfContainers.size();
				}
				
				bool PulseMessage::isEmpty_ListOfContainers() const {
					return m_listOfContainers.empty();
				}
				
				void PulseMessage::addTo_ListOfContainers(const odcore::data::Container &val) {
					m_listOfContainers.push_back(val);
				}
				
				void PulseMessage::insertTo_ListOfContainers(const odcore::data::Container &val) {
					m_listOfContainers.insert(m_listOfContainers.begin(), val);
				}
				
				bool PulseMessage::contains_ListOfContainers(const odcore::data::Container &val) const {
					bool found = false;
					std::vector<odcore::data::Container>::const_iterator it = m_listOfContainers.begin();
					while (it != m_listOfContainers.end() && !found) {
					    found |= (*it).toString() == val.toString();
					    it++;
					}
					return found;
				}
				
				std::pair<std::vector<odcore::data::Container>::iterator, std::vector<odcore::data::Container>::iterator> PulseMessage::iteratorPair_ListOfContainers() {
					return std::make_pair(m_listOfContainers.begin(), m_listOfContainers.end());
				}
			
				void PulseMessage::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					v.visit(CRC32 < CharList<'r', CharList<'e', CharList<'a', CharList<'l', CharList<'T', CharList<'i', CharList<'m', CharList<'e', CharList<'F', CharList<'r', CharList<'o', CharList<'m', CharList<'S', CharList<'u', CharList<'p', CharList<'e', CharList<'r', CharList<'c', CharList<'o', CharList<'m', CharList<'p', CharList<'o', CharList<'n', CharList<'e', CharList<'n', CharList<'t', NullType> > > > > > > > > > > > > > > > > > > > > > > > > >  >::RESULT, 1, "PulseMessage.realTimeFromSupercomponent", "realTimeFromSupercomponent", m_realTimeFromSupercomponent);
					v.visit(CRC32 < CharList<'n', CharList<'o', CharList<'m', CharList<'i', CharList<'n', CharList<'a', CharList<'l', CharList<'T', CharList<'i', CharList<'m', CharList<'e', CharList<'S', CharList<'l', CharList<'i', CharList<'c', CharList<'e', NullType> > > > > > > > > > > > > > > >  >::RESULT, 2, "PulseMessage.nominalTimeSlice", "nominalTimeSlice", m_nominalTimeSlice);
					v.visit(CRC32 < CharList<'c', CharList<'u', CharList<'m', CharList<'u', CharList<'l', CharList<'a', CharList<'t', CharList<'e', CharList<'d', CharList<'T', CharList<'i', CharList<'m', CharList<'e', CharList<'S', CharList<'l', CharList<'i', CharList<'c', CharList<'e', NullType> > > > > > > > > > > > > > > > > >  >::RESULT, 3, "PulseMessage.cumulatedTimeSlice", "cumulatedTimeSlice", m_cumulatedTimeSlice);
					v.endVisit();
				}
			
				const string PulseMessage::toString() const {
					stringstream s;
			
			
					s << "RealTimeFromSupercomponent: " << getRealTimeFromSupercomponent().toString() << " ";
					s << "NominalTimeSlice: " << getNominalTimeSlice() << " ";
					s << "CumulatedTimeSlice: " << getCumulatedTimeSlice() << " ";
					s << "Number of elements in list of Containers: " << getSize_ListOfContainers() << " ";
			
					return s.str();
				}
			
				ostream& PulseMessage::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					s->write(1,
							m_realTimeFromSupercomponent);
					s->write(2,
							m_nominalTimeSlice);
					s->write(3,
							m_cumulatedTimeSlice);
					// Write number of elements in m_listOfContainers.
					const uint32_t numberOfContainers = static_cast<uint32_t>(m_listOfContainers.size());
					s->write(4, numberOfContainers);
					
					// Write actual elements into a stringstream.
					std::stringstream sstrOfContainers;
					for (uint32_t i = 0; i < numberOfContainers; i++) {
					    sstrOfContainers << m_listOfContainers.at(i);
					}
					
					// Write string of elements.
					if (numberOfContainers > 0) {
						s->write(4 + 4,
						        sstrOfContainers.str());
					}
					return out;
				}
			
				istream& PulseMessage::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					d->read(1,
							m_realTimeFromSupercomponent);
					d->read(2,
							m_nominalTimeSlice);
					d->read(3,
							m_cumulatedTimeSlice);
					// Clean up the existing list of Containers.
					m_listOfContainers.clear();
					
					// Read number of elements in m_listOfContainers.
					uint32_t numberOfContainers = 0;
					d->read(4,
					       numberOfContainers);
					
					if (numberOfContainers > 0) {
					    // Read string of elements.
					    string elements;
						d->read(4 + 4,
						   elements);
					
					    stringstream sstr(elements);
					
					    // Read actual elements from stringstream.
					    for (uint32_t i = 0; i < numberOfContainers; i++) {
					        odcore::data::Container element;
					        sstr >> element;
					        m_listOfContainers.push_back(element);
					    }
					}
					return in;
				}
		} // dmcp
	} // data
} // odcore
