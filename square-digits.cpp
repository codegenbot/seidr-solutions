```cpp
#include <string>
using namespace std;

int main() {
    cout << squareDigits("123") << endl;
    return 0;
}

string squareDigits(string input) {
    string output = "";
    for (char c : input) { 
        int digit = (c - '0') * (c - '0'); 
        output += to_string(digit);
    }
    return output;
}