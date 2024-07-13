#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    for (char& c : message) {
        for (int i = 0; i < cipher1.size(); ++i) {
            if (c == cipher1[i]) {
                c = cipher2[i];
                break;
            }
        }
    }
    
    cout << message << endl;
    
    return 0;
}