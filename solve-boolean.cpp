#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = (s == "T");
    for(int i=1; i<s.length(); i++) {
        if(s[i] == '|') {
            res ^= true;
        } else if(s[i] == '&') {
            res &= (s[i-1] == 'T');
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << ((solveBoolean(s)) ? "True" : "False") << endl;
    return 0;
}