#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Forward declaration of squareDigits function
string squareDigits(int number);

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