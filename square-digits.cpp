```cpp
#include <string>
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
    string output = squareDigits(input);
    cout << output << endl; 
    return 0;
}