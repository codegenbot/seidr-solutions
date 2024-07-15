#include <iostream>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        size_t index = cipher1.find(c);
        if (index != string::npos && index < cipher2.size()) {
            c = cipher2[index];
        } else {
            index = cipher2.find(c);
            if (index != string::npos && index < cipher1.size()) {
                c = cipher1[index];
            }
        }
    }

    cout << message << endl;

    return 0;
}