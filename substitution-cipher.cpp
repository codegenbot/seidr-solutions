#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    getline(cin, cipher1);
    getline(cin, cipher2);
    getline(cin, message);
    
    for (char &c : message) {
        if (c == cipher1[0]) {
            c = cipher2[0];
        } else if (c == cipher2[0]) {
            c = cipher1[0];
        }
    }
    
    cout << message << endl;
    
    return 0;
}