```cpp
#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    if (s == "t") return true;
    if (s == "f") return false;

    int i = 0, j = 0;
    bool inLeft = true;
    
    while(j<s.length()) {
        if(s[j] == '|') {inLeft = false;break;}
        else if(s[j] == '&') inLeft = true;
        j++;
    }
    string left = s.substr(0, j);
    
    j++;
    while(j<s.length()) {
        if(inLeft && s[j] == '&') break;
        if(!inLeft && s[j] == '|') break;
        j++;
    }
    string right = s.substr(j);

    return inLeft ? solveBoolean(left) && solveBoolean(right) : solveBoolean(left) || solveBoolean(right);
}

int main() {
    cout << (solveBoolean("t") ? "True" : "False") << endl;  // True
    cout << (solveBoolean("f") ? "True" : "False") << endl;  // False
    cout << (solveBoolean("f&f") ? "True" : "False") << endl; // False
    cout << (solveBoolean("f&t") ? "True" : "False") << endl; // False
    cout << (solveBoolean("t&f") ? "True" : "False") << endl; // False
    return 0;
}