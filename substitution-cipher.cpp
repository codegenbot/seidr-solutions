#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    while (message.size() > 0) {
        int index = cipher1.find_first_of(message[0], 0);
        if (index != string::npos) {
            cout << cipher2[index];
            message.erase(0, 1);
        } else {
            break;
        }
    }
    
    return 0;
}