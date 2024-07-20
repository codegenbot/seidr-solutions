#include <iostream>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        int squaredDigit = digit * digit;
        char temp[2];
        sprintf(temp, "%d", squaredDigit);
        output += temp;
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    string result = squareDigits(input);
    cout << "The resulting string is: " << result << endl;
    return 0;
}