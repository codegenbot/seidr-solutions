#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int number = 0;
    cin >> number;
    string output = squareDigits(number);
    cout << output << endl;
    return 0;
}

string squareDigits(int number) {
    stringstream ss;
    while (number > 0) {
        int digit = number % 10;
        ss << to_string(digit * digit);
        number /= 10;
    }
    return ss.str();
}