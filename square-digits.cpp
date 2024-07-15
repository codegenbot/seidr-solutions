```
#include <string>
#include <sstream>

int main() {
    std::cout << squareDigits("54321") << std::endl;
    return 0;
}

std::string squareDigits(std::string input) {
    std::stringstream output;
    for (char c : input) {
        int digit = c - '0';
        output << std::to_string(digit * digit);
    }
    return output.str();
}