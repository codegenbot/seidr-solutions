#include <iostream>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    getline(cin, cipher1);
    getline(cin, cipher2);
    getline(cin, message);

    for (char &c : message) {
        bool found = false;
        for (int i = 0; i < cipher1.length(); ++i) {
            if (c == cipher1[i]) {
                c = cipher2[i];
                found = true;
                break; // Add break statement to exit loop once character is found
            }
        }
        if (!found) {
            // Handle case when character is not found in cipher
            cout << "Character not found in cipher!";
            return 1; // indicate error and terminate program
        }
    }

    cout << message;

    return 0;
}