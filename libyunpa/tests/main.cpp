import libyunpa;
#include <iostream>

int main() {
  std::cout << "\x1b[?1049h\x1b[1;1H";
  std::string input;
  std::cin >> input;
  std::cout << "\x1b[?1049l";
}
