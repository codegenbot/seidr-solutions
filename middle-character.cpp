std::string middleCharacter(std::string s) {
    int len = s.length();
    return len % 2 == 0 ? s.substr(len/2-1, 2) : std::string(1, s[len/2-1]);
}

int main() {
    std::string input;
    int len;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    len = input.length();

    std::cout << "Middle character(s): " << (len % 2 == 0 ? input.substr(len/2-1, 2) : std::string(1, input[len/2-1])) << std::endl;
    return 0;
}