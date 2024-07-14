#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for(int i=0; i<input.length(); i++) {
        int digit = input[i] - '0';
        int squaredDigit = digit * digit;
        char c = (char)(squaredDigit + '0');
        output += c;
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}