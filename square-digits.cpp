```cpp
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    string result = squareDigits(input);
    cout << "Squared digits: " << result << endl;
    return 0;
}

string squareDigits(string input) {
    string result = "";
    istringstream iss(input);
    while (iss >> c) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}