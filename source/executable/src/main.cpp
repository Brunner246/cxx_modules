#include <cstdlib>

//TODO when adding an import statement, intellisense and IDE features will not work anymore
import std;
import test.modules;

int main() {

  std::cout << "Hello, World!" << std::endl;
  test::testFunction();

  const auto partition = test::partition::PartitionClass("Hello, from partition!", 42);
  std::cout << partition.getText() << " " << partition.getNumber() << std::endl;

  return EXIT_SUCCESS;
}
