/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#include <memory>

#include "opendavinci/odcore/base/Hash.h"
#include "opendavinci/odcore/base/Deserializer.h"
#include "opendavinci/odcore/base/SerializationFactory.h"
#include "opendavinci/odcore/base/Serializer.h"


#include "opendavinci/generated/odcore/data/dmcp/RuntimeStatistic.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
			
				RuntimeStatistic::RuntimeStatistic() :
				    SerializableData(), Visitable()
					, m_sliceConsumption(0.0)
				{
				}
			
				RuntimeStatistic::RuntimeStatistic(
					const double &val0
				) :
				    SerializableData(), Visitable()
					, m_sliceConsumption(val0)
				{
				}
			
				RuntimeStatistic::RuntimeStatistic(const RuntimeStatistic &obj) :
				    SerializableData(), Visitable()
					, m_sliceConsumption(obj.m_sliceConsumption)
				{
				}
				
				RuntimeStatistic::~RuntimeStatistic() {
				}
			
				RuntimeStatistic& RuntimeStatistic::operator=(const RuntimeStatistic &obj) {
					m_sliceConsumption = obj.m_sliceConsumption;
					return (*this);
				}
			
				int32_t RuntimeStatistic::ID() {
					return 9;
				}
			
				const string RuntimeStatistic::ShortName() {
					return "RuntimeStatistic";
				}
			
				const string RuntimeStatistic::LongName() {
					return "odcore.data.dmcp.RuntimeStatistic";
				}
			
				int32_t RuntimeStatistic::getID() const {
					return RuntimeStatistic::ID();
				}
			
				const string RuntimeStatistic::getShortName() const {
					return RuntimeStatistic::ShortName();
				}
			
				const string RuntimeStatistic::getLongName() const {
					return RuntimeStatistic::LongName();
				}
			
				double RuntimeStatistic::getSliceConsumption() const {
					return m_sliceConsumption;
				}
				
				void RuntimeStatistic::setSliceConsumption(const double &val) {
					m_sliceConsumption = val;
				}
			
				void RuntimeStatistic::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					v.visit(0x04C11DD4, 1, "RuntimeStatistic.sliceConsumption", "sliceConsumption", m_sliceConsumption);
					v.endVisit();
				}
			
				const string RuntimeStatistic::toString() const {
					stringstream s;
			
			
					s << "SliceConsumption: " << getSliceConsumption() << " ";
			
					return s.str();
				}
			
				ostream& RuntimeStatistic::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					s->write(0x04C11DD4, m_sliceConsumption);
					return out;
				}
			
				istream& RuntimeStatistic::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					d->read(0x04C11DD4, m_sliceConsumption);
					return in;
				}
		} // dmcp
	} // data
} // odcore
