#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    bool res = (s == "t");
    for(int i=1; i<s.size(); i++) {
        if(s[i] == '&') {
            res &= (s[i-1] == 't');
        }
        else if(s[i] == '|') {
            res |= (s[i-1] == 't');
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}