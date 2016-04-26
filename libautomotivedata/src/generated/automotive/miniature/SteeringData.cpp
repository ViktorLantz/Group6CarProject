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


#include "automotivedata/generated/automotive/miniature/SteeringData.h"

namespace automotive {
	namespace miniature {
			using namespace std;
			using namespace odcore::base;
		
		
			SteeringData::SteeringData() :
			    SerializableData(), Visitable()
				, m_exampleData(0.0)
			{
			}
		
			SteeringData::SteeringData(
				const double &val0
			) :
			    SerializableData(), Visitable()
				, m_exampleData(val0)
			{
			}
		
			SteeringData::SteeringData(const SteeringData &obj) :
			    SerializableData(), Visitable()
				, m_exampleData(obj.m_exampleData)
			{
			}
			
			SteeringData::~SteeringData() {
			}
		
			SteeringData& SteeringData::operator=(const SteeringData &obj) {
				m_exampleData = obj.m_exampleData;
				return (*this);
			}
		
			int32_t SteeringData::ID() {
				return 80;
			}
		
			const string SteeringData::ShortName() {
				return "SteeringData";
			}
		
			const string SteeringData::LongName() {
				return "automotive.miniature.SteeringData";
			}
		
			int32_t SteeringData::getID() const {
				return SteeringData::ID();
			}
		
			const string SteeringData::getShortName() const {
				return SteeringData::ShortName();
			}
		
			const string SteeringData::getLongName() const {
				return SteeringData::LongName();
			}
		
			double SteeringData::getExampleData() const {
				return m_exampleData;
			}
			
			void SteeringData::setExampleData(const double &val) {
				m_exampleData = val;
			}
		
			void SteeringData::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				v.visit(CRC32 < CharList<'e', CharList<'x', CharList<'a', CharList<'m', CharList<'p', CharList<'l', CharList<'e', CharList<'D', CharList<'a', CharList<'t', CharList<'a', NullType> > > > > > > > > > >  >::RESULT, 1, "SteeringData.exampleData", "exampleData", m_exampleData);
				v.endVisit();
			}
		
			const string SteeringData::toString() const {
				stringstream s;
		
		
				s << "ExampleData: " << getExampleData() << " ";
		
				return s.str();
			}
		
			ostream& SteeringData::operator<<(ostream &out) const {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				s->write(1,
						m_exampleData);
				return out;
			}
		
			istream& SteeringData::operator>>(istream &in) {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				d->read(1,
						m_exampleData);
				return in;
			}
	} // miniature
} // automotive
