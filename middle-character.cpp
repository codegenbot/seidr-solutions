int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input); 
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}