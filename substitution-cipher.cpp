#include <iostream>

using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    int n = message.length();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < cipher1.length(); ++j) {
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