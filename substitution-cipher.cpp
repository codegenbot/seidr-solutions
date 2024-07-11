#include <iostream>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        for (int i = 0; i < cipher1.length(); ++i) {
            if (c == cipher2[i]) {
                c = cipher1[i];
                break;
            }
        }
    }

    cout << message << "\n";

    return 0;
}