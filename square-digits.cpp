```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    int num = stoi(input);
    string result = squareDigits(to_string(num));
    cout << "Squared digits: " << result << endl;
    return 0;
}

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}