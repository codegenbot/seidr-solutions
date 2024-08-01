#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for(int i = 0; i < input.length(); i++) {
        int digit = (int)(input[i] - '0');
        output += to_string(digit * digit);
    }
    return output;
}