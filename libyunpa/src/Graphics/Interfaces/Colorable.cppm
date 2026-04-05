module;
#include <string>
#include <string_view>
export module libyunpa:Colorable;
import :Color;
import :Printable;

namespace libyunpa {
export class Colorable : public virtual Printable {
public:
  struct Options {
    Color color;
    Color bgColor;
  };

private:
  Color _color;
  Color _bgColor;

  [[nodiscard]]
  std::string apply_background(std::string_view text) const;
  [[nodiscard]]
  std::string apply_foreground(std::string_view text) const;

protected:
  [[nodiscard]]
  std::string apply(std::string_view text) const override;

public:
  Colorable(const Options &options);
  ~Colorable() override = 0;
};
} // namespace libyunpa
