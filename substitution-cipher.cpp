#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    for (size_t i = 0; i < message.length(); ++i) {
        for (size_t j = 0; j < cipher1.length(); ++j) {
            if (message[i] == cipher1[j]) {
                message[i] = cipher2[j];
                break;
            }
        }
    }
    
    cout << message << endl;
    
    return 0;
}