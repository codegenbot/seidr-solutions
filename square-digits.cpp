#include <vector>
#include <iostream>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for(int i=0; i<input.length(); i++) {
        int digit = input[i] - '0';
        output += to_string(digit*digit);
    }
    return output;
}

int main() {
    cout << squareDigits("17") << endl;
    return 0;
}