#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    std::string result = middleCharacter(s);
    std::cout << "The middle character is: " << result << std::endl;
    return 0;
}

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0){
        return s.substr(len/2, 2);
    } else{
        return s.substr(len/2, 1);
    }
}