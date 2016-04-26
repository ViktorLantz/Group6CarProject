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


#include "opendavinci/generated/odcore/data/dmcp/PulseAckContainersMessage.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
			
				PulseAckContainersMessage::PulseAckContainersMessage() :
				    SerializableData(), Visitable()
					, m_listOfContainers()
				{
				}
			
				PulseAckContainersMessage::PulseAckContainersMessage(
					const vector<odcore::data::Container> &val0
				) :
				    SerializableData(), Visitable()
					, m_listOfContainers(val0)
				{
				}
			
				PulseAckContainersMessage::PulseAckContainersMessage(const PulseAckContainersMessage &obj) :
				    SerializableData(), Visitable()
					, m_listOfContainers(obj.m_listOfContainers)
				{
				}
				
				PulseAckContainersMessage::~PulseAckContainersMessage() {
				}
			
				PulseAckContainersMessage& PulseAckContainersMessage::operator=(const PulseAckContainersMessage &obj) {
					m_listOfContainers = obj.m_listOfContainers;
					return (*this);
				}
			
				int32_t PulseAckContainersMessage::ID() {
					return 103;
				}
			
				const string PulseAckContainersMessage::ShortName() {
					return "PulseAckContainersMessage";
				}
			
				const string PulseAckContainersMessage::LongName() {
					return "odcore.data.dmcp.PulseAckContainersMessage";
				}
			
				int32_t PulseAckContainersMessage::getID() const {
					return PulseAckContainersMessage::ID();
				}
			
				const string PulseAckContainersMessage::getShortName() const {
					return PulseAckContainersMessage::ShortName();
				}
			
				const string PulseAckContainersMessage::getLongName() const {
					return PulseAckContainersMessage::LongName();
				}
			
				std::vector<odcore::data::Container> PulseAckContainersMessage::getListOfContainers() const {
					return m_listOfContainers;
				}
				
				void PulseAckContainersMessage::setListOfContainers(const std::vector<odcore::data::Container> &val) {
					m_listOfContainers = val;
				}
				
				void PulseAckContainersMessage::clear_ListOfContainers() {
					m_listOfContainers.clear();
				}
				
				uint32_t PulseAckContainersMessage::getSize_ListOfContainers() const {
					return m_listOfContainers.size();
				}
				
				bool PulseAckContainersMessage::isEmpty_ListOfContainers() const {
					return m_listOfContainers.empty();
				}
				
				void PulseAckContainersMessage::addTo_ListOfContainers(const odcore::data::Container &val) {
					m_listOfContainers.push_back(val);
				}
				
				void PulseAckContainersMessage::insertTo_ListOfContainers(const odcore::data::Container &val) {
					m_listOfContainers.insert(m_listOfContainers.begin(), val);
				}
				
				bool PulseAckContainersMessage::contains_ListOfContainers(const odcore::data::Container &val) const {
					bool found = false;
					std::vector<odcore::data::Container>::const_iterator it = m_listOfContainers.begin();
					while (it != m_listOfContainers.end() && !found) {
					    found |= (*it).toString() == val.toString();
					    it++;
					}
					return found;
				}
				
				std::pair<std::vector<odcore::data::Container>::iterator, std::vector<odcore::data::Container>::iterator> PulseAckContainersMessage::iteratorPair_ListOfContainers() {
					return std::make_pair(m_listOfContainers.begin(), m_listOfContainers.end());
				}
			
				void PulseAckContainersMessage::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					v.endVisit();
				}
			
				const string PulseAckContainersMessage::toString() const {
					stringstream s;
			
			
					s << "Number of elements in list of Containers: " << getSize_ListOfContainers() << " ";
			
					return s.str();
				}
			
				ostream& PulseAckContainersMessage::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					// Write number of elements in m_listOfContainers.
					const uint32_t numberOfContainers = static_cast<uint32_t>(m_listOfContainers.size());
					s->write(1, numberOfContainers);
					
					// Write actual elements into a stringstream.
					std::stringstream sstrOfContainers;
					for (uint32_t i = 0; i < numberOfContainers; i++) {
					    sstrOfContainers << m_listOfContainers.at(i);
					}
					
					// Write string of elements.
					if (numberOfContainers > 0) {
						s->write(1 + 1,
						        sstrOfContainers.str());
					}
					return out;
				}
			
				istream& PulseAckContainersMessage::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					// Clean up the existing list of Containers.
					m_listOfContainers.clear();
					
					// Read number of elements in m_listOfContainers.
					uint32_t numberOfContainers = 0;
					d->read(1,
					       numberOfContainers);
					
					if (numberOfContainers > 0) {
					    // Read string of elements.
					    string elements;
						d->read(1 + 1,
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
