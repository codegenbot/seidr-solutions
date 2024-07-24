```cpp
#include <iostream>
#include <string>

int main() {
    std::string cipher2;
    cin >> cipher2;
    std::string cipher1;
    cin >> cipher1;
    std::string message;
    getline(cin, message);

    std::map<char, char> cipherMap;
    for(int i = 0; i < cipher1.length(); i++) {
        cipherMap[cipher1[i]] = cipher2[i];
    }

    std::string result = "";
    for(int i = 0; i < message.length(); i++) {
        char c = message[i];
        if(cipherMap.find(c) != cipherMap.end()) {
            result.push_back(cipherMap.at(c));
        } else {
            // Handle characters not in the cipher map by keeping them unchanged
            result.push_back(c);
        }
    }
    cout << result << endl;
    return 0;
}