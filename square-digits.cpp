#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) { 
        int digit = (c - '0') * (c - '0'); 
        char sq_digit = (digit + '0');
        output += sq_digit;
    }
    return output;
}

int main() {
    string input = "34";
    cout << squareDigits(input);
    return 0;
}