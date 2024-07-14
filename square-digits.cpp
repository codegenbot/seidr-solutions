#include <vector>
#include <iostream>
using namespace std;

string squareDigits(string input) {
    string output = input;
    for(int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        output.replace(i, 1, to_string(digit * digit));
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    cout << "Square digits: " << squareDigits(input) << endl;
    return 0;
}