#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0'; // convert char to integer
        output += to_string(digit * digit); // square and concatenate
    }
    return output;
}