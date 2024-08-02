#include <string>
using namespace std;

bool solveBoolean(string s) {
    if(s == "T" || s == "true") return true;
    if(s == "F" || s == "false") return false;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            return solveBoolean(left) || solveBoolean(right);
        }
        else if(s[i] == '&') {
            string left = s.substr(0, i);
            string right = s.substr(i+1);
            return solveBoolean(left) && solveBoolean(right);
        }
    }
    
    return false;
}

int main() {
    // Test cases
    cout << boolalpha << solveBoolean("t") << endl;  // True
    cout << boolalpha << solveBoolean("f") << endl;  // False
    cout << boolalpha << solveBoolean("f&f") << endl;  // False
    cout << boolalpha << solveBoolean("f&t") << endl;  // False
    cout << boolalpha << solveBoolean("t&f") << endl;  // False
    return 0;
}