module;
#include <concepts>
export module libyunpa:Point2;

namespace libyunpa {
export template <typename T>
  requires std::integral<T>
struct Point2 {
  T x{};
  T y{};
};

export using Point2u = Point2<unsigned int>;
} // namespace libyunpa
