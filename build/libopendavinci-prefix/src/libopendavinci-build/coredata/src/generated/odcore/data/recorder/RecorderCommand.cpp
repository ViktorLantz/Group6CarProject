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


#include "opendavinci/generated/odcore/data/recorder/RecorderCommand.h"

namespace odcore {
	namespace data {
		namespace recorder {
				using namespace std;
				using namespace odcore::base;
			
			
				RecorderCommand::RecorderCommand() :
				    SerializableData(), Visitable()
					, m_command()
				{
				}
			
				RecorderCommand::RecorderCommand(
					const RecorderCommand::Command &val0
				) :
				    SerializableData(), Visitable()
					, m_command(val0)
				{
				}
			
				RecorderCommand::RecorderCommand(const RecorderCommand &obj) :
				    SerializableData(), Visitable()
					, m_command(obj.m_command)
				{
				}
				
				RecorderCommand::~RecorderCommand() {
				}
			
				RecorderCommand& RecorderCommand::operator=(const RecorderCommand &obj) {
					m_command = obj.m_command;
					return (*this);
				}
			
				int32_t RecorderCommand::ID() {
					return 11;
				}
			
				const string RecorderCommand::ShortName() {
					return "RecorderCommand";
				}
			
				const string RecorderCommand::LongName() {
					return "odcore.data.recorder.RecorderCommand";
				}
			
				int32_t RecorderCommand::getID() const {
					return RecorderCommand::ID();
				}
			
				const string RecorderCommand::getShortName() const {
					return RecorderCommand::ShortName();
				}
			
				const string RecorderCommand::getLongName() const {
					return RecorderCommand::LongName();
				}
			
				RecorderCommand::Command RecorderCommand::getCommand() const {
					return m_command;
				}
				
				void RecorderCommand::setCommand(const RecorderCommand::Command &val) {
					m_command = val;
				}
			
				void RecorderCommand::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					int32_t int32t_command = m_command;
					v.visit(0x1304776F, 1, "RecorderCommand.command", "command", int32t_command);
					v.endVisit();
				}
			
				const string RecorderCommand::toString() const {
					stringstream s;
			
			
					switch(getCommand()) {
						case STOP :
						s << "Command: RecorderCommand::STOP (1) ";
						break;
						case RECORD :
						s << "Command: RecorderCommand::RECORD (0) ";
						break;
					}
			
					return s.str();
				}
			
				ostream& RecorderCommand::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					int32_t int32t_command = m_command;
					s->write(0x1304776F, int32t_command);
					return out;
				}
			
				istream& RecorderCommand::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					int32_t int32t_command = 0;
					d->read(0x1304776F, int32t_command);
					m_command = static_cast<RecorderCommand::Command>(int32t_command);
					return in;
				}
		} // recorder
	} // data
} // odcore
