#include <iostream>
#include <string>

using namespace std;

void decipherMessage() {
    string cipher1, cipher2, message;
  
    cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        size_t index = cipher2.find(c);
        if (index < cipher1.size()) {
            c = cipher1[index];
        }
    }

    cout << message << endl;
}