module;
#include <string>
#include <string_view>
export module libyunpa:Stylable;
import :Printable;

namespace libyunpa {
export class Stylable : public virtual Printable {
public:
  struct Options {
    bool bold{false};
    bool italic{false};
    bool underline{false};
    bool dim{false};
    bool blink{false};
    bool inverted{false};
  };

private:
  bool _bold;
  bool _italic;
  bool _underline;
  bool _dim;
  bool _blink;
  bool _inverted;

protected:
  [[nodiscard]]
  std::string apply(std::string_view text) const final;

public:
  Stylable(const Options &options);
  ~Stylable() override = 0;

  [[nodiscard]]
  bool get_bold() const;
  void set_bold(bool bold);
  [[nodiscard]]
  bool get_italic() const;
  void set_italic(bool italic);
  [[nodiscard]]
  bool get_underline() const;
  void set_underline(bool underline);
  [[nodiscard]]
  bool get_dim() const;
  void set_dim(bool dim);
  [[nodiscard]]
  bool get_blink() const;
  void set_blink(bool blink);
  [[nodiscard]]
  bool get_inverted() const;
  void set_inverted(bool inverted);
};
} // namespace libyunpa
