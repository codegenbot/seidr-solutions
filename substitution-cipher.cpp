#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (char& c : message) {
        size_t idx1 = cipher1.find(c);
        if (idx1 != string::npos) {
            c = cipher2[idx1];
        } else {
            size_t idx2 = cipher2.find(c);
            if (idx2 != string::npos) {
                c = cipher1[idx2];
            }
        }
    }

    cout << message << "\n";

    return 0;
}