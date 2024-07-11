#include <string>

int main() {
    std::string output = squareDigits("153"); // replace with your desired input
    return 0;

}

std::string squareDigits(std::string input) {
    std::string output;
    
    for (char c : input) {
        int digit = c - '0';
        output += std::to_string(digit*digit);
        
    }
    return output;
}