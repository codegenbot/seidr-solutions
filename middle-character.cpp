std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    if (len % 2 == 0) {
        int middleIndex = len / 2;
        return s.substr(middleIndex, 2);
    } else {
        int middleIndex = len / 2;
        return s.substr(middleIndex, 1);
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);  
    if(input.empty()) {
        std::cout << "";
    } else {
        std::cout << middleCharacter(input) << std::endl;  
    }
    return 0;
}