#include <iostream>
#include <string>
using namespace std;

string squareDigits(int num) {
    string result = "";
    while (num > 0) {
        int digit = num % 10;
        result = char('0' + digit * digit) + result;
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    cin >> num;
    squareDigits(num);
    cout.write(squareDigits(num).c_str(), squareDigits(num).size()) << endl;
    return 0;
}