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
                break;
            }
        }
        if (!found) {
            cout << "Character not found in cipher!";
            return 1;
        }
    }

    cout << message;

    return 0;
}