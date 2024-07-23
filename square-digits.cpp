#include <iostream>

int squareDigits(int n) {
    int result = 0;
    while (n > 0) {
        int digit = n % 10;
        result = result * 10 + digit * digit;
        n /= 10;
    }
    return result;
}

int main() {
    cout << squareDigits(16) << endl; // Output: 4
    cout << squareDigits(2) << endl; // Output: 4
    cout << squareDigits(3) << endl; // Output: 9
    cout << squareDigits(9) << endl; // Output: 81
    cout << squareDigits(12) << endl; // Output: 136
    return 0;
}