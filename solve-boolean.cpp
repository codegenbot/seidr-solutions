#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            return false;
        }
        else if (s[i] == '&') {
            result &= (i + 1 < s.length() && s[i+1] != 'F');
            i++;
        }
        else if (s[i] == '|') {
            result |= (i + 1 < s.length() && s[i+1] != 'F');
            i++;
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << (solveBoolean(input) ? "True" : "False") << endl;
    return 0;
}