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


#include "automotivedata/generated/automotive/miniature/UserButtonData.h"

namespace automotive {
	namespace miniature {
			using namespace std;
			using namespace odcore::base;
		
		
			UserButtonData::UserButtonData() :
			    SerializableData(), Visitable()
				, m_buttonStatus()
				, m_duration(0.0)
			{
			}
		
			UserButtonData::UserButtonData(
				const UserButtonData::ButtonStatus &val0, 
				const double &val1
			) :
			    SerializableData(), Visitable()
				, m_buttonStatus(val0)
				, m_duration(val1)
			{
			}
		
			UserButtonData::UserButtonData(const UserButtonData &obj) :
			    SerializableData(), Visitable()
				, m_buttonStatus(obj.m_buttonStatus)
				, m_duration(obj.m_duration)
			{
			}
			
			UserButtonData::~UserButtonData() {
			}
		
			UserButtonData& UserButtonData::operator=(const UserButtonData &obj) {
				m_buttonStatus = obj.m_buttonStatus;
				m_duration = obj.m_duration;
				return (*this);
			}
		
			int32_t UserButtonData::ID() {
				return 84;
			}
		
			const string UserButtonData::ShortName() {
				return "UserButtonData";
			}
		
			const string UserButtonData::LongName() {
				return "automotive.miniature.UserButtonData";
			}
		
			int32_t UserButtonData::getID() const {
				return UserButtonData::ID();
			}
		
			const string UserButtonData::getShortName() const {
				return UserButtonData::ShortName();
			}
		
			const string UserButtonData::getLongName() const {
				return UserButtonData::LongName();
			}
		
			UserButtonData::ButtonStatus UserButtonData::getButtonStatus() const {
				return m_buttonStatus;
			}
			
			void UserButtonData::setButtonStatus(const UserButtonData::ButtonStatus &val) {
				m_buttonStatus = val;
			}
			double UserButtonData::getDuration() const {
				return m_duration;
			}
			
			void UserButtonData::setDuration(const double &val) {
				m_duration = val;
			}
		
			void UserButtonData::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				int32_t int32t_buttonStatus = m_buttonStatus;
				v.visit(CRC32 < CharList<'b', CharList<'u', CharList<'t', CharList<'t', CharList<'o', CharList<'n', CharList<'S', CharList<'t', CharList<'a', CharList<'t', CharList<'u', CharList<'s', NullType> > > > > > > > > > > >  >::RESULT, 1, "UserButtonData.buttonStatus", "buttonStatus", int32t_buttonStatus);
				v.visit(CRC32 < CharList<'d', CharList<'u', CharList<'r', CharList<'a', CharList<'t', CharList<'i', CharList<'o', CharList<'n', NullType> > > > > > > >  >::RESULT, 2, "UserButtonData.duration", "duration", m_duration);
				v.endVisit();
			}
		
			const string UserButtonData::toString() const {
				stringstream s;
		
		
				switch(getButtonStatus()) {
					case PRESSED :
					s << "ButtonStatus: UserButtonData::PRESSED (1) ";
					break;
					case RELEASED :
					s << "ButtonStatus: UserButtonData::RELEASED (0) ";
					break;
					case UNDEFINED :
					s << "ButtonStatus: UserButtonData::UNDEFINED (-1) ";
					break;
				}
				s << "Duration: " << getDuration() << " ";
		
				return s.str();
			}
		
			ostream& UserButtonData::operator<<(ostream &out) const {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				int32_t int32t_buttonStatus = m_buttonStatus;
				s->write(1,
						int32t_buttonStatus);
				s->write(2,
						m_duration);
				return out;
			}
		
			istream& UserButtonData::operator>>(istream &in) {
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				int32_t int32t_buttonStatus = 0;
				d->read(1,
						int32t_buttonStatus);
				m_buttonStatus = static_cast<UserButtonData::ButtonStatus>(int32t_buttonStatus);
				d->read(2,
						m_duration);
				return in;
			}
	} // miniature
} // automotive
