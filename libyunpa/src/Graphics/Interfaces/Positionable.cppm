module;
#include <string>
#include <string_view>
export module libyunpa:Positionable;
import :Printable;
import :Point2;

namespace libyunpa {
export class Positionable : public virtual Printable {
public:
  struct Options {
    Point2u position;
  };

private:
  Point2u _position;

protected:
  [[nodiscard]]
  std::string apply(std::string_view text) const final;

public:
  Positionable(const Options &options);
  ~Positionable() override = 0;

  void set_position(Point2u position);
  [[nodiscard]]
  Point2u get_position() const;
};
} // namespace libyunpa
