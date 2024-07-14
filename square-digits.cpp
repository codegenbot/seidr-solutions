#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    // Read from standard input
    string s;
    cin >> s;

    // Write to standard output
    cout << squareDigits(s);

    return 0;
}