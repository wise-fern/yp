module;

module libyunpa;
import :Color;

namespace libyunpa {
Color::Color(unsigned char red, unsigned char green, unsigned char blue)
    : _red(red), _green(green), _blue(blue) {}

Color::Color(Builtin name) : Color(0, 0, 0) {
  // NOLINTBEGIN(*-magic-numbers)
  switch (name) {
  case BLUE:
    _blue = 0xFF;
    break;
  case GREEN:
    _green = 0xFF;
    break;
  case RED:
    _red = 0xFF;
    break;
  case WHITE:
    _red = _green = _blue = 0xFF;
  case BLACK:
  default:
    break;
  }
  // NOLINTEND(*-magic-numbers)
}
} // namespace libyunpa
