#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string squareDigits(string input) {
    string result = "";
    for (int i = 0; i < input.length(); i++) {
        if(isdigit(input[i])) {
            int digit = input[i] - '0';
            result += to_string(digit * digit);
        } else {
            if (!isdigit(input[i])) {
                result += input[i];
            }
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}