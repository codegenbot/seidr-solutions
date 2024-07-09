#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = (s[0] == 'T');
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == '&') {
            result &= (s[i-1] == 'T');
        } else if(s[i] == '|') {
            result |= (s[i-1] == 'T');
        }
    }
    return result;
}

int main() {
    // Your code goes here
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}