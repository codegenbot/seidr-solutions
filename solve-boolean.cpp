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
            while(i+1<s.length() && (s[i+1]=='|' || s[i+1]=='&')) i++;
            res = false;
        }
        else if (s[i] == '&') {
            while(i+1<s.length() && (s[i+1]=='|' || s[i+1]=='&')) i++;
            res = true;
        }
        else i++;
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