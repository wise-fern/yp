import libyunpa;
#include <iostream>

int main() {
  using namespace libyunpa;
  Text::Options options{};
  options.position = {.x = 3, .y = 3};
  options.text = "Hello, world!";
  Text text{options};
  options.position = {.x = 3, .y = 4};
  options.inverted = true;
  Text text2{options};
  std::cout << "\x1b[?1049h\x1b[1;1HAlternate Buffer";
  text.draw();
  text2.draw();
  std::string input;
  std::cin >> input;
  std::cout << "\x1b[?1049l";
}
