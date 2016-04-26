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


#include "automotivedata/generated/fxe/KeyPoint.h"

namespace fxe {
		using namespace std;
		using namespace odcore::base;
	
	
		KeyPoint::KeyPoint() :
		    SerializableData(), Visitable()
			, m_pt()
			, m_size(0)
		{
		}
	
		KeyPoint::KeyPoint(
			const cartesian::Point2 &val0, 
			const float &val1
		) :
		    SerializableData(), Visitable()
			, m_pt(val0)
			, m_size(val1)
		{
		}
	
		KeyPoint::KeyPoint(const KeyPoint &obj) :
		    SerializableData(), Visitable()
			, m_pt(obj.m_pt)
			, m_size(obj.m_size)
		{
		}
		
		KeyPoint::~KeyPoint() {
		}
	
		KeyPoint& KeyPoint::operator=(const KeyPoint &obj) {
			m_pt = obj.m_pt;
			m_size = obj.m_size;
			return (*this);
		}
	
		int32_t KeyPoint::ID() {
			return 301;
		}
	
		const string KeyPoint::ShortName() {
			return "KeyPoint";
		}
	
		const string KeyPoint::LongName() {
			return "fxe.KeyPoint";
		}
	
		int32_t KeyPoint::getID() const {
			return KeyPoint::ID();
		}
	
		const string KeyPoint::getShortName() const {
			return KeyPoint::ShortName();
		}
	
		const string KeyPoint::getLongName() const {
			return KeyPoint::LongName();
		}
	
		cartesian::Point2 KeyPoint::getPt() const {
			return m_pt;
		}
		
		void KeyPoint::setPt(const cartesian::Point2 &val) {
			m_pt = val;
		}
		float KeyPoint::getSize() const {
			return m_size;
		}
		
		void KeyPoint::setSize(const float &val) {
			m_size = val;
		}
	
		void KeyPoint::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.visit(CRC32 < CharList<'p', CharList<'t', NullType> >  >::RESULT, 1, "KeyPoint.pt", "pt", m_pt);
			v.visit(CRC32 < CharList<'s', CharList<'i', CharList<'z', CharList<'e', NullType> > > >  >::RESULT, 2, "KeyPoint.size", "size", m_size);
			v.endVisit();
		}
	
		const string KeyPoint::toString() const {
			stringstream s;
	
	
			s << "Pt: " << getPt().toString() << " ";
			s << "Size: " << getSize() << " ";
	
			return s.str();
		}
	
		ostream& KeyPoint::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);
	
			s->write(1,
					m_pt);
			s->write(2,
					m_size);
			return out;
		}
	
		istream& KeyPoint::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
	
			d->read(1,
					m_pt);
			d->read(2,
					m_size);
			return in;
		}
} // fxe
