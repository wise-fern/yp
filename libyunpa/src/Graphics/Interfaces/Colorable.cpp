module;
#include <string>
#include <string_view>
module libyunpa;
import :Colorable;

namespace libyunpa {
Colorable::~Colorable() = default;

Colorable::Colorable(const Options &options)
    : _color(options.color), _bgColor(options.bgColor) {}

std::string Colorable::apply(std::string_view text) const {
  return _color.apply(_bgColor.apply(text, true));
}

} // namespace libyunpa
