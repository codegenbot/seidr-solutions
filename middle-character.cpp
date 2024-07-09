int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if(input.find('\0') != std::string::npos) { 
        std::cout << "Invalid Input. Null character not allowed." << std::endl;
        return 1; 
    }
    
    if(input.empty()) {
        std::cout << "Enter a non-empty string" << std::endl;
    } else {
        std::cout << middleCharacter(input) << std::endl; 
    }
    return 0;
}