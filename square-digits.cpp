#include <string>
using namespace std;

class Solution {
public:
    string squareDigits(string input) {
        string output = "";
        for (char c : input) {
            int digit = c - '0';
            int squared = digit * digit;
            output += to_string(squared);
        }
        return output;
    }
};