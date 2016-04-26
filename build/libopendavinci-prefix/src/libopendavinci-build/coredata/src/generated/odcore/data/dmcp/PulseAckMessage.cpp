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


#include "opendavinci/generated/odcore/data/dmcp/PulseAckMessage.h"

namespace odcore {
	namespace data {
		namespace dmcp {
				using namespace std;
				using namespace odcore::base;
			
			
				PulseAckMessage::PulseAckMessage() :
				    SerializableData(), Visitable()
				{
				}
			
			
				PulseAckMessage::PulseAckMessage(const PulseAckMessage &obj) :
				    SerializableData(), Visitable()
				{
					(void)obj; // Avoid unused parameter warning.
				}
				
				PulseAckMessage::~PulseAckMessage() {
				}
			
				PulseAckMessage& PulseAckMessage::operator=(const PulseAckMessage &obj) {
					(void)obj; // Avoid unused parameter warning.
					return (*this);
				}
			
				int32_t PulseAckMessage::ID() {
					return 102;
				}
			
				const string PulseAckMessage::ShortName() {
					return "PulseAckMessage";
				}
			
				const string PulseAckMessage::LongName() {
					return "odcore.data.dmcp.PulseAckMessage";
				}
			
				int32_t PulseAckMessage::getID() const {
					return PulseAckMessage::ID();
				}
			
				const string PulseAckMessage::getShortName() const {
					return PulseAckMessage::ShortName();
				}
			
				const string PulseAckMessage::getLongName() const {
					return PulseAckMessage::LongName();
				}
			
			
				void PulseAckMessage::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					v.endVisit();
				}
			
				const string PulseAckMessage::toString() const {
					stringstream s;
			
			
			
					return s.str();
				}
			
				ostream& PulseAckMessage::operator<<(ostream &out) const {
			
					return out;
				}
			
				istream& PulseAckMessage::operator>>(istream &in) {
			
					return in;
				}
		} // dmcp
	} // data
} // odcore
