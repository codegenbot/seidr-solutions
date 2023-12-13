#include <iostream>
#include <string>
using namespace std;

string getMiddleCharacter(string str) {
    int len = str.length();
    if (len % 2 == 1) {
        return str.substr(len/2, 1);
    } else {
        return str.substr(len/2 - 1, 2);
    }
}

int main() {
    string str;
    getline(cin, str);
    cout << getMiddleCharacter(str) << endl;
    return 0;
}