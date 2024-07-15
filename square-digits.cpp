#include <string>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    
    int digit = c - '0'; output << (digit * digit); return output.str();

}

std::string squareDigits(std::string input) {
    std::stringstream output;
    for (char c : input) {
        int digit = c - '0';
        output << (digit * digit);
    }
    return output.str();
}