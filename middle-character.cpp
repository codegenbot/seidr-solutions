#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    
    int len = str.length();
    
    if (len % 2 == 0) {
        cout << str.substr(len/2 - 1, 2);
    } else {
        cout << str.substr(len/2, 1);
    }
    
    return 0;
}