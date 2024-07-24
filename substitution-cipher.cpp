#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    if (cipher1.size() != cipher2.size()) {
        cout << "Error: Cipher length mismatch." << endl;
        return 1;
    }

    for (char &c : message) {
        size_t pos = cipher1.find(c);
        if (pos != string::npos) {
            c = cipher2[pos];
        }
    }

    cout << message << endl;

    return 0;
}