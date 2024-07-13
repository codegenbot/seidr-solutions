```cpp
#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = stoi(string(1, input[i]));
        output += to_string(digit * digit);
    }
    return output;
}