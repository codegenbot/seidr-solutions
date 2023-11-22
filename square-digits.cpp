#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string squareDigits(int num) {
    string result = "";
    while (num > 0) {
        int digit = num % 10;
        result = to_string(pow(digit, 2)) + result;
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    cin >> num;
    cout << squareDigits(num) << endl;
    return 0;
}