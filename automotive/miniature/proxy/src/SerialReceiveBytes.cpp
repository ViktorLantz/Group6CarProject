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

/**
 * Deconstructs the string received leaving on the values
 * of the string.
 * @method SerialReceiveBytes::nextString
 * @param  str        [contains the string received from serial port]
 */
void SerialReceiveBytes::nextString(const string &str) {
  cout << "Received " << str.length() << " bytes containing '" << str << "'" << endl;

  std::string u_str("u");
  std::string i_str("i");
  std::string startSQ_str("[");
  std::string endSQ_str("]");

  // buffer_container collects the data from str.
  buffer_container += str;
  cout << "BUFFER_TEST: " << str << endl;

  // If buffer_container has a full package with both delimiters present then run while loop.
  while (buffer_container.find(startSQ_str) != string::npos && buffer_container.find(endSQ_str) != string::npos) {
    std::size_t sq_bracket = buffer_container.find(endSQ_str);

    // Extracts the package into sub_str, starting from the identifier to the value before last delimiter.
    if (buffer_container.at(0) == '[') {
      std::string sub_str = buffer_container.substr(1,(sq_bracket-1));
      buffer_container.erase(0,sq_bracket+1);

      // Identifies the package (sub_str) and erases the identifier,
      // then calls the vector_compiler sending the package.
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

/**
 * Deconstructs the values out of the string and
 * pushing them into their repective vectors.
 * @method vector_compiler
 * @param  str         [contains the string of sub_str]
 */
vector <int> vector_compiler(string str) {
  vector <int> vec;
  std::string comma(",");
  std::size_t comma_val = cont_str.find_first_of(comma);

  // Separates the values in the package (str), recursively if needed.
  if (cont_str.find(comma) != string::npos) {
    std::string val_str = str.substr(0,comma_val);
    std::string rest_str = str.substr(comma_val+1);
    std::stringstream vS(val_str);
    int value;
    vS >> value;
    vec.push_back(value);
    vector <int> rest_vec;
    rest_vec = vector_compiler(rest_str);
    vec.insert(vec.end(), rest_vec.begin(), rest_vec.end());
  }

  // Converts the values from string to integers.
  std::stringstream cS(str);
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
