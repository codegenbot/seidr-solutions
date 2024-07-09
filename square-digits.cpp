```cpp
#include <string>
#include <iostream>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit).padStart(to_string(digit).length(), '0');
    }
    return output;
}

int main() {
    string input = "34";
    cout << squareDigits(input) << endl;
}