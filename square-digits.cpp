#include <iostream>
#include <string>
using namespace std;

string squareDigits(int n) {
    string result = "";
    string num = to_string(n);
    for (char c : num) {
        int digit = c - '0';
        int square = digit * digit;
        result += to_string(square);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << squareDigits(n) << endl;
    return 0;
}