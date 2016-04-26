/**
 * OpenDaVINCI - Tutorial.
 * Copyright (C) 2015 Christian Berger
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <stdint.h>
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <sstream>
#include <opendavinci/odcore/base/Thread.h>
#include <opendavinci/odcore/wrapper/SerialPort.h>
#include <opendavinci/odcore/wrapper/SerialPortFactory.h>

#include "SerialReceiveBytes.hpp"

// We add some of OpenDaVINCI's namespaces for the sake of readability.
using namespace std;
using namespace odcore;
using namespace odcore::wrapper;

std::string buffer_container("");
std::vector <int> us_vec(2);
std::vector <int> ir_vec(3);
std::vector <int> vector_compiler(string str);

void SerialReceiveBytes::nextString(const string &str) {
   cout << "Received " << str.length() << " bytes containing '" << str << "'" << endl;

    std::string u_str("u");
    std::string i_str("i");
    std::string cbracket("{");
    std::string cebracket("}");
    std::string startSQ_str("[");
    std::string endSQ_str("]");

    // Add the arduino sensor data to buffer container string
    buffer_container += str;
    cout << "BUFFER_TEST: " << str << endl;
    // Keep adding to string until we have a complete sensor packet (Both end delimiters present)
    while (buffer_container.find(startSQ_str) != string::npos && buffer_container.find(endSQ_str) != string::npos) {    
        std::size_t sq_bracket = buffer_container.find(endSQ_str);
        
        if (buffer_container.at(0) == '[') {
            std::string sub_str = buffer_container.substr(1,(sq_bracket-1));
            buffer_container.erase(0,sq_bracket+1);
                
            if (sub_str.at(0) == 'u') {
                sub_str.erase(0,1);
                us_vec = vector_compiler(sub_str);
            }
            else if (sub_str.at(0) == 'i') {
                sub_str.erase(0,1);
                ir_vec = vector_compiler(sub_str);
            }
        }
        else if (buffer_container.at(0) != '[') {
            std::size_t size_erase = buffer_container.find_first_of(startSQ_str);
            buffer_container.erase(0,(size_erase));
        }
    }
}

vector <int> vector_compiler(string str) {
    std::string cont_str = str;
    vector <int> vec;
    std::string comma(",");
    std::size_t comma_val = cont_str.find_first_of(comma);

    if (cont_str.find(comma) != string::npos) {
        std::string val_str = cont_str.substr(0,comma_val);
        std::string rest_str = cont_str.substr(comma_val+1);
        std::stringstream vS(val_str);
        int value;
        vS >> value;
        vec.push_back(value);
        vec = vector_compiler(rest_str);
    }
    std::stringstream cS(cont_str);
    int final_value;
    cS >> final_value;
    vec.push_back(final_value);
	return vec;
}

string SerialReceiveBytes::getString() {
    return buffer_container;
}

vector <int> SerialReceiveBytes::getIRVector() {
    return ir_vec;
}

vector <int> SerialReceiveBytes::getUSVector() {
    return us_vec;
}




