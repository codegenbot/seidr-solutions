#include <iostream>
#include <string>

using namespace std;

std::string squareDigits(std::string input) {
    std::string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    cout << squareDigits("34") << endl; 
    return 0;
}