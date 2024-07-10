#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    getline(cin, cipher1);
    getline(cin, cipher2);
    getline(cin, message);
    
    for (char &c : message) {
        size_t pos = cipher1.find(c);
        if (pos != string::npos) {
            c = cipher2[pos];
        } else {
            pos = cipher2.find(c);
            if (pos != string::npos) {
                c = cipher1[pos];
            }
        }
    }
    
    cout << message << endl;
    
    return 0;
}