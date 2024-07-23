```cpp
#include <string>
using namespace std;

int main() {
    string n = "1234";
    string result = squareDigits(n);
    cout << result << endl;
    return 0;
}

string squareDigits(string n) {
    string result = "";
    for (char c : n) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}