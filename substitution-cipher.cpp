#include <iostream>
#include <string>

using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        size_t index = cipher1.find(c);
        if (index != string::npos) {
            c = cipher2[cipher1.find(c)];
        }
    }

    cout << message << endl;

    return 0;
}