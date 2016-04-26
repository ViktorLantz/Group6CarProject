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


#include "opendavinci/generated/odcore/data/dmcp/ModuleExitCodeMessage.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
			
				ModuleExitCodeMessage::ModuleExitCodeMessage() :
				    SerializableData(), Visitable()
					, m_moduleExitCode()
				{
				}
			
				ModuleExitCodeMessage::ModuleExitCodeMessage(
					const ModuleExitCodeMessage::ModuleExitCode &val0
				) :
				    SerializableData(), Visitable()
					, m_moduleExitCode(val0)
				{
				}
			
				ModuleExitCodeMessage::ModuleExitCodeMessage(const ModuleExitCodeMessage &obj) :
				    SerializableData(), Visitable()
					, m_moduleExitCode(obj.m_moduleExitCode)
				{
				}
				
				ModuleExitCodeMessage::~ModuleExitCodeMessage() {
				}
			
				ModuleExitCodeMessage& ModuleExitCodeMessage::operator=(const ModuleExitCodeMessage &obj) {
					m_moduleExitCode = obj.m_moduleExitCode;
					return (*this);
				}
			
				int32_t ModuleExitCodeMessage::ID() {
					return 7;
				}
			
				const string ModuleExitCodeMessage::ShortName() {
					return "ModuleExitCodeMessage";
				}
			
				const string ModuleExitCodeMessage::LongName() {
					return "odcore.data.dmcp.ModuleExitCodeMessage";
				}
			
				int32_t ModuleExitCodeMessage::getID() const {
					return ModuleExitCodeMessage::ID();
				}
			
				const string ModuleExitCodeMessage::getShortName() const {
					return ModuleExitCodeMessage::ShortName();
				}
			
				const string ModuleExitCodeMessage::getLongName() const {
					return ModuleExitCodeMessage::LongName();
				}
			
				ModuleExitCodeMessage::ModuleExitCode ModuleExitCodeMessage::getModuleExitCode() const {
					return m_moduleExitCode;
				}
				
				void ModuleExitCodeMessage::setModuleExitCode(const ModuleExitCodeMessage::ModuleExitCode &val) {
					m_moduleExitCode = val;
				}
			
				void ModuleExitCodeMessage::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					int32_t int32t_moduleExitCode = m_moduleExitCode;
					v.visit(CRC32 < CharList<'m', CharList<'o', CharList<'d', CharList<'u', CharList<'l', CharList<'e', CharList<'E', CharList<'x', CharList<'i', CharList<'t', CharList<'C', CharList<'o', CharList<'d', CharList<'e', NullType> > > > > > > > > > > > > >  >::RESULT, 1, "ModuleExitCodeMessage.moduleExitCode", "moduleExitCode", int32t_moduleExitCode);
					v.endVisit();
				}
			
				const string ModuleExitCodeMessage::toString() const {
					stringstream s;
			
			
					switch(getModuleExitCode()) {
						case OKAY :
						s << "ModuleExitCode: ModuleExitCodeMessage::OKAY (0) ";
						break;
						case CONNECTION_LOST :
						s << "ModuleExitCode: ModuleExitCodeMessage::CONNECTION_LOST (3) ";
						break;
						case NO_SUPERCOMPONENT :
						s << "ModuleExitCode: ModuleExitCodeMessage::NO_SUPERCOMPONENT (4) ";
						break;
						case SERIOUS_ERROR :
						s << "ModuleExitCode: ModuleExitCodeMessage::SERIOUS_ERROR (2) ";
						break;
						case UNDEFINED_EXITCODE :
						s << "ModuleExitCode: ModuleExitCodeMessage::UNDEFINED_EXITCODE (5) ";
						break;
						case EXCEPTION_CAUGHT :
						s << "ModuleExitCode: ModuleExitCodeMessage::EXCEPTION_CAUGHT (1) ";
						break;
					}
			
					return s.str();
				}
			
				ostream& ModuleExitCodeMessage::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					int32_t int32t_moduleExitCode = m_moduleExitCode;
					s->write(1,
							int32t_moduleExitCode);
					return out;
				}
			
				istream& ModuleExitCodeMessage::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					int32_t int32t_moduleExitCode = 0;
					d->read(1,
							int32t_moduleExitCode);
					m_moduleExitCode = static_cast<ModuleExitCodeMessage::ModuleExitCode>(int32t_moduleExitCode);
					return in;
				}
		} // dmcp
	} // data
} // odcore
