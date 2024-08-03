Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(int n) {
    string str = to_string(n);
    string result;
    for (char c : str) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The square digits of " << n << " is " << squareDigits(n) << endl;
    return 0;
}