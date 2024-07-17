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
    // Read the input from user
    string input;
    cin >> input;

    // Call the function and print the output
    cout << squareDigits(input) << endl;

    return 0;
}