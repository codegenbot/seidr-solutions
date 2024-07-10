int main() {
    while (true) { 
        std::cout << "Enter a tweet: ";
        std::string line;
        getline(std::cin, line);
        std::string output = validateTweet(line); 
        if(output == "You didn't type anything") {
            std::cout << output << std::endl;
            return 0; 
        }
        else {
            std::cout << output << std::endl;
            return 0; 
        }
    }   
    return 0;
}