#include <iostream>
using namespace std;

bool solveBoolean(string s) {
    bool first = (s[0] == 'T');
    for(int i=1; i<s.size(); i++) {
        if(s[i] == '|') {
            return first || solveBoolean(s.substr(i+1));
        } else if(s[i] == '&') {
            return first && solveBoolean(s.substr(i+1));
        }
    }
    return first;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}