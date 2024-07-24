```
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;

}

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}