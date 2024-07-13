#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        long long squared = (long long)digit * digit;
        result += to_string(squared);
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}