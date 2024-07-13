#include <string>
#include <iostream>

using namespace std;

int pairedDigits(string s) {
    int last = -1;
    int sum = 0;
    for (char c : s) {
        if (c == '0' + last) {
            sum += c - '0';
        }
        last = c;
    }
    return sum;
}

int main() {
    string input;
    cout << "Enter a string of digits: ";
    cin >> input;
    cout << "Sum of paired digits is: " << pairedDigits(input) << endl;
    return 0;
}