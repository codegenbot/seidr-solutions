#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string squareDigits(int n) {
    string result = "";
    while (n > 0) {
        int digit = n % 10;
        result = to_string(pow(digit, 2)) + result;
        n /= 10;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << squareDigits(n) << endl;
    return 0;
}