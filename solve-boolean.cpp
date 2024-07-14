```cpp
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'T') continue;
        if (c == 'F') return false;
        if (c == '|') {
            result = !result;
        } else {
            if (c == '&') result &= true;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter Boolean expression: ";
    cin >> input;
    bool result = solveBoolean(input);
    cout << "Result: " << (result ? "True" : "False") << endl;
    return 0;
}