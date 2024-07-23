#include <iostream>
using namespace std;

int squareDigits(int n) {
    int res = 0;
    while(n > 0) {
        int digit = n % 10;
        res = res * 10 + digit * digit;
        n /= 10;
    }
    return res;
}

int main() {
    cout << squareDigits(0) << endl;  
    cout << squareDigits(1) << endl;  
    cout << squareDigits(2) << endl;  
    cout << squareDigits(3) << endl;  
    cout << squareDigits(4) << endl;  
    return 0;
}