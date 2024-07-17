#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool a = (s[0] == 'T'), b;
    for(int i = 1; i < s.size(); ++i) {
        if(s[i] == '&') {
            b = a;
            a = false;
        } else if(s[i] == '|') {
            bool temp = a;
            a = (a || b);
            b = temp;
        }
    }
    return a;
}