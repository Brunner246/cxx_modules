
//TODO when adding an import statement, intellisense and IDE features will not work anymore
module test.modules:partition;
import :partition;

test::partition::PartitionClass::PartitionClass(std::string text, const int number)
    : text(std::move(text)), number(number) {
}

std::string test::partition::PartitionClass::getText() const {
    return text;
}

int test::partition::PartitionClass::getNumber() const {
    return number;
}
