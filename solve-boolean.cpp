#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'F') {
            res = false;
            break;
        }
        else if (c == '&') {
            res &= !s.substr(0, s.find(c)).find('T') != string::npos;
        }
        else if (c == '|') {
            res |= s.find('T') != string::npos;
        }
    }
    return res;
}