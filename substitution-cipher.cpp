#include <iostream>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        size_t index = cipher1.find(c);
        if (index != string::npos) {
            c = cipher2[index];
        } else {
            index = cipher2.find(c);
            if (index != string::npos) {
                c = cipher1[index];
            } else {
                // Add condition to keep characters unchanged
            }
        }
    }

    cout << message << endl;

    return 0;
}