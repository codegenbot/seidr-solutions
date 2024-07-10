#include <string>
using namespace std;

class Solution {
public:
    string squareDigits(string input) {
        string result = "";
        for (char c : input) {
            int num = (int)(c - '0'); // convert char to int
            result += to_string(num * num); // square the number and add it to the result
        }
        return result;
    }
};