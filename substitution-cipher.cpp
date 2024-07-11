#include <iostream>
#include <string>

using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (size_t i = 0; i < message.length(); ++i) {
        size_t index = cipher1.find(message[i]);
        if (index != string::npos) {
            message[i] = cipher2[index];
        }
    }

    cout << message << endl;

    return 0;
}