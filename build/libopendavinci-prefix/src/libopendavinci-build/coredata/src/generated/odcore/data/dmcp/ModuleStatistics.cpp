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


#include "opendavinci/generated/odcore/data/dmcp/ModuleStatistics.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
			
				ModuleStatistics::ModuleStatistics() :
				    SerializableData(), Visitable()
					, m_listOfModuleStatistics()
				{
				}
			
				ModuleStatistics::ModuleStatistics(
					const vector<odcore::data::dmcp::ModuleStatistic> &val0
				) :
				    SerializableData(), Visitable()
					, m_listOfModuleStatistics(val0)
				{
				}
			
				ModuleStatistics::ModuleStatistics(const ModuleStatistics &obj) :
				    SerializableData(), Visitable()
					, m_listOfModuleStatistics(obj.m_listOfModuleStatistics)
				{
				}
				
				ModuleStatistics::~ModuleStatistics() {
				}
			
				ModuleStatistics& ModuleStatistics::operator=(const ModuleStatistics &obj) {
					m_listOfModuleStatistics = obj.m_listOfModuleStatistics;
					return (*this);
				}
			
				int32_t ModuleStatistics::ID() {
					return 8;
				}
			
				const string ModuleStatistics::ShortName() {
					return "ModuleStatistics";
				}
			
				const string ModuleStatistics::LongName() {
					return "odcore.data.dmcp.ModuleStatistics";
				}
			
				int32_t ModuleStatistics::getID() const {
					return ModuleStatistics::ID();
				}
			
				const string ModuleStatistics::getShortName() const {
					return ModuleStatistics::ShortName();
				}
			
				const string ModuleStatistics::getLongName() const {
					return ModuleStatistics::LongName();
				}
			
				std::vector<odcore::data::dmcp::ModuleStatistic> ModuleStatistics::getListOfModuleStatistics() const {
					return m_listOfModuleStatistics;
				}
				
				void ModuleStatistics::setListOfModuleStatistics(const std::vector<odcore::data::dmcp::ModuleStatistic> &val) {
					m_listOfModuleStatistics = val;
				}
				
				void ModuleStatistics::clear_ListOfModuleStatistics() {
					m_listOfModuleStatistics.clear();
				}
				
				uint32_t ModuleStatistics::getSize_ListOfModuleStatistics() const {
					return m_listOfModuleStatistics.size();
				}
				
				bool ModuleStatistics::isEmpty_ListOfModuleStatistics() const {
					return m_listOfModuleStatistics.empty();
				}
				
				void ModuleStatistics::addTo_ListOfModuleStatistics(const odcore::data::dmcp::ModuleStatistic &val) {
					m_listOfModuleStatistics.push_back(val);
				}
				
				void ModuleStatistics::insertTo_ListOfModuleStatistics(const odcore::data::dmcp::ModuleStatistic &val) {
					m_listOfModuleStatistics.insert(m_listOfModuleStatistics.begin(), val);
				}
				
				bool ModuleStatistics::contains_ListOfModuleStatistics(const odcore::data::dmcp::ModuleStatistic &val) const {
					bool found = false;
					std::vector<odcore::data::dmcp::ModuleStatistic>::const_iterator it = m_listOfModuleStatistics.begin();
					while (it != m_listOfModuleStatistics.end() && !found) {
					    found |= (*it).toString() == val.toString();
					    it++;
					}
					return found;
				}
				
				std::pair<std::vector<odcore::data::dmcp::ModuleStatistic>::iterator, std::vector<odcore::data::dmcp::ModuleStatistic>::iterator> ModuleStatistics::iteratorPair_ListOfModuleStatistics() {
					return std::make_pair(m_listOfModuleStatistics.begin(), m_listOfModuleStatistics.end());
				}
			
				void ModuleStatistics::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					v.endVisit();
				}
			
				const string ModuleStatistics::toString() const {
					stringstream s;
			
			
					s << "Number of elements in list of ModuleStatistics: " << getSize_ListOfModuleStatistics() << " ";
			
					return s.str();
				}
			
				ostream& ModuleStatistics::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					// Write number of elements in m_listOfModuleStatistics.
					const uint32_t numberOfModuleStatistics = static_cast<uint32_t>(m_listOfModuleStatistics.size());
					s->write(1, numberOfModuleStatistics);
					
					// Write actual elements into a stringstream.
					std::stringstream sstrOfModuleStatistics;
					for (uint32_t i = 0; i < numberOfModuleStatistics; i++) {
					    sstrOfModuleStatistics << m_listOfModuleStatistics.at(i);
					}
					
					// Write string of elements.
					if (numberOfModuleStatistics > 0) {
						s->write(1 + 1,
						        sstrOfModuleStatistics.str());
					}
					return out;
				}
			
				istream& ModuleStatistics::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					// Clean up the existing list of ModuleStatistics.
					m_listOfModuleStatistics.clear();
					
					// Read number of elements in m_listOfModuleStatistics.
					uint32_t numberOfModuleStatistics = 0;
					d->read(1,
					       numberOfModuleStatistics);
					
					if (numberOfModuleStatistics > 0) {
					    // Read string of elements.
					    string elements;
						d->read(1 + 1,
						   elements);
					
					    stringstream sstr(elements);
					
					    // Read actual elements from stringstream.
					    for (uint32_t i = 0; i < numberOfModuleStatistics; i++) {
					        odcore::data::dmcp::ModuleStatistic element;
					        sstr >> element;
					        m_listOfModuleStatistics.push_back(element);
					    }
					}
					return in;
				}
		} // dmcp
	} // data
} // odcore
