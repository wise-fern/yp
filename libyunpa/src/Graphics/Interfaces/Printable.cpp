module;
#include <iostream>
#include <string>
#include <string_view>
module libyunpa;
import :Printable;

namespace libyunpa {
void Printable::output(std::string_view output) {
  _output = output;
}

std::string_view Printable::output() const {
  return _output;
}

void Printable::draw() const {
  std::cout << _output;
}

void Printable::height(unsigned int height) {
  _height = height;
}

void Printable::width(unsigned int width) {
  _width = width;
}

unsigned int Printable::height() const {
  return _height;
}

unsigned int Printable::width() const {
  return _width;
}
} // namespace libyunpa
