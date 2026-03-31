module;
#include <string>
#include <string_view>
export module libyunpa:Printable;
import :Drawable;

namespace libyunpa {
export class Printable : public Drawable {
private:
  std::string _output;
  unsigned int _height{0};
  unsigned int _width{0};

protected:
  void height(unsigned int height);
  void width(unsigned int width);
  void output(std::string_view output);

public:
  virtual void update() = 0;
  void draw() const final;

  [[nodiscard]]
  std::string_view output() const;
  [[nodiscard]]
  unsigned int width() const;
  [[nodiscard]]
  unsigned int height() const;
};
} // namespace libyunpa
