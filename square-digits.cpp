```cpp
#include <string>
using namespace std;

string& squareDigits(string& input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0'; // Convert character to integer
        output += to_string(digit * digit); // Square and concatenate
    }
    return input = output;
}

int main() {
    string input;
    cout << "Enter a number: ";
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}