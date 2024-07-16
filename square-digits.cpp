```c++
#include <iostream>
#include <string>
using namespace std;

// Function to square each digit
string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
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