#include <iostream>
#include <string>
using namespace std;

bool evalOp(string s) {
    int j = 0;
    while (j < s.length() && (s[j] == '|' || s[j] == '&'))
        j++;

    string opStr = s.substr(0, j);
    bool left = false;
    if (opStr[0] == '|') {
        for (int i = 0; i < j; i++) {
            if (s[i] == 'T')
                left = true;
            else if (s[i] == 'F')
                return false;
        }
    } else {
        for (int i = 0; i < j; i++) {
            if (s[i] == 'T' && opStr[1] != '|')
                left = true;
            else if (s[i] == 'F' && opStr[1] != '&')
                return false;
        }
    }

    if (!left)
        return false;

    return evalBoolean(s.substr(j));
}

bool evalBoolean(string s) {
    if (s.empty())
        return false;

    int j = 0;
    while (j < s.length() && (s[j] == '|' || s[j] == '&'))
        j++;

    string opStr = s.substr(0, j);
    bool result = evalOp(s);

    // recursive call for the remaining part
    return !result; 
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = evalBoolean(s);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}