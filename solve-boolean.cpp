#include <string>
using namespace std;

bool solveBoolean(string s) {
    if (s == "T" || s == "t")
        return true;
    if (s == "F" || s == "f")
        return false;
    
    int i = 0, j;
    while (i < s.length() && (s[i] == '|' || s[i] == '&')) {
        i++;
    }
    string op1 = s.substr(0, i);
    j = i;
    while (j < s.length() && (s[j] == '|' || s[j] == '&')) {
        j++;
    }
    string op2 = s.substr(i, j - i);
    
    return solveBoolean(op1) | solveBoolean(op2);
}

int main() {
    // Example usage
    cout << solveBoolean("t") << endl;  // Output: True
    cout << solveBoolean("f") << endl;  // Output: False
    cout << solveBoolean("f&f") << endl;  // Output: False
    cout << solveBoolean("f&t") << endl;  // Output: False
    cout << solveBoolean("t&f") << endl;  // Output: False

    return 0;
}