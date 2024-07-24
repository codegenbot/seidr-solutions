```cpp
#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        if (isdigit(c)) { 
            int digit = c - '0';
            result += to_string(digit * digit);
        } else {
            result += (c >= '0' && c <= '9') ? to_string(c - '0') * (c - '0') : c;
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