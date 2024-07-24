#include <string>
using namespace std;

bool solveBoolean(string s) {
    if(s == "T" || s == "true") return true;
    if(s == "F" || s == "false") return false;
    
    int i = 0, j = 0;
    while(i < s.size()) {
        if(j == 0 && (s[i] == '&' || s[i] == '|')) {
            j++;
            i++;
        } else if(s[i] == '&') {
            i++;
            j++;
        } else if(s[i] == '|') {
            i++;
            j = 0;
        } else if(j > 0) {
            i++;
            j--;
        } else {
            i++;
        }
    }
    
    return s.back() == 'T';
}

int main() {
    // Your test cases here
    cout << (solveBoolean("t") ? "True" : "False");
    cout << endl;
    cout << (solveBoolean("f") ? "True" : "False");
    cout << endl;
    cout << (solveBoolean("f&f") ? "True" : "False");
    cout << endl;
    cout << (solveBoolean("f&t") ? "True" : "False");
    cout << endl;
    cout << (solveBoolean("t&f") ? "True" : "False");
    return 0;
}