#include <string>
using namespace std;

string squareDigits(string input) {
    string result = "";
    for(int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        int squared = digit * digit;
        char c = (char)(squared + '0');
        result += c;
    }
    return result;
}