```cpp
#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string result;
    for (char c : input) {
        result += std::to_string((c - '0') * (c - '0'));
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input; 
    string result = squareDigits(input); 
    cout << "Squared digits: " << result << endl;
    return 0;
}