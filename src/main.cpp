#include <iostream>
#include <cstdlib>

int main() {
  std::cout << "Hello " << getenv("USER") <<"! This is the Monkey programming language!" << "\n";
  std::cout << "Feel free to type in commands \n";

	// repl.start(std::cin, std::cout);
  return 0;
}
