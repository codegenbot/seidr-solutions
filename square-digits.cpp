#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string squareDigits(int number) {
    stringstream ss;
    while (number > 0) {
        int digit = number % 10;
        ss << to_string(digit * digit);
        number /= 10;
    }
    return ss.str();
}

int main() {
    int inputNumber;
    cout << "Enter a positive integer: ";
    cin >> inputNumber;
    string result = squareDigits(inputNumber);
    cout << "The squared digits are: " << result << endl;
    return 0;
}