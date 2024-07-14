#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    for (char c : s) {
        if (c == 'T' || c == 't') {
            return true;
        } else if (c == 'F' || c == 'f') {
            return false;
        } else if (c == '|') {
            continue;
        } else if (c == '&') {
            bool left = result;
            result = false;
            for (; ; ) {
                if (s.size() <= s.find(c) + 1) break;
                c = s[s.find(c) + 1];
                if (c == 'T' || c == 't') {
                    result |= left;
                    break;
                } else if (c == 'F' || c == 'f') {
                    result &= left;
                    break;
                }
            }
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}