```cpp
#include <string>
using namespace std;

string squareDigits(string n) {
    string result = "";
    for (char c : n) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    string n = "1234";
    string result = squareDigits(n);
    cout << result << endl;
    return 0;
}