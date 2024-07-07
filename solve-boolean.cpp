#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '&') {
            while (!result && s.size() > 1 && s.back() == '&') {
                s.pop_back();
            }
        } else if (c == '|') {
            while (!result && s.size() > 1 && s.back() == '|') {
                s.pop_back();
            }
        }
    }
    return result;