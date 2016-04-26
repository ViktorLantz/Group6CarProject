/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_PLAYER_PLAYERCOMMAND_H
#define ODCORE_DATA_PLAYER_PLAYERCOMMAND_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace odcore {
	namespace data {
		namespace player {
			using namespace std;
			
			class PlayerCommand : public odcore::data::SerializableData, public odcore::base::Visitable {
				public:
					enum Command {
						STEP_FORWARD = 3,
						PAUSE = 1,
						REWIND = 2,
						PLAY = 0,
					};
				public:
					PlayerCommand();
			
					PlayerCommand(
					const Command &val0
					);
			
					virtual ~PlayerCommand();
			
					/**
					 * Copy constructor.
					 *
					 * @param obj Reference to an object of this class.
					 */
					PlayerCommand(const PlayerCommand &obj);
			
					/**
					 * Assignment operator.
					 *
					 * @param obj Reference to an object of this class.
					 * @return Reference to this instance.
					 */
					PlayerCommand& operator=(const PlayerCommand &obj);
			
				public:
				public:
					/**
					 * @return command.
					 */
					Command getCommand() const;
					
					/**
					 * This method sets command.
					 *
					 * @param val Value for command.
					 */
					void setCommand(const Command &val);
			
				public:
					/**
					 * This method returns the message id.
					 *
					 * @return Message id.
					 */
					static int32_t ID();
			
					/**
					 * This method returns the short message name.
					 *
					 * @return Short message name.
					 */
					static const string ShortName();
			
					/**
					 * This method returns the long message name include package/sub structure.
					 *
					 * @return Long message name.
					 */
					static const string LongName();
			
					/**
					 * This method returns the message id.
					 *
					 * @return Message id.
					 */
					virtual int32_t getID() const;
			
					/**
					 * This method returns the short message name.
					 *
					 * @return Short message name.
					 */
					virtual const string getShortName() const;
			
					/**
					 * This method returns the long message name include package/sub structure.
					 *
					 * @return Long message name.
					 */
					virtual const string getLongName() const;
			
				public:
					virtual void accept(odcore::base::Visitor &v);
			
					virtual ostream& operator<<(ostream &out) const;
					virtual istream& operator>>(istream &in);
			
					virtual const string toString() const;
			
				private:
				private:
					Command m_command;
			
			};
		} // player
	} // data
} // odcore

#endif /*ODCORE_DATA_PLAYER_PLAYERCOMMAND_H*/
