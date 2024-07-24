#include <iostream>
#include <string>
using namespace std;

bool evalBoolean(string s) {
    if (s.empty())
        return false;

    int j = 0;
    while (j < s.length() && (s[j] == '|' || s[j] == '&'))
        j++;

    string opStr = s.substr(0, j);
    bool result = false;
    if (opStr[0] == '|') {
        for (int i = 0; i < j; i++) {
            if (s[i] == 'T')
                result = true;
            else if (s[i] == 'F')
                return false;
        }
    } else {
        for (int i = 0; i < j; i++) {
            if (s[i] == 'T' && opStr[1] != '|')
                result = true;
            else if (s[i] == 'F' && opStr[1] != '&')
                return false;
        }
    }

    if (!result)
        return false;

    string rest = s.substr(j);
    if (rest.empty())
        return !result; 
    else
        return evalBoolean(rest); 
}

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

    bool finalResult = false;
    while (s.length()) {
        if (*s.rbegin() == 'T') 
            finalResult = true;
        else if (*s.rbegin() == 'F')
            break;
        s.pop_back(); 
    }
    return result || finalResult; 
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = evalOp(s);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}