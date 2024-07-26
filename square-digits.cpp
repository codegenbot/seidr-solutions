#include <string>
using namespace std;

class Solution {
public:
    string squareDigits(string input) {
        string result = "";
        for (char c : input) {
            int digit = c - '0';
            result += to_string(digit * digit);
        }
        return result;
    }
};