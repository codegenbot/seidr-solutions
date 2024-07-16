#include <iostream>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    for (char &c : message) {
        if (size_t pos = cipher1.find(c); pos != string::npos) {
            c = cipher2[pos];
        }
    }
    
    cout << message << endl;
    
    return 0;
}