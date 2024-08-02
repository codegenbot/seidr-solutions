#include <string>
using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a number: ";
    cin >> str;
    cout << "Square digits of " << str << " is " << squareDigits(str) << endl;
    return 0;