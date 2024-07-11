#include <string>

std::string squareDigits(std::string input) {
    std::string output;
    
    for (char c : input) {
        int digit = c - '0'; // convert char back to int
        output += std::to_string(digit*digit); // square and concatenate
        
    }
    return output;

}

int main() {
    return 0;
}