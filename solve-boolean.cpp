#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'T') return true;
        else if(s[i] == 'F') return false;
        else if(s[i] == '|') continue;
        else if(s[i] == '&') {
            res = (res && solveBoolean(s.substr(i+1)));
            i++;
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