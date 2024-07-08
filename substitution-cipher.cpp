    #include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    // Handle nested substitutions by iterating over each character in the message and using the current cipher to substitute it with the corresponding character from the cipher2 string.
    for (int i = 0; i < message.size(); i++) {
        int index = cipher1.find_first_of(message[i], 0);
        if (index != string::npos) {
            // If a character is found in the current cipher, substitute it with the corresponding character from the cipher2 string.
            cout << cipher2[index];
        } else {
            // If a character is not found in the current cipher, then it should be printed as is.
            cout << message[i];
        }
    }
    
    return 0;
}