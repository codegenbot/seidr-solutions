#include <iostream>
#include <string>

using namespace std;

string squareDigits(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = (input[i] - '0') * (input[i] - '0');
        output += to_string(digit);
    }
    return output;
}

int main() {
    cout << squareDigits("270397") << endl; 
    return 0;
}