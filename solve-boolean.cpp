```cpp
#include <iostream>
using namespace std;

bool evalBoolean(string s) {
    if (s.empty())
        return false;

    int j = 0;
    while (j < s.length() && (s[j] == '|' || s[j] == '&'))
        j++;

    string opStr;
    for (int i = 0; i < j; i++) {
        opStr += s[i];
    }
    bool result = false;
    if (opStr[0] == '|') {
        for (int i = j; i < s.length(); i++) {
            if (s[i] == 'T')
                result = true;
            else if (s[i] == 'F') {
                result = false;
                return result;
            }
        }
    } else {
        bool left = false;
        for (int i = 0; i < j; i++) {
            if (s[i] == 'T' && opStr[1] != '|')
                left = true;
            else if (s[i] == 'F' && opStr[1] != '&')
                return false;
        }
        result = left;
    }

    return result;
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