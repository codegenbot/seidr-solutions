#include <string>
using namespace std;

bool solveBoolean(string s) {
    if (s == "T" || s == "t")
        return true;
    else if (s == "F" || s == "f")
        return false;
    else if (s.length() > 1 && s[0] == 'n' && s[1] == '&') {
        bool first = solveBoolean(s.substr(2));
        for (int i = 2; i < s.length(); ) {
            if (s[i] != '&')
                break;
            i++;
            if (!first)
                return false;
            first = solveBoolean(s.substr(i));
        }
        return first;
    } else if (s.length() > 1 && s[0] == '|') {
        bool first = solveBoolean(s.substr(1, 1));
        for (int i = 2; i < s.length(); ) {
            if (s[i] != '|')
                break;
            i++;
            if (!first)
                return true;
            first = solveBoolean(s.substr(i));
        }
        return first;
    } else
        return false;
}