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


#include "opendavinci/generated/odcore/data/dmcp/ModuleStateMessage.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
			
				ModuleStateMessage::ModuleStateMessage() :
				    SerializableData(), Visitable()
					, m_moduleState()
				{
				}
			
				ModuleStateMessage::ModuleStateMessage(
					const ModuleStateMessage::ModuleState &val0
				) :
				    SerializableData(), Visitable()
					, m_moduleState(val0)
				{
				}
			
				ModuleStateMessage::ModuleStateMessage(const ModuleStateMessage &obj) :
				    SerializableData(), Visitable()
					, m_moduleState(obj.m_moduleState)
				{
				}
				
				ModuleStateMessage::~ModuleStateMessage() {
				}
			
				ModuleStateMessage& ModuleStateMessage::operator=(const ModuleStateMessage &obj) {
					m_moduleState = obj.m_moduleState;
					return (*this);
				}
			
				int32_t ModuleStateMessage::ID() {
					return 6;
				}
			
				const string ModuleStateMessage::ShortName() {
					return "ModuleStateMessage";
				}
			
				const string ModuleStateMessage::LongName() {
					return "odcore.data.dmcp.ModuleStateMessage";
				}
			
				int32_t ModuleStateMessage::getID() const {
					return ModuleStateMessage::ID();
				}
			
				const string ModuleStateMessage::getShortName() const {
					return ModuleStateMessage::ShortName();
				}
			
				const string ModuleStateMessage::getLongName() const {
					return ModuleStateMessage::LongName();
				}
			
				ModuleStateMessage::ModuleState ModuleStateMessage::getModuleState() const {
					return m_moduleState;
				}
				
				void ModuleStateMessage::setModuleState(const ModuleStateMessage::ModuleState &val) {
					m_moduleState = val;
				}
			
				void ModuleStateMessage::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					int32_t int32t_moduleState = m_moduleState;
					v.visit(CRC32 < CharList<'m', CharList<'o', CharList<'d', CharList<'u', CharList<'l', CharList<'e', CharList<'S', CharList<'t', CharList<'a', CharList<'t', CharList<'e', NullType> > > > > > > > > > >  >::RESULT, 1, "ModuleStateMessage.moduleState", "moduleState", int32t_moduleState);
					v.endVisit();
				}
			
				const string ModuleStateMessage::toString() const {
					stringstream s;
			
			
					switch(getModuleState()) {
						case NOT_RUNNING :
						s << "ModuleState: ModuleStateMessage::NOT_RUNNING (0) ";
						break;
						case RUNNING :
						s << "ModuleState: ModuleStateMessage::RUNNING (1) ";
						break;
						case UNDEFINED_STATE :
						s << "ModuleState: ModuleStateMessage::UNDEFINED_STATE (2) ";
						break;
					}
			
					return s.str();
				}
			
				ostream& ModuleStateMessage::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					int32_t int32t_moduleState = m_moduleState;
					s->write(1,
							int32t_moduleState);
					return out;
				}
			
				istream& ModuleStateMessage::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					int32_t int32t_moduleState = 0;
					d->read(1,
							int32t_moduleState);
					m_moduleState = static_cast<ModuleStateMessage::ModuleState>(int32t_moduleState);
					return in;
				}
		} // dmcp
	} // data
} // odcore
