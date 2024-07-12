int main() {
    std::string tweet;
    std::cout << "Enter your tweet: ";
    std::cin >> tweet;
    if (tweet.size() > 140) {
        std::cout << "Too many characters";
    } else if (tweet.empty()) {
        std::cout << "You didn't type anything";
    } else {
        std::cout << "Your tweet has " << tweet.length() << " characters";
    }
}