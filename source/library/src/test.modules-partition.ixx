
export module test.modules:partition;

//TODO when adding an import statement, intellisense and IDE features will not work anymore
import std;


namespace test::partition {
    export class API_EXPORT PartitionClass {
        std::string text;
        int number;

    public:
        explicit PartitionClass(std::string text, int number);

        [[nodiscard]] std::string getText() const;

        [[nodiscard]] int getNumber() const;
    };
}
