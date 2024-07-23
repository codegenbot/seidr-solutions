#include <string>

std::string middleCharacter(std::string str) {
    int len = str.length();
    if(len % 2 == 0) {
        return str.substr(len/2 - 1, 2);
    } else {
        return str.substr(len/2, 1);
    }
}

int main() {
    std::string input;
    getline(cin, input);

    std::cout << middleCharacter(input) << std::endl;

    return 0;
}