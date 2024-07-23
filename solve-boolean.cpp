#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool a = (s[0] == 'T');
    for(int i=1; i<s.size(); i++) {
        if(s[i] == '|') {
            return a || solveBoolean(s.substr(i+1));
        } else if(s[i] == '&') {
            return a && solveBoolean(s.substr(i+1));
        }
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << (solveBoolean(s) ? "True" : "False") << endl;
    }
    return 0;
}