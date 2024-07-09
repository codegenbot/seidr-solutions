#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    bool result = s[0] == 'T';
    for (int i = 1; i < s.size(); i += 2) {
        if (s[i] == '|') {
            result = result || (s[i + 1] == 'T');
        } else {
            result = result && (s[i + 1] == 'T');
        }
    }

    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}