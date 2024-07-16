```
#include <string>

std::string cipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        int index = -1;
        for (int j = 0; j < cipher1.length(); j++) {
            if (cipher1[j] == message[i]) {
                index = j;
                break;
            }
        }
        if (index != -1) {
            result += cipher2[index];
        } else {
            result += message[i];
        }
    }
    return result;
}