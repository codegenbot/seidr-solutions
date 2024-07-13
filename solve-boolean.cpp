#include <string>
using namespace std;

bool solveBoolean(string s) {
    string t = "T", f = "F";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            return (s.substr(0, i).compare(t) == 0 || s.substr(0, i).compare(f) == 0) ||
                   (s.substr(i + 1).compare(t) == 0);
        }
        else if (s[i] == '&') {
            return (s.substr(0, i).compare(t) == 0 && s.substr(i + 1).compare(t) == 0) ||
                   (s.substr(0, i).compare(f) == 0 && s.substr(i + 1).compare(f) == 0);
        }
    }
    return s.compare(t) == 0;
}