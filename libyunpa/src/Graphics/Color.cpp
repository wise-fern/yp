module;
#include <format>
#include <string>
#include <string_view>
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

std::string Color::apply(std::string_view text, bool background) const {
  constexpr auto SET_BACKGROUND{48};
  constexpr auto SET_FOREGROUND{38};
  constexpr auto UNSET_BACKGROUND{49};
  constexpr auto UNSET_FOREGROUND{39};
  return std::format("\x1b[{};2;{};{};{}m{}\x1b[{}m",
                     background ? SET_BACKGROUND : SET_FOREGROUND,
                     _red,
                     _green,
                     _blue,
                     text,
                     background ? UNSET_BACKGROUND : UNSET_FOREGROUND);
}
} // namespace libyunpa
