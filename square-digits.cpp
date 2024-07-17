#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        int num = input[i] - '0';
        int squared = num * num;
        output += to_string(squared);
    }
    return output;
}