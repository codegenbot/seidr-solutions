#include <iostream>
#include <string>

using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    for (char &c : message) {
        size_t idx = cipher1.find(c);
        if (idx != string::npos) {
            c = cipher2[idx];
        } else {
            idx = cipher2.find(c);
            if (idx != string::npos) {
                c = cipher1[idx];
            }
        }
    }
    
    cout << message << endl;
    
    return 0;
}