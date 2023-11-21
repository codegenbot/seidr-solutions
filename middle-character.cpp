#include <iostream>
#include <string>
using namespace std;

string middleCharacter(string str) {
    int len = str.length();
    if (len % 2 == 1) {
        return string(1, str[len / 2]);
    } else {
        return str.substr(len / 2 - 1, 2);
    }
}

int main() {
    string input;
    cin >> input;
    cout << middleCharacter(input) << endl;
    return 0;
}