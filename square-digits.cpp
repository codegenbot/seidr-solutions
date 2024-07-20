```cpp
#include <string>

int main() {
    std::string input;
    std::cout << "Enter an integer: ";
    std::cin >> input;

    std::string output = "";
    for(int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        output += std::to_string(digit * digit);
    }
    std::cout << "Squared digits: " << output << std::endl;

    return 0;
}