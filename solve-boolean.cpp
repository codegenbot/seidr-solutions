```c++
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') return true;
        if (s[i] == 'F') return false;
        if (s[i] == '|') {
            if (res) res = solveBoolean(s.substr(i+1));
            else i++;
            continue;
        }
        if (s[i] == '&') {
            if (!res) res = solveBoolean(s.substr(i+1));
            else i++;
            continue;
        }
    }
    return res;
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    bool result = solveBoolean(input);
    cout << "Result: " << (result ? "True" : "False") << endl;
    return 0;
}