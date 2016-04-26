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


#include "automotivedata/generated/automotive/Constants.h"

namespace automotive {
		using namespace std;
		using namespace odcore::base;
	
		const double Constants::MS2KMH = 3.6;
		const double Constants::KMH2MS = 0.277777777777778;
		const double Constants::G = 9.81;
	
		Constants::Constants() :
		    SerializableData(), Visitable()
		{
		}
	
	
		Constants::Constants(const Constants &obj) :
		    SerializableData(), Visitable()
		{
			(void)obj; // Avoid unused parameter warning.
		}
		
		Constants::~Constants() {
		}
	
		Constants& Constants::operator=(const Constants &obj) {
			(void)obj; // Avoid unused parameter warning.
			return (*this);
		}
	
		int32_t Constants::ID() {
			return 60;
		}
	
		const string Constants::ShortName() {
			return "Constants";
		}
	
		const string Constants::LongName() {
			return "automotive.Constants";
		}
	
		int32_t Constants::getID() const {
			return Constants::ID();
		}
	
		const string Constants::getShortName() const {
			return Constants::ShortName();
		}
	
		const string Constants::getLongName() const {
			return Constants::LongName();
		}
	
	
		void Constants::accept(odcore::base::Visitor &v) {
			v.beginVisit();
			v.endVisit();
		}
	
		const string Constants::toString() const {
			stringstream s;
	
	
	
			return s.str();
		}
	
		ostream& Constants::operator<<(ostream &out) const {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Serializer> s = sf.getSerializer(out);(void)s; // Avoid unused variable warning.
	
			return out;
		}
	
		istream& Constants::operator>>(istream &in) {
	
			SerializationFactory& sf = SerializationFactory::getInstance();
	
			std::shared_ptr<Deserializer> d = sf.getDeserializer(in);(void)d; // Avoid unused variable warning.
	
			return in;
		}
} // automotive
