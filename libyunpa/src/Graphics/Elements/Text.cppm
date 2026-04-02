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
  Text(std::string text, Point2u position = {});
  Text(const Options &options);
  ~Text() override = default;
};
} // namespace libyunpa
