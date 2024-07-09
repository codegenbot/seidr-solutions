#include <string>
#include <cstring>

std::string squareDigits(const char* input) {
    std::string output = "";
    for (int i = 0; i < strlen(input); i++) {
        int digit = input[i] - '0';
        output += std::to_string(digit * digit);
    }
    return output;
}

int main() { 
    printf("%s\n", squareDigits("54827")); 
    return 0;