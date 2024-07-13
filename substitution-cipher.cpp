```cpp
#include <string>
using namespace std;

string substitutionCipher(string &cipher1, string &cipher2, string &message) {
    string result;
    for (int i = 0; i < message.length(); i++) {
        if (i < cipher1.length()) {
            int index = cipher1.find(message[i]);
            if (index != -1) {
                result += cipher2[index];
            } else {
                result += message[i];
            }
        } else {
            result += message[i];
        }
    }
    return result;
}