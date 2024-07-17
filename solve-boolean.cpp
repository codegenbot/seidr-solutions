#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool a = (s[0] == 'T');
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == '&') {
            return a && (s[i+1] == 'T');
        }
        else if(s[i] == '|') {
            return a || (s[i+1] == 'T');
        }
    }
    return a;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}