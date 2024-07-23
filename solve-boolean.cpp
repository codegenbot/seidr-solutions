```cpp
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    bool lastOp = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            lastOp = true;
        } else if (s[i] == '&') {
            lastOp = false;
        }
    }

    return result || lastOp;
}

int main() {
    string input;
    cin >> ws;
    getline(cin, input); 
    bool result = solveBoolean(input);
    cout << (result ? "True" : "False");
}