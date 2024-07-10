#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    if(s.size() == 0)
        return false;
    
    string temp = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '|') {
            bool left = (temp == "t") ? true : false;
            bool right = (s.substr(i+1, s.size()-i-1) == "t") ? true : false;
            return left || right;
        } else if(s[i] == '&') {
            bool left = (temp == "t") ? true : false;
            bool right = (s.substr(i+1, s.size()-i-1) == "t") ? true : false;
            return left && right;
        }
        temp += s[i];
    }
    return temp == "t";
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = solveBoolean(s);
    if(result)
        cout << "True\n";
    else
        cout << "False\n";
    return 0;
}