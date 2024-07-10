#include <string>
using namespace std;

bool solveBoolean(string s) {
    if (s == "T" || s == "t") return true;
    if (s == "F" || s == "f") return false;
    
    bool a = solveBoolean(s.substr(0, 1));
    char op = s[1];
    bool b = solveBoolean(s.substr(2));

    if (op == '&') return a && b;
    if (op == '|') return a || b;

    return -1; // This line should not be reached.
}