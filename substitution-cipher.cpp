#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, text;
    cin >> cipher1 >> cipher2 >> text;
    
    for (char &c : text) {
        if (c == cipher1[0]) {
            c = cipher2[0];
        }
    }
    
    cout << text << '\n';
    
    return 0;
}