#include <iostream>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    getline(cin, cipher1);
    getline(cin, cipher2);
    getline(cin, message);

    for (char &c : message) {
        for (int i = 0; i < cipher1.length(); ++i) {
            if (c == cipher1[i]) {
                c = cipher2[i];
                break;
            }
            if (i == cipher1.length() - 1) {
                cout << "Character not found in cipher!";
                return 1;
            }
        }
    }

    cout << message;

    return 0;
}