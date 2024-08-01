```c++
#include <string>
using namespace std;

int main() {
    string input = "493193"; // replace with your desired input
    string output = squareDigits(input);
    cout << output << endl;
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