#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for(int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        long long square = (long long)digit * digit;
        output += to_string(square);
    }
    return output;
}