std::string middleCharacter(std::string s) {
    int len = s.length();
    return len % 2 == 0 ? s.substr(len/2-1, 2) : s.substr(len/2, 1);
}
std::cout << "Enter a string: ";
std::getline(std::cin, input);
std::cout << "Middle character(s): " << middleCharacter(input) << std::endl;