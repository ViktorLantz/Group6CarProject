/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#include <memory>
#include <cstring>
#include "opendavinci/odcore/opendavinci.h"

#include "opendavinci/odcore/base/Hash.h"
#include "opendavinci/odcore/base/Deserializer.h"
#include "opendavinci/odcore/base/SerializationFactory.h"
#include "opendavinci/odcore/base/Serializer.h"


#include "automotivedata/generated/cartesian/Point2.h"

namespace cartesian {
		using namespace std;
		using namespace odcore::base;
	
	
		Point2::Point2() :
		    SerializableData(), Visitable()
			, m_p()
		{
			m_p = new float[getSize_P()];
			for(uint32_t i = 0; i < getSize_P(); i++) {
				m_p[i] = 0;
			}
		}
	
		Point2::Point2(
			const float *val0
		) :
		    SerializableData(), Visitable()
			, m_p() // The content from obj will be copied in the copy-constructor's body.
		{
			m_p = new float[getSize_P()];
			::memcpy(m_p, val0, getSize_P() * sizeof(*m_p));
		}
	
		Point2::Point2(const Point2 &obj) :
		    SerializableData(), Visitable()
			, m_p() // The content from obj will be copied in the copy-constructor's body.
		{
			m_p = new float[getSize_P()];
			::memcpy(m_p, obj.m_p, obj.getSize_P() * sizeof(*m_p));
		}
		
		Point2::~Point2() {
			OPENDAVINCI_CORE_DELETE_ARRAY(m_p);
		}
	
		Point2& Point2::operator=(const Point2 &obj) {
			::memcpy(m_p, obj.m_p, obj.getSize_P() * sizeof(*m_p));
			return (*this);
		}
	
		int32_t Point2::ID() {
			return 51;
		}
	
		const string Point2::ShortName() {
			return "Point2";
		}
	
		const string Point2::LongName() {
			return "cartesian.Point2";
		}
	
		int32_t Point2::getID() const {
			return Point2::ID();
		}
	
		const string Point2::getShortName() const {
			return Point2::ShortName();
		}
	
		const string Point2::getLongName() const {
			return Point2::LongName();
		}
	
		float* Point2::getP() {
			return m_p;
		}
		
		uint32_t Point2::getSize_P() const {
			return 2;
		}
	
		void Point2::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.endVisit();
		}
	
		const string Point2::toString() const {
			stringstream s;
	
	
			s << "p: (";
			for(uint32_t i = 0; i < getSize_P(); i++) {
				s << (m_p[i]) << (((i+1) < getSize_P()) ? ", " : "");
			}
			s << ")" << " ";
	
			return s.str();
		}
	
		ostream& Point2::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);
	
			s->write(1,
					m_p, getSize_P() * (sizeof(float)/sizeof(char)));
			return out;
		}
	
		istream& Point2::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
	
			d->read(1,
			       m_p, getSize_P() * (sizeof(float)/sizeof(char)));
			return in;
		}
} // cartesian
