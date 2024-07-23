#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        if (isdigit(c)) { 
            int digit = stoi(string(1, c));
            result += to_string(digit * digit);
        } else {
            result += c;
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