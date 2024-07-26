#include <vector>
#include <iostream>
using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    // Read the input from user
    string input;
    cin >> input;

    // Call the function and print the output
    cout << squareDigits(input) << endl;
    
    return 0;
}