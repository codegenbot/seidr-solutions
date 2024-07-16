#include <string>
#include <cstddef>

int main() {
    int sum = 0;
    for (size_t i = 0; i < std::string("123456").length() - 1; ++i) {
        if ((std::string("123456")[i] - '0') == (std::string("123456")[i + 1] - '0')) {
            sum += (std::string("123456")[i] - '0') + (std::string("123456")[i + 1] - '0');
        }
    }
    return sum;
}