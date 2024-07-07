#include <string>

int main() {
    std::string str = "middle-character";
    std::cout << getMiddle(str) << std::endl;
}

std::string getMiddle(std::string str) {
    int len = str.length();
    if (len % 2 == 0) {
        return str.substr((len / 2) - 1, 2);
    } else {
        return str.substr(len / 2, 1);
    }
}