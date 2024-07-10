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
            }
        }
        if (!found) {
            c = c;
        }
    }

    cout << message;

    return 0;
}