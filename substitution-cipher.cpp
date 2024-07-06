#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    for (int i = 0; i < message.size(); i++) {
        int index = cipher1.find(message[i]);
        if (index != string::npos) {
            cout << cipher2[index];
        } else if (!cipher1.contains(message[i]) && !cipher2.contains(message[i])) {
            // If the character is not present in either of the cipher strings, print it directly from the message
            cout << message[i];
        }
    }
    
    return 0;
}