#include <iostream>
#include <string>
using namespace std;

string middleCharacter(string s) {
    int length = s.length();
    if (length % 2 == 1) {
        return string(1, s[length / 2]);
    } else {
        return s.substr(length / 2 - 1, 2);
    }
}

int main() {
    string input;
    cin >> input;
    cout << middleCharacter(input) << endl;
    return 0;
}