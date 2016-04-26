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


#include "automotivedata/generated/cartesian/Position.h"

namespace cartesian {
		using namespace std;
		using namespace odcore::base;
	
	
		Position::Position() :
		    SerializableData(), Visitable()
			, m_position()
			, m_rotation()
		{
		}
	
		Position::Position(
			const cartesian::Point2 &val0, 
			const cartesian::Point2 &val1
		) :
		    SerializableData(), Visitable()
			, m_position(val0)
			, m_rotation(val1)
		{
		}
	
		Position::Position(const Position &obj) :
		    SerializableData(), Visitable()
			, m_position(obj.m_position)
			, m_rotation(obj.m_rotation)
		{
		}
		
		Position::~Position() {
		}
	
		Position& Position::operator=(const Position &obj) {
			m_position = obj.m_position;
			m_rotation = obj.m_rotation;
			return (*this);
		}
	
		int32_t Position::ID() {
			return 53;
		}
	
		const string Position::ShortName() {
			return "Position";
		}
	
		const string Position::LongName() {
			return "cartesian.Position";
		}
	
		int32_t Position::getID() const {
			return Position::ID();
		}
	
		const string Position::getShortName() const {
			return Position::ShortName();
		}
	
		const string Position::getLongName() const {
			return Position::LongName();
		}
	
		cartesian::Point2 Position::getPosition() const {
			return m_position;
		}
		
		void Position::setPosition(const cartesian::Point2 &val) {
			m_position = val;
		}
		cartesian::Point2 Position::getRotation() const {
			return m_rotation;
		}
		
		void Position::setRotation(const cartesian::Point2 &val) {
			m_rotation = val;
		}
	
		void Position::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.visit(CRC32 < CharList<'p', CharList<'o', CharList<'s', CharList<'i', CharList<'t', CharList<'i', CharList<'o', CharList<'n', NullType> > > > > > > >  >::RESULT, 1, "Position.position", "position", m_position);
			v.visit(CRC32 < CharList<'r', CharList<'o', CharList<'t', CharList<'a', CharList<'t', CharList<'i', CharList<'o', CharList<'n', NullType> > > > > > > >  >::RESULT, 2, "Position.rotation", "rotation", m_rotation);
			v.endVisit();
		}
	
		const string Position::toString() const {
			stringstream s;
	
	
			s << "Position: " << getPosition().toString() << " ";
			s << "Rotation: " << getRotation().toString() << " ";
	
			return s.str();
		}
	
		ostream& Position::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);
	
			s->write(1,
					m_position);
			s->write(2,
					m_rotation);
			return out;
		}
	
		istream& Position::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
	
			d->read(1,
					m_position);
			d->read(2,
					m_rotation);
			return in;
		}
} // cartesian
