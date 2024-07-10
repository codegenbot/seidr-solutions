int main() {
    while (true) { 
        std::cout << "Enter a tweet: ";
        std::string line;
        getline(std::cin, line);
        std::string output = validateTweet(line); 
        std::cout << output << std::endl;  
        if(output == "Too many characters") break;   
    }   
    return 0;
}