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


#include "opendavinci/generated/odcore/data/player/PlayerCommand.h"

namespace odcore {
	namespace data {
		namespace player {
				using namespace std;
				using namespace odcore::base;
			
			
				PlayerCommand::PlayerCommand() :
				    SerializableData(), Visitable()
					, m_command()
				{
				}
			
				PlayerCommand::PlayerCommand(
					const PlayerCommand::Command &val0
				) :
				    SerializableData(), Visitable()
					, m_command(val0)
				{
				}
			
				PlayerCommand::PlayerCommand(const PlayerCommand &obj) :
				    SerializableData(), Visitable()
					, m_command(obj.m_command)
				{
				}
				
				PlayerCommand::~PlayerCommand() {
				}
			
				PlayerCommand& PlayerCommand::operator=(const PlayerCommand &obj) {
					m_command = obj.m_command;
					return (*this);
				}
			
				int32_t PlayerCommand::ID() {
					return 10;
				}
			
				const string PlayerCommand::ShortName() {
					return "PlayerCommand";
				}
			
				const string PlayerCommand::LongName() {
					return "odcore.data.player.PlayerCommand";
				}
			
				int32_t PlayerCommand::getID() const {
					return PlayerCommand::ID();
				}
			
				const string PlayerCommand::getShortName() const {
					return PlayerCommand::ShortName();
				}
			
				const string PlayerCommand::getLongName() const {
					return PlayerCommand::LongName();
				}
			
				PlayerCommand::Command PlayerCommand::getCommand() const {
					return m_command;
				}
				
				void PlayerCommand::setCommand(const PlayerCommand::Command &val) {
					m_command = val;
				}
			
				void PlayerCommand::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					int32_t int32t_command = m_command;
					v.visit(0x1304776F, 1, "PlayerCommand.command", "command", int32t_command);
					v.endVisit();
				}
			
				const string PlayerCommand::toString() const {
					stringstream s;
			
			
					switch(getCommand()) {
						case STEP_FORWARD :
						s << "Command: PlayerCommand::STEP_FORWARD (3) ";
						break;
						case PAUSE :
						s << "Command: PlayerCommand::PAUSE (1) ";
						break;
						case REWIND :
						s << "Command: PlayerCommand::REWIND (2) ";
						break;
						case PLAY :
						s << "Command: PlayerCommand::PLAY (0) ";
						break;
					}
			
					return s.str();
				}
			
				ostream& PlayerCommand::operator<<(ostream &out) const {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					int32_t int32t_command = m_command;
					s->write(0x1304776F, int32t_command);
					return out;
				}
			
				istream& PlayerCommand::operator>>(istream &in) {
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					int32_t int32t_command = 0;
					d->read(0x1304776F, int32t_command);
					m_command = static_cast<PlayerCommand::Command>(int32t_command);
					return in;
				}
		} // player
	} // data
} // odcore
