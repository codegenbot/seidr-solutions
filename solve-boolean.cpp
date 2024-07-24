#include <vector>
using namespace std;

bool solveBoolean(string s) {
    if(s[0] == 'T' || s[0] == 't') return true;
    else if(s[0] == 'F' || s[0] == 'f') return false;
    
    for(int i = 1; i < s.length(); i++) {
        if(s[i] == '&') {
            return (solveBoolean(string(1, s[0])) && solveBoolean(string(i+1)));
        } else if(s[i] == '|') {
            return (solveBoolean(string(1, s[0])) || solveBoolean(string(i+1)));
        }
    }
    
    return false;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = solveBoolean(s);
    if(result) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}