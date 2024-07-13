#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') return true;
        if (s[i] == 'F') return false;
        if (s[i] == '|') {
            res = true;
            i++;
            continue;
        }
        if (s[i] == '&') {
            res = true;
            i++;
            continue;
        }
        if (s[i] == 'T' && s[i+1] == '&') {
            i += 2;
            while(i < s.length() && s[i] != '|') i++;
            if(i >= s.length()) return false;
            i++;
        }
        else if (s[i] == 'F' && s[i+1] == '|') {
            i += 2;
            while(i < s.length() && s[i] != '&') i++;
            if(i >= s.length()) return true;
            i++;
        }
    }
    return res;
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    bool result = solveBoolean(input);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}