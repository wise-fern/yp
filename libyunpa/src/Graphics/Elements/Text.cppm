module;
#include <string>
#include <string_view>
export module libyunpa:Text;
import :Positionable;
import :Stylable;

namespace libyunpa {
export class Text : public Positionable, public Stylable {
public:
  struct Options : public Positionable::Options, public Stylable::Options {
    std::string text;
  };

private:
  std::string _text;
  [[nodiscard]]
  std::string apply(std::string_view text) const override;

public:
  Text(const Options &options);
  ~Text() override = default;

  void update() override;
  [[nodiscard]]
  std::string_view get_text() const;
  void set_text(std::string_view text);
};
} // namespace libyunpa
