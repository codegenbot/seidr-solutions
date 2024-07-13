#include <iostream>
#include <string>

using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    for (char &c : message) {
        size_t pos1 = cipher1.find(c);
        size_t pos2 = cipher2.find(c);
        
        if (pos1 != string::npos) {
            c = cipher2[pos1];
        } else if (pos2 != string::npos) {
            c = cipher1[pos2];
        }
    }
    
    cout << message << endl;
    
    return 0;
}