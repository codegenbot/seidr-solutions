#include <string>
using namespace std;
int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    for (int i = 0; i < message.length(); i++) {
        int index = cipher1.find(message[i]);
        if (index != string::npos) {
            cout << cipher2[index];
        } else {
            cout << message[i];
        }
    }
    return 0;
}