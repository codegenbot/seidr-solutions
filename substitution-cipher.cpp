#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    // Create a map to store the indices of each character in cipher1
    map<char, int> char_indices;
    for (int i = 0; i < cipher1.size(); i++) {
        char_indices[cipher1[i]] = i;
    }

    // Decipher the message
    string deciphered_message;
    for (int i = 0; i < message.size(); i++) {
        int index = char_indices[message[i]];
        if (index != -1) {
            deciphered_message += cipher2[index];
        } else {
            deciphered_message += message[i];
        }
    }

    // Print the deciphered message
    cout << deciphered_message << endl;

    return 0;
}