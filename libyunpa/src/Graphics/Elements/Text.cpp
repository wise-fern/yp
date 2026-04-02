module;
#include <string>
#include <string_view>
module libyunpa;
import :Text;

namespace libyunpa {
Text::Text(const Options &options)
    : Positionable(options), _text(options.text) {
  update();
  height(1);
}

void Text::update() {
  output(Positionable::apply(_text));
  width(_text.size());
}

void Text::set_text(std::string_view text) {
  _text = text;
}

std::string_view Text::get_text() const {
  return _text;
}
} // namespace libyunpa
