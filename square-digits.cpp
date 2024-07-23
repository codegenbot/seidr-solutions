#include <iostream>

int squareDigits(int n) {
    int num = n;
    int result = 0;
    while (num > 0) {
        int digit = num % 10;
        result = result * 10 + digit * digit;
        num /= 10;
    }
    return result;
}

int main() {
    cout << squareDigits(16) << endl; 
    cout << squareDigits(2) << endl;  
    cout << squareDigits(3) << endl;   
    cout << squareDigits(4) << endl;    
    return 0;
}