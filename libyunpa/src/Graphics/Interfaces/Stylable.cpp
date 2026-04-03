module;
#include <format>
#include <string>
#include <string_view>

module libyunpa;
import :Stylable;

namespace libyunpa {
Stylable::Stylable(const Options &options)
    : _bold(options.bold),
      _italic(options.italic),
      _underline(options.underline),
      _dim(options.dim),
      _blink(options.blink),
      _inverted(options.inverted) {}

Stylable::~Stylable() = default;

bool Stylable::get_bold() const {
  return _bold;
}

void Stylable::set_bold(bool bold) {
  _bold = bold;
}

bool Stylable::get_italic() const {
  return _italic;
}

void Stylable::set_italic(bool italic) {
  _italic = italic;
}

bool Stylable::get_underline() const {
  return _underline;
}

void Stylable::set_underline(bool underline) {
  _underline = underline;
}

bool Stylable::get_dim() const {
  return _dim;
}

void Stylable::set_dim(bool dim) {
  _dim = dim;
}

bool Stylable::get_blink() const {
  return _blink;
}

void Stylable::set_blink(bool blink) {
  _blink = blink;
}

bool Stylable::get_inverted() const {
  return _inverted;
}

void Stylable::set_inverted(bool inverted) {
  _inverted = inverted;
}

std::string Stylable::apply(std::string_view text) const {
  std::string output{text};
  if (_bold) {
    output = std::format("\x1b[1m{}\x1b[22m", output);
  }
  if (_italic) {
    output = std::format("\x1b[3m{}\x1b[23m", output);
  }
  if (_underline) {
    output = std::format("\x1b[4m{}\x1b[24m", output);
  }
  if (_dim) {
    output = std::format("\x1b[2m{}\x1b[22m", output);
  }
  if (_blink) {
    output = std::format("\x1b[5m{}\x1b[25m", output);
  }
  if (_inverted) {
    output = std::format("\x1b[7m{}\x1b[27m", output);
  }
  return output;
}
} // namespace libyunpa
