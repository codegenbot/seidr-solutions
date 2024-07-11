#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    if (len % 2 == 0) {
        cout << s.substr(len/2 - 1, 2) << endl;
    } else {
        cout << s.substr(len/2, 1) << endl;
    }
    return 0;
}