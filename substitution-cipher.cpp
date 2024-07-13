#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;

    std::unordered_map<char, char> mapping;
    for (size_t i = 0; i < cipher1.size(); ++i) {
        mapping[cipher1[i]] = cipher2[i];
    }

    for (char& c : message) {
        if (mapping.find(c) != mapping.end()) {
            c = mapping[c];
        }
    }

    std::cout << message << std::endl;

    return 0;
}