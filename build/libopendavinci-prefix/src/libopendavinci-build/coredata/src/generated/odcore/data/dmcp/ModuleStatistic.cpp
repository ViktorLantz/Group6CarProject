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


#include "opendavinci/generated/odcore/data/dmcp/ModuleStatistic.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
			
				ModuleStatistic::ModuleStatistic() :
				    SerializableData(), Visitable()
					, m_module()
					, m_runtimeStatistic()
				{
				}
			
				ModuleStatistic::ModuleStatistic(
					const odcore::data::dmcp::ModuleDescriptor &val0, 
					const odcore::data::dmcp::RuntimeStatistic &val1
				) :
				    SerializableData(), Visitable()
					, m_module(val0)
					, m_runtimeStatistic(val1)
				{
				}
			
				ModuleStatistic::ModuleStatistic(const ModuleStatistic &obj) :
				    SerializableData(), Visitable()
					, m_module(obj.m_module)
					, m_runtimeStatistic(obj.m_runtimeStatistic)
				{
				}
				
				ModuleStatistic::~ModuleStatistic() {
				}
			
				ModuleStatistic& ModuleStatistic::operator=(const ModuleStatistic &obj) {
					m_module = obj.m_module;
					m_runtimeStatistic = obj.m_runtimeStatistic;
					return (*this);
				}
			
				int32_t ModuleStatistic::ID() {
					return 114;
				}
			
				const string ModuleStatistic::ShortName() {
					return "ModuleStatistic";
				}
			
				const string ModuleStatistic::LongName() {
					return "odcore.data.dmcp.ModuleStatistic";
				}
			
				int32_t ModuleStatistic::getID() const {
					return ModuleStatistic::ID();
				}
			
				const string ModuleStatistic::getShortName() const {
					return ModuleStatistic::ShortName();
				}
			
				const string ModuleStatistic::getLongName() const {
					return ModuleStatistic::LongName();
				}
			
				odcore::data::dmcp::ModuleDescriptor ModuleStatistic::getModule() const {
					return m_module;
				}
				
				void ModuleStatistic::setModule(const odcore::data::dmcp::ModuleDescriptor &val) {
					m_module = val;
				}
				odcore::data::dmcp::RuntimeStatistic ModuleStatistic::getRuntimeStatistic() const {
					return m_runtimeStatistic;
				}
				
				void ModuleStatistic::setRuntimeStatistic(const odcore::data::dmcp::RuntimeStatistic &val) {
					m_runtimeStatistic = val;
				}
			
				void ModuleStatistic::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					v.visit(CRC32 < CharList<'m', CharList<'o', CharList<'d', CharList<'u', CharList<'l', CharList<'e', NullType> > > > > >  >::RESULT, 1, "ModuleStatistic.module", "module", m_module);
					v.visit(CRC32 < CharList<'r', CharList<'u', CharList<'n', CharList<'t', CharList<'i', CharList<'m', CharList<'e', CharList<'S', CharList<'t', CharList<'a', CharList<'t', CharList<'i', CharList<'s', CharList<'t', CharList<'i', CharList<'c', NullType> > > > > > > > > > > > > > > >  >::RESULT, 2, "ModuleStatistic.runtimeStatistic", "runtimeStatistic", m_runtimeStatistic);
					v.endVisit();
				}
			
				const string ModuleStatistic::toString() const {
					stringstream s;
			
			
					s << "Module: " << getModule().toString() << " ";
					s << "RuntimeStatistic: " << getRuntimeStatistic().toString() << " ";
			
					return s.str();
				}
			
				ostream& ModuleStatistic::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					s->write(1,
							m_module);
					s->write(2,
							m_runtimeStatistic);
					return out;
				}
			
				istream& ModuleStatistic::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					d->read(1,
							m_module);
					d->read(2,
							m_runtimeStatistic);
					return in;
				}
		} // dmcp
	} // data
} // odcore
