int main() {
    std::string input, cipher1, cipher2;

    std::cout << "Enter the three strings:" << std::endl;
    if (!(std::getline(std::cin, cipher1) && std::getline(std::cin, cipher2) && std::getline(std::cin, input))) {
        return 0;  
    }

    std::string result = decipher(input, cipher1, cipher2);
    std::cout << "Deciphered message: " << result << std::endl;
    
    return 0;
}