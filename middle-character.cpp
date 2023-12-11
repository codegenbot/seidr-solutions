#include <iostream>
#include <string>
using namespace std;

string getMiddleCharacter(string str) {
    int length = str.length();
    if (length % 2 == 1) {
        return string(1, str[length / 2]);
    } else {
        return str.substr(length / 2 - 1, 2);
    }
}

int main() {
    string input;
    cin >> input;
    cout << getMiddleCharacter(input) << endl;
    return 0;
}