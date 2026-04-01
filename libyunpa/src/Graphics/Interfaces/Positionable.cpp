module;
#include <format>
#include <string>
#include <string_view>
module libyunpa;
import :Positionable;

namespace libyunpa {
void Positionable::set_position(Point2u position) {
  _position = position;
}

Point2u Positionable::get_position() const {
  return _position;
}

Positionable::~Positionable() = default;

std::string Positionable::apply(std::string_view text) const {
  return std::format("\x1b[{0};{1}H{2}", _position.y, _position.x, text);
}

Positionable::Positionable(const Options &options)
    : _position(options.position) {}
} // namespace libyunpa
