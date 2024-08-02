int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a tweet: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "You didn't type anything" << std::endl;
        } else {
            std::cout << validateTweet(input) << std::endl;
        }
    }
    return 0;
}