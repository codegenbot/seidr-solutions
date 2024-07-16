#include <string>
#include <iostream>

using namespace std;

std::string squareDigits(std::string n) {
    std::string res = "";
    for (char c : n) {
        int num = c - '0';
        res += to_string(num * num);
    }
    return res;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    cout << "Square digits of the number: " << squareDigits(input) << endl;
    return 0;
}