#include <iostream>
#include <string>

int main() {
    using namespace std;

    string cipher1, cipher2, message;
    getline(cin, cipher1, ' ');
    getline(cin, cipher2, ' ');
    getline(cin, message);

    for (char &c : message) {
        if (c == cipher1[0]) {
            c = cipher2[0];
        }
    }

    std::cout << message << std::endl;

    return 0;
}