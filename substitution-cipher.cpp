#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

void decipherMessage() {
    string cipher1, cipher2, message;
  
    cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        size_t index = cipher1.find(c);
        if (index != std::string::npos) {
            c = cipher2[index];
        }
    }

    cout << message << endl;
}

int main() {
    decipherMessage();
    return 0;
}