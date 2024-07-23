#include <iostream>
using namespace std;

string squareDigits(string n) {
    string result = "";
    for(int i = 0; i < n.length(); i++) {
        int digit = (n[i] - '0') * (n[i] - '0');
        char str[2];
        itoa(digit, str, 10);
        result += str;
    }
    return result;
}

int main() {
    cout << squareDigits("0") << endl;  // Output: 0
    cout << squareDigits("1") << endl;  // Output: 1
    cout << squareDigits("2") << endl;  // Output: 4
    cout << squareDigits("3") << endl;  // Output: 9
    cout << squareDigits("4") << endl;  // Output: 16
    return 0;
}