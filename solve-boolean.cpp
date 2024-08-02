#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            i++; // Skip '&' character
            bool a = i < s.length() && s[i] == 'T';
            bool b = i < s.length() && s[i] == 'F';
            result &= (a || b);
        } else if (s[i] == '|') {
            i++; // Skip '|' character
            bool a = i < s.length() && s[i] == 'T';
            bool b = i < s.length() && s[i] == 'F';
            result |= (a || b);
        }
        i++;
    }
    return result;
}

int main() {
    return 0;
}