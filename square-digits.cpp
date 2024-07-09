#include <string>
#include <iostream>

using namespace std;

string squareDigits(string input) {
    long long num = stoull(input);
    string output = "";
    while (num > 0) {
        int digit = static_cast<int>(num % 10);
        output = to_string(digit * digit) + output;
        num /= 10;
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input; 
    string output = squareDigits(input);
    cout << "Squared digits: " << output << endl;
    return 0;
}