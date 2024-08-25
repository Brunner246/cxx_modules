
export module test.modules;
export import :partition;

//TODO when adding an import statement, intellisense and IDE features will not work anymore
import std;

namespace test {
    export API_EXPORT void testFunction() {
        std::cout << "Hello, from modules!" << std::endl;
    }
}
