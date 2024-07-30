#include <vector>
#include <iostream>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}