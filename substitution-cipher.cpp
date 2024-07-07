#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    for (int i = 0; i < message.size(); i++) {
        int index = cipher1.find_first_of(message[i], 0);
        if (index != string::npos) {
            cout << cipher2[index];
        } else {
            // handle the case where the character is not found in the cipher strings
            cout << message[i];
        }
    }
    
    return 0;
}