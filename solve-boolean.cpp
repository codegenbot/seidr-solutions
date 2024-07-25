#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = (s == "t");
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            res = (res || (i+1<s.length() && s[i+1]=='t'));
            i++;
        }
        else if(s[i] == '&') {
            res = (res && (i+1<s.length() && s[i+1]=='t'));
            i++;
        }
    }
    return res;
}

int main() {
    // Test cases
    cout << boolalpha << solveBoolean("t") << endl; // True
    cout << boolalpha << solveBoolean("f") << endl; // False
    cout << boolalpha << solveBoolean("f&f") << endl; // False
    cout << boolalpha << solveBoolean("f&t") << endl; // False
    cout << boolalpha << solveBoolean("t&f") << endl; // False

    return 0;
}