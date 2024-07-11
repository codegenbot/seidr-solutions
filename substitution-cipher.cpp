#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    getline(cin, cipher1);
    getline(cin, cipher2);
    getline(cin, message);
    
    for (char &c : message) {
        size_t idx1 = cipher1.find(c);
        size_t idx2 = cipher2.find(c);
        if (idx1 != string::npos) {
            c = cipher2[idx1];
        } else if (idx2 != string::npos) {
            c = cipher1[idx2];
        }
    }
    
    cout << message << endl;
    
    return 0;
}