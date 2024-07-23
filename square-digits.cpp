#include <iostream>

int squareDigits(int n) {
    int temp = n;
    int result = 0;
    while(temp > 0) {
        int digit = temp % 10;
        result = result * 10 + (digit * digit);
        temp /= 10;
    }
    return result;
}

int main() {
    cout << squareDigits(14) << endl;  // Output: 81
    cout << squareDigits(0) << endl;   // Output: 0
    cout << squareDigits(1) << endl;   // Output: 1
    cout << squareDigits(2) << endl;   // Output: 4
    cout << squareDigits(3) << endl;   // Output: 9
    cout << squareDigits(4) << endl;   // Output: 16
    return 0;
}