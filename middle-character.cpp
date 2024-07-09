int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::string temp = middleCharacter(str);  
    std::cout << "Middle character(s): " << temp << std::endl;
    return 0;
}