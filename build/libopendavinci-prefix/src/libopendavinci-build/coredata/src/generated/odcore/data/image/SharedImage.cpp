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

#include "opendavinci/generated/odcore/data/image/SharedImage.h"

namespace odcore {
	namespace data {
		namespace image {
				using namespace std;
				using namespace odcore::base;
			
			
				SharedImage::SharedImage() :
				    odcore::data::SharedData()
					, m_width(0)
					, m_height(0)
					, m_bytesPerPixel(0)
				{
				}
			
				SharedImage::SharedImage(
					const uint32_t &val0, 
					const uint32_t &val1, 
					const uint32_t &val2
				) :
				    odcore::data::SharedData()
					, m_width(val0)
					, m_height(val1)
					, m_bytesPerPixel(val2)
				{
				}
			
				SharedImage::SharedImage(const SharedImage &obj) :
				    odcore::data::SharedData(obj)
					, m_width(obj.m_width)
					, m_height(obj.m_height)
					, m_bytesPerPixel(obj.m_bytesPerPixel)
				{
				}
				
				SharedImage::~SharedImage() {
				}
			
				SharedImage& SharedImage::operator=(const SharedImage &obj) {
					odcore::data::SharedData::operator=(obj);
					m_width = obj.m_width;
					m_height = obj.m_height;
					m_bytesPerPixel = obj.m_bytesPerPixel;
					return (*this);
				}
			
				int32_t SharedImage::ID() {
					return 14;
				}
			
				const string SharedImage::ShortName() {
					return "SharedImage";
				}
			
				const string SharedImage::LongName() {
					return "odcore.data.image.SharedImage";
				}
			
				int32_t SharedImage::getID() const {
					return SharedImage::ID();
				}
			
				const string SharedImage::getShortName() const {
					return SharedImage::ShortName();
				}
			
				const string SharedImage::getLongName() const {
					return SharedImage::LongName();
				}
			
				uint32_t SharedImage::getWidth() const {
					return m_width;
				}
				
				void SharedImage::setWidth(const uint32_t &val) {
					m_width = val;
				}
				uint32_t SharedImage::getHeight() const {
					return m_height;
				}
				
				void SharedImage::setHeight(const uint32_t &val) {
					m_height = val;
				}
				uint32_t SharedImage::getBytesPerPixel() const {
					return m_bytesPerPixel;
				}
				
				void SharedImage::setBytesPerPixel(const uint32_t &val) {
					m_bytesPerPixel = val;
				}
			
				void SharedImage::accept(odcore::base::Visitor &v) {
					v.beginVisit();
					odcore::data::SharedData::accept(v);
					v.visit(0x0E43598A, 1, "SharedImage.width", "width", m_width);
					v.visit(0x0E4359BD, 2, "SharedImage.height", "height", m_height);
					v.visit(0x09823BBC, 3, "SharedImage.bytesPerPixel", "bytesPerPixel", m_bytesPerPixel);
					v.endVisit();
				}
			
				const string SharedImage::toString() const {
					stringstream s;
			
					s << odcore::data::SharedData::toString() << " ";
			
					s << "Width: " << getWidth() << " ";
					s << "Height: " << getHeight() << " ";
					s << "BytesPerPixel: " << getBytesPerPixel() << " ";
			
					return s.str();
				}
			
				ostream& SharedImage::operator<<(ostream &out) const {
					odcore::data::SharedData::operator<<(out);
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Serializer> s = sf.getSerializer(out);
			
					s->write(0x0E43598A, m_width);
					s->write(0x0E4359BD, m_height);
					s->write(0x09823BBC, m_bytesPerPixel);
					return out;
				}
			
				istream& SharedImage::operator>>(istream &in) {
					odcore::data::SharedData::operator>>(in);
			
					SerializationFactory& sf = SerializationFactory::getInstance();
			
					std::shared_ptr<Deserializer> d = sf.getDeserializer(in);
			
					d->read(0x0E43598A, m_width);
					d->read(0x0E4359BD, m_height);
					d->read(0x09823BBC, m_bytesPerPixel);
					return in;
				}
		} // image
	} // data
} // odcore
