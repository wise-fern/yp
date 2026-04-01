module;
#include <cstdint>
export module libyunpa:Color;

namespace libyunpa {
export class Color {
public:
  enum Builtin : std::uint8_t { BLACK, BLUE, GREEN, RED, WHITE };

private:
  unsigned char _red{};
  unsigned char _green{};
  unsigned char _blue{};

public:
  Color(unsigned char red, unsigned char green, unsigned char blue);
  Color(Builtin name);
  Color() = default;
  ~Color() = default;
};
} // namespace libyunpa
