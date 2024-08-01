#include <string>
#include <iostream>
using namespace std;

string middleCharacter(string s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len / 2 - 1, 2);
    } else {
        return s.substr(len / 2, 1);
    }
}

int main() {
    string input;
    cin >> input;
    string result = middleCharacter(input);
    cout << result << endl;
    return 0;
}