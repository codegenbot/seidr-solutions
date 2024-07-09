#include <string>
#include <iostream>

using namespace std;

string squareDigits(string input) {
    string output;
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    getline(cin, input); 
    if(input.length() == 0) {
        cout << "Error: Input cannot be an empty string." << endl;
        return -1; // or any other appropriate error handling.
    }
    try {
        string output = squareDigits(input);
        cout << "Squared digits: " << output << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}