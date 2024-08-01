#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            if (i > 0 && s[i - 1] == 't')
                result &= true;
            else
                result &= false;
            i++;
        } else if (s[i] == '|') {
            if (i > 0 && s[i - 1] == 't')
                result |= true;
            else
                result |= false;
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