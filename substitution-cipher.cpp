#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    getline(cin, cipher1);
    getline(cin, cipher2);
    getline(cin, message);

    for (char &c : message) {
        size_t idx = cipher1.find(c);
        if (idx != string::npos) {
            c = cipher2[idx];
        } else {
            idx = cipher2.find(c);
            if (idx != string::npos) {
                c = cipher1[idx];
            } else {
                // Handle characters not found in either cipher
                if (!isalnum(c)) {
                    continue;  // Leave non-alphanumeric characters unchanged
                }
            }
        }
    }

    cout << message << endl;

    return 0;
}