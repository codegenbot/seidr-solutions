#include <vector>
#include <iostream>
#include <string>

string squareDigits(string input) {
    string output = "";
    for(int i=0; i<input.length(); i++) {
        int digit = (int)(input[i] - '0'); // convert char to int
        output += to_string(digit*digit); // square the digit and concatenate
    }
    return output;
}

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}