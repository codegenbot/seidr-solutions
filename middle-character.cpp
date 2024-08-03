#include <iostream>
#include <string>

string getMiddleCharacter(const string& s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len / 2 - 1, 2);
    } else {
        return s.substr(len / 2, 1);
    }
}

int main() {
    string s;
    cin >> s;
    cout << getMiddleCharacter(s) << endl;
    return 0;
}