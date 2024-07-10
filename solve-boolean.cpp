#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            result = false;
            break;
        }
        else if (s[i] == '|') {
            if (i != s.length() - 1) {
                bool temp = true;
                for (int j = i + 1; j < s.length(); j++) {
                    if (s[j] == 'f') {
                        temp = false;
                        break;
                    }
                    else if (s[j] == '|') {
                        i = j - 1;
                        break;
                    }
                }
                result = result || temp;
            } else {
                return false;
            }
        }
    }
    return result;
}