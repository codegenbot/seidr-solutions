```cpp
#include <string>

string squareDigits(string input) {
    using namespace std;
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}