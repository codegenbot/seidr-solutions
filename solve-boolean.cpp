#include <string>
using namespace std;

bool solveBoolean(string s) {
    if(s[0] == 'T') return true;
    if(s[0] == 'F') return false;
    
    bool a = (s[0] == 'T'), b = (s[2] == 'T');
    if(s[1] == '&') return a && b;
    if(s[1] == '|') return a || b;
    
    return 0; // should not be reached
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