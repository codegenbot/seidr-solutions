```cpp
#include <string>
#include <iostream>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        string str = to_string(digit * digit);
        output += str;
    }
    return output;
}

int main() {
    string input = "34";
    cout << squareDigits(input) << endl;
}