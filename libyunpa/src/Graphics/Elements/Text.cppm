module;
#include <string>
export module libyunpa:Text;
import :Positionable;

namespace libyunpa {
export class Text : public Positionable {
public:
  struct Options : public Positionable::Options {
    std::string text;
  };

private:
  std::string _text;

public:
  Text(const Options &options);
  ~Text() override = default;

  void update() override;
  [[nodiscard]]
  std::string_view get_text() const;
  void set_text(std::string_view text);
};
} // namespace libyunpa
