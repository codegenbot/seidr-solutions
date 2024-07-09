#include <string>
#include <iostream>

using namespace std;

int main() {
    string input;
    cout << "Enter a positive integer: ";
    getline(cin, input); 
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    cout << "Squared digits: " << output << endl;
    return 0;
}