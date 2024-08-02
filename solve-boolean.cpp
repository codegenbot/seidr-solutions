#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            bool temp = result;
            result &= false;
            for (; i < s.length() && s[i] != '|'; i++) {
                if (s[i] == 'T') {
                    result = true;
                    break;
                } else if (s[i] == 'F') {
                    result = false;
                    break;
                }
            }
            result = temp;
        } else if (s[i] == '|') {
            bool temp = result;
            result |= false;
            for (; i < s.length() && s[i] != '&'; i++) {
                if (s[i] == 'T') {
                    result = true;
                    break;
                } else if (s[i] == 'F') {
                    result = false;
                    break;
                }
            }
            result = temp;
        }
    }
    return result;
}

int main() {
    return 0;
}