```cpp
#include <iostream>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            result &= false;
        } else if (s[i] == '|') {
            result |= true;
        }
    }
    return result;
}

int main() {
    string s1 = "T&F";
    string s2 = "TF|T";
    string s3 = "T&T|F";
    
    cout << solveBoolean(s1) << endl;  // Output: F
    cout << solveBoolean(s2) << endl;  // Output: T
    cout << solveBoolean(s3) << endl;  // Output: T
    
    return 0;
}