#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool a = (s[0] == 'T');
    if(s.size() > 1) {
        if(s[1] == '&') {
            for(int i=2; i<s.size(); i++) {
                if(s[i] != '&') {
                    a &= (s[i] == 'T');
                }
            }
        } else if(s[1] == '|') {
            for(int i=2; i<s.size(); i++) {
                if(s[i] != '|') {
                    a |= (s[i] == 'T');
                }
            }
        }
    }
    return a;
}

int main() {
    string s;
    cin >> s;
    bool result = solveBoolean(s);
    cout << (result ? "True" : "False") << endl;
    return 0;
}