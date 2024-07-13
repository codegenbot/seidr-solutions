#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    cout << output << endl;
    return 0;
}