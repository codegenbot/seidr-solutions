#include <string>

bool solveBoolean(string s) {
    bool result = (s == "t");
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i + 1);
            result = (left == "t" && right == "t") ? true : false;
            break;
        }
        else if (s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i + 1);
            result = (left == "t" || right == "t") ? true : false;
            break;
        }
    }
    return result;
}