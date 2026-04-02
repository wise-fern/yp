module;

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
} // namespace libyunpa
