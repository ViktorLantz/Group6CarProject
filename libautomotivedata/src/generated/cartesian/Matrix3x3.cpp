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


#include "automotivedata/generated/cartesian/Matrix3x3.h"

namespace cartesian {
		using namespace std;
		using namespace odcore::base;
	
	
		Matrix3x3::Matrix3x3() :
		    SerializableData(), Visitable()
			, m_XX(0.0)
			, m_XY(0.0)
			, m_XZ(0.0)
			, m_YX(0.0)
			, m_YY(0.0)
			, m_YZ(0.0)
			, m_ZX(0.0)
			, m_ZY(0.0)
			, m_ZZ(0.0)
		{
		}
	
		Matrix3x3::Matrix3x3(
			const double &val0, 
			const double &val1, 
			const double &val2, 
			const double &val3, 
			const double &val4, 
			const double &val5, 
			const double &val6, 
			const double &val7, 
			const double &val8
		) :
		    SerializableData(), Visitable()
			, m_XX(val0)
			, m_XY(val1)
			, m_XZ(val2)
			, m_YX(val3)
			, m_YY(val4)
			, m_YZ(val5)
			, m_ZX(val6)
			, m_ZY(val7)
			, m_ZZ(val8)
		{
		}
	
		Matrix3x3::Matrix3x3(const Matrix3x3 &obj) :
		    SerializableData(), Visitable()
			, m_XX(obj.m_XX)
			, m_XY(obj.m_XY)
			, m_XZ(obj.m_XZ)
			, m_YX(obj.m_YX)
			, m_YY(obj.m_YY)
			, m_YZ(obj.m_YZ)
			, m_ZX(obj.m_ZX)
			, m_ZY(obj.m_ZY)
			, m_ZZ(obj.m_ZZ)
		{
		}
		
		Matrix3x3::~Matrix3x3() {
		}
	
		Matrix3x3& Matrix3x3::operator=(const Matrix3x3 &obj) {
			m_XX = obj.m_XX;
			m_XY = obj.m_XY;
			m_XZ = obj.m_XZ;
			m_YX = obj.m_YX;
			m_YY = obj.m_YY;
			m_YZ = obj.m_YZ;
			m_ZX = obj.m_ZX;
			m_ZY = obj.m_ZY;
			m_ZZ = obj.m_ZZ;
			return (*this);
		}
	
		int32_t Matrix3x3::ID() {
			return 52;
		}
	
		const string Matrix3x3::ShortName() {
			return "Matrix3x3";
		}
	
		const string Matrix3x3::LongName() {
			return "cartesian.Matrix3x3";
		}
	
		int32_t Matrix3x3::getID() const {
			return Matrix3x3::ID();
		}
	
		const string Matrix3x3::getShortName() const {
			return Matrix3x3::ShortName();
		}
	
		const string Matrix3x3::getLongName() const {
			return Matrix3x3::LongName();
		}
	
		double Matrix3x3::getXX() const {
			return m_XX;
		}
		
		void Matrix3x3::setXX(const double &val) {
			m_XX = val;
		}
		double Matrix3x3::getXY() const {
			return m_XY;
		}
		
		void Matrix3x3::setXY(const double &val) {
			m_XY = val;
		}
		double Matrix3x3::getXZ() const {
			return m_XZ;
		}
		
		void Matrix3x3::setXZ(const double &val) {
			m_XZ = val;
		}
		double Matrix3x3::getYX() const {
			return m_YX;
		}
		
		void Matrix3x3::setYX(const double &val) {
			m_YX = val;
		}
		double Matrix3x3::getYY() const {
			return m_YY;
		}
		
		void Matrix3x3::setYY(const double &val) {
			m_YY = val;
		}
		double Matrix3x3::getYZ() const {
			return m_YZ;
		}
		
		void Matrix3x3::setYZ(const double &val) {
			m_YZ = val;
		}
		double Matrix3x3::getZX() const {
			return m_ZX;
		}
		
		void Matrix3x3::setZX(const double &val) {
			m_ZX = val;
		}
		double Matrix3x3::getZY() const {
			return m_ZY;
		}
		
		void Matrix3x3::setZY(const double &val) {
			m_ZY = val;
		}
		double Matrix3x3::getZZ() const {
			return m_ZZ;
		}
		
		void Matrix3x3::setZZ(const double &val) {
			m_ZZ = val;
		}
	
		void Matrix3x3::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.visit(CRC32 < CharList<'X', CharList<'X', NullType> >  >::RESULT, 1, "Matrix3x3.XX", "XX", m_XX);
			v.visit(CRC32 < CharList<'X', CharList<'Y', NullType> >  >::RESULT, 2, "Matrix3x3.XY", "XY", m_XY);
			v.visit(CRC32 < CharList<'X', CharList<'Z', NullType> >  >::RESULT, 3, "Matrix3x3.XZ", "XZ", m_XZ);
			v.visit(CRC32 < CharList<'Y', CharList<'X', NullType> >  >::RESULT, 4, "Matrix3x3.YX", "YX", m_YX);
			v.visit(CRC32 < CharList<'Y', CharList<'Y', NullType> >  >::RESULT, 5, "Matrix3x3.YY", "YY", m_YY);
			v.visit(CRC32 < CharList<'Y', CharList<'Z', NullType> >  >::RESULT, 6, "Matrix3x3.YZ", "YZ", m_YZ);
			v.visit(CRC32 < CharList<'Z', CharList<'X', NullType> >  >::RESULT, 7, "Matrix3x3.ZX", "ZX", m_ZX);
			v.visit(CRC32 < CharList<'Z', CharList<'Y', NullType> >  >::RESULT, 8, "Matrix3x3.ZY", "ZY", m_ZY);
			v.visit(CRC32 < CharList<'Z', CharList<'Z', NullType> >  >::RESULT, 9, "Matrix3x3.ZZ", "ZZ", m_ZZ);
			v.endVisit();
		}
	
		const string Matrix3x3::toString() const {
			stringstream s;
	
	
			s << "XX: " << getXX() << " ";
			s << "XY: " << getXY() << " ";
			s << "XZ: " << getXZ() << " ";
			s << "YX: " << getYX() << " ";
			s << "YY: " << getYY() << " ";
			s << "YZ: " << getYZ() << " ";
			s << "ZX: " << getZX() << " ";
			s << "ZY: " << getZY() << " ";
			s << "ZZ: " << getZZ() << " ";
	
			return s.str();
		}
	
		ostream& Matrix3x3::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);
	
			s->write(1,
					m_XX);
			s->write(2,
					m_XY);
			s->write(3,
					m_XZ);
			s->write(4,
					m_YX);
			s->write(5,
					m_YY);
			s->write(6,
					m_YZ);
			s->write(7,
					m_ZX);
			s->write(8,
					m_ZY);
			s->write(9,
					m_ZZ);
			return out;
		}
	
		istream& Matrix3x3::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
	
			d->read(1,
					m_XX);
			d->read(2,
					m_XY);
			d->read(3,
					m_XZ);
			d->read(4,
					m_YX);
			d->read(5,
					m_YY);
			d->read(6,
					m_YZ);
			d->read(7,
					m_ZX);
			d->read(8,
					m_ZY);
			d->read(9,
					m_ZZ);
			return in;
		}
} // cartesian
