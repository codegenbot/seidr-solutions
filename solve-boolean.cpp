#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool a = (s[0] == 'T');
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == '&') {
            return a && solveBoolean(s.substr(i+1));
        } else if(s[i] == '|') {
            bool b = (s[i+1] == 'T');
            return a || b;
        }
    }
    return a;
}

int main() {
    string s;
    cin >> s;
    cout << ((solveBoolean(s))? "True" : "False") << endl;
    return 0;
}