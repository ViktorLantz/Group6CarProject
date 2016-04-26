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

#include "opendavinci/generated/odcore/data/SharedData.h"

#include "opendavinci/generated/odcore/data/SharedPointCloud.h"

namespace odcore {
	namespace data {
			using namespace std;
			using namespace odcore::base;
		
		
			SharedPointCloud::SharedPointCloud() :
			    odcore::data::SharedData()
				, m_width(0)
				, m_height(0)
				, m_numberOfComponentsPerPoint(0)
				, m_componentDataType()
				, m_userInfo(0)
			{
			}
		
			SharedPointCloud::SharedPointCloud(
				const uint32_t &val0, 
				const uint32_t &val1, 
				const uint8_t &val2, 
				const SharedPointCloud::COMPONENTDATATYPE &val3, 
				const uint32_t &val4
			) :
			    odcore::data::SharedData()
				, m_width(val0)
				, m_height(val1)
				, m_numberOfComponentsPerPoint(val2)
				, m_componentDataType(val3)
				, m_userInfo(val4)
			{
			}
		
			SharedPointCloud::SharedPointCloud(const SharedPointCloud &obj) :
			    odcore::data::SharedData(obj)
				, m_width(obj.m_width)
				, m_height(obj.m_height)
				, m_numberOfComponentsPerPoint(obj.m_numberOfComponentsPerPoint)
				, m_componentDataType(obj.m_componentDataType)
				, m_userInfo(obj.m_userInfo)
			{
			}
			
			SharedPointCloud::~SharedPointCloud() {
			}
		
			SharedPointCloud& SharedPointCloud::operator=(const SharedPointCloud &obj) {
				odcore::data::SharedData::operator=(obj);
				m_width = obj.m_width;
				m_height = obj.m_height;
				m_numberOfComponentsPerPoint = obj.m_numberOfComponentsPerPoint;
				m_componentDataType = obj.m_componentDataType;
				m_userInfo = obj.m_userInfo;
				return (*this);
			}
		
			int32_t SharedPointCloud::ID() {
				return 28;
			}
		
			const string SharedPointCloud::ShortName() {
				return "SharedPointCloud";
			}
		
			const string SharedPointCloud::LongName() {
				return "odcore.data.SharedPointCloud";
			}
		
			int32_t SharedPointCloud::getID() const {
				return SharedPointCloud::ID();
			}
		
			const string SharedPointCloud::getShortName() const {
				return SharedPointCloud::ShortName();
			}
		
			const string SharedPointCloud::getLongName() const {
				return SharedPointCloud::LongName();
			}
		
			uint32_t SharedPointCloud::getWidth() const {
				return m_width;
			}
			
			void SharedPointCloud::setWidth(const uint32_t &val) {
				m_width = val;
			}
			uint32_t SharedPointCloud::getHeight() const {
				return m_height;
			}
			
			void SharedPointCloud::setHeight(const uint32_t &val) {
				m_height = val;
			}
			uint8_t SharedPointCloud::getNumberOfComponentsPerPoint() const {
				return m_numberOfComponentsPerPoint;
			}
			
			void SharedPointCloud::setNumberOfComponentsPerPoint(const uint8_t &val) {
				m_numberOfComponentsPerPoint = val;
			}
			SharedPointCloud::COMPONENTDATATYPE SharedPointCloud::getComponentDataType() const {
				return m_componentDataType;
			}
			
			void SharedPointCloud::setComponentDataType(const SharedPointCloud::COMPONENTDATATYPE &val) {
				m_componentDataType = val;
			}
			uint32_t SharedPointCloud::getUserInfo() const {
				return m_userInfo;
			}
			
			void SharedPointCloud::setUserInfo(const uint32_t &val) {
				m_userInfo = val;
			}
		
			void SharedPointCloud::accept(odcore::base::Visitor &v) {
				v.beginVisit();
				odcore::data::SharedData::accept(v);
				v.visit(CRC32 < CharList<'w', CharList<'i', CharList<'d', CharList<'t', CharList<'h', NullType> > > > >  >::RESULT, 1, "SharedPointCloud.width", "width", m_width);
				v.visit(CRC32 < CharList<'h', CharList<'e', CharList<'i', CharList<'g', CharList<'h', CharList<'t', NullType> > > > > >  >::RESULT, 2, "SharedPointCloud.height", "height", m_height);
				v.visit(CRC32 < CharList<'n', CharList<'u', CharList<'m', CharList<'b', CharList<'e', CharList<'r', CharList<'O', CharList<'f', CharList<'C', CharList<'o', CharList<'m', CharList<'p', CharList<'o', CharList<'n', CharList<'e', CharList<'n', CharList<'t', CharList<'s', CharList<'P', CharList<'e', CharList<'r', CharList<'P', CharList<'o', CharList<'i', CharList<'n', CharList<'t', NullType> > > > > > > > > > > > > > > > > > > > > > > > > >  >::RESULT, 3, "SharedPointCloud.numberOfComponentsPerPoint", "numberOfComponentsPerPoint", m_numberOfComponentsPerPoint);
				int32_t int32t_componentDataType = m_componentDataType;
				v.visit(CRC32 < CharList<'c', CharList<'o', CharList<'m', CharList<'p', CharList<'o', CharList<'n', CharList<'e', CharList<'n', CharList<'t', CharList<'D', CharList<'a', CharList<'t', CharList<'a', CharList<'T', CharList<'y', CharList<'p', CharList<'e', NullType> > > > > > > > > > > > > > > > >  >::RESULT, 4, "SharedPointCloud.componentDataType", "componentDataType", int32t_componentDataType);
				v.visit(CRC32 < CharList<'u', CharList<'s', CharList<'e', CharList<'r', CharList<'I', CharList<'n', CharList<'f', CharList<'o', NullType> > > > > > > >  >::RESULT, 5, "SharedPointCloud.userInfo", "userInfo", m_userInfo);
				v.endVisit();
			}
		
			const string SharedPointCloud::toString() const {
				stringstream s;
		
				s << odcore::data::SharedData::toString() << " ";
		
				s << "Width: " << getWidth() << " ";
				s << "Height: " << getHeight() << " ";
				s << "NumberOfComponentsPerPoint: " << getNumberOfComponentsPerPoint() << " ";
				switch(getComponentDataType()) {
					case UINT8_T :
					s << "ComponentDataType: SharedPointCloud::UINT8_T (2) ";
					break;
					case UINT32_T :
					s << "ComponentDataType: SharedPointCloud::UINT32_T (6) ";
					break;
					case INTEGERS_END :
					s << "ComponentDataType: SharedPointCloud::INTEGERS_END (10) ";
					break;
					case DOUBLE_T :
					s << "ComponentDataType: SharedPointCloud::DOUBLE_T (14) ";
					break;
					case INT64_T :
					s << "ComponentDataType: SharedPointCloud::INT64_T (9) ";
					break;
					case INT8_T :
					s << "ComponentDataType: SharedPointCloud::INT8_T (3) ";
					break;
					case FLOAT_T :
					s << "ComponentDataType: SharedPointCloud::FLOAT_T (13) ";
					break;
					case UINT64_T :
					s << "ComponentDataType: SharedPointCloud::UINT64_T (8) ";
					break;
					case INT32_T :
					s << "ComponentDataType: SharedPointCloud::INT32_T (7) ";
					break;
					case BOOL_T :
					s << "ComponentDataType: SharedPointCloud::BOOL_T (0) ";
					break;
					case INT16_T :
					s << "ComponentDataType: SharedPointCloud::INT16_T (5) ";
					break;
					case UINT16_T :
					s << "ComponentDataType: SharedPointCloud::UINT16_T (4) ";
					break;
					case INTEGERS_START :
					s << "ComponentDataType: SharedPointCloud::INTEGERS_START (1) ";
					break;
					case CHAR_T :
					s << "ComponentDataType: SharedPointCloud::CHAR_T (11) ";
					break;
					case UCHAR_T :
					s << "ComponentDataType: SharedPointCloud::UCHAR_T (12) ";
					break;
				}
				s << "UserInfo: " << getUserInfo() << " ";
		
				return s.str();
			}
		
			ostream& SharedPointCloud::operator<<(ostream &out) const {
				odcore::data::SharedData::operator<<(out);
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Serializer> s = sf.getSerializer(out);
		
				s->write(1,
						m_width);
				s->write(2,
						m_height);
				s->write(3,
						m_numberOfComponentsPerPoint);
				int32_t int32t_componentDataType = m_componentDataType;
				s->write(4,
						int32t_componentDataType);
				s->write(5,
						m_userInfo);
				return out;
			}
		
			istream& SharedPointCloud::operator>>(istream &in) {
				odcore::data::SharedData::operator>>(in);
		
				SerializationFactory& sf = SerializationFactory::getInstance();
		
				std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
		
				d->read(1,
						m_width);
				d->read(2,
						m_height);
				d->read(3,
						m_numberOfComponentsPerPoint);
				int32_t int32t_componentDataType = 0;
				d->read(4,
						int32t_componentDataType);
				m_componentDataType = static_cast<SharedPointCloud::COMPONENTDATATYPE>(int32t_componentDataType);
				d->read(5,
						m_userInfo);
				return in;
			}
	} // data
} // odcore
