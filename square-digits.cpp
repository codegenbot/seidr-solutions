```cpp
#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        int squared = digit * digit;
        if(output.length() > 0)
            output += to_string(squared);
        else
            output = to_string(squared);
    }
    return output;
}