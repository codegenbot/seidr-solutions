#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T')
            return true;
        else if (s[i] == 'F')
            return false;
        else if (s[i] == '|') {
            int j = i + 1;
            while (j < s.length() && s[j] != '&') j++;
            string left = s.substr(i + 1, j - i - 1);
            string right = s.substr(j + 1);
            result = (solveBoolean(left) || solveBoolean(right));
        }
        else if (s[i] == '&') {
            int j = i + 1;
            while (j < s.length() && s[j] != '|') j++;
            string left = s.substr(i + 1, j - i - 1);
            string right = s.substr(j + 1);
            result = (solveBoolean(left) && solveBoolean(right));
        }
    }
    return result;
}