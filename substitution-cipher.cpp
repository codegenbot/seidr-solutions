#include <iostream>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (int i = 0; i < message.size(); i++) {
        for (int j = 0; j < cipher1.size(); j++) {
            if (message[i] == cipher1[j]) {
                message[i] = cipher2[j];
                break;
            } else if (message[i] == cipher2[j]) {
                message[i] = cipher1[j];
                break;
            }
        }
    }

    cout << message << endl;

    return 0;
}