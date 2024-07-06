#include <vector>
#include <iostream>
#include <string>
using namespace std;

string squareDigits(int num) {
    string result = "";
    while (num > 0) {
        int digit = num % 10;
        result += to_string(digit * digit);
        num /= 10;
    }
    return result;
}

int main() {
    int num = 0;
    cout << "Enter a positive integer: ";
    cin >> num;
    string squaredDigits = squareDigits(num);
    cout << "Squared digits: " << squaredDigits << endl;
}