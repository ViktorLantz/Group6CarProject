/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef ODCORE_DATA_DMCP_MODULEEXITCODEMESSAGE_H
#define ODCORE_DATA_DMCP_MODULEEXITCODEMESSAGE_H

#include "opendavinci/odcore/opendavinci.h"


#include "opendavinci/odcore/base/Visitable.h"
#include "opendavinci/odcore/data/SerializableData.h"


namespace odcore {
	namespace data {
		namespace dmcp {
			using namespace std;
			
			class ModuleExitCodeMessage : public odcore::data::SerializableData, public odcore::base::Visitable {
				public:
					enum ModuleExitCode {
						OKAY = 0,
						CONNECTION_LOST = 3,
						NO_SUPERCOMPONENT = 4,
						SERIOUS_ERROR = 2,
						UNDEFINED_EXITCODE = 5,
						EXCEPTION_CAUGHT = 1,
					};
				public:
					ModuleExitCodeMessage();
			
					ModuleExitCodeMessage(
					const ModuleExitCode &val0
					);
			
					virtual ~ModuleExitCodeMessage();
			
					/**
					 * Copy constructor.
					 *
					 * @param obj Reference to an object of this class.
					 */
					ModuleExitCodeMessage(const ModuleExitCodeMessage &obj);
			
					/**
					 * Assignment operator.
					 *
					 * @param obj Reference to an object of this class.
					 * @return Reference to this instance.
					 */
					ModuleExitCodeMessage& operator=(const ModuleExitCodeMessage &obj);
			
				public:
				public:
					/**
					 * @return moduleExitCode.
					 */
					ModuleExitCode getModuleExitCode() const;
					
					/**
					 * This method sets moduleExitCode.
					 *
					 * @param val Value for moduleExitCode.
					 */
					void setModuleExitCode(const ModuleExitCode &val);
			
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
					ModuleExitCode m_moduleExitCode;
			
			};
		} // dmcp
	} // data
} // odcore

#endif /*ODCORE_DATA_DMCP_MODULEEXITCODEMESSAGE_H*/
