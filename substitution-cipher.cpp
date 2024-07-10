#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    getline(cin, cipher1);
    getline(cin, cipher2);
    getline(cin, message);
    
    for (char &c : message) {
        for (int i = 0; i < cipher1.size(); ++i) {
            if (c == cipher1[i]) {
                c = cipher2[i];
                break;
            } else if (c == cipher2[i]) {
                c = cipher1[i];
                break;
            }
        }
    }
    
    cout << message << endl;
    
    return 0;
}