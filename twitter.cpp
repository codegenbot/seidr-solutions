std::string userTweet;
std::cout << "Enter a tweet: ";
std::getline(std::cin, userTweet);
if (userTweet.size() > 140) {
    return "Too many characters";
} else if (userTweet.empty()) {
    return "You didn't type anything";
} else {
    return "Your tweet has " + std::to_string(userTweet.size()) + " characters";
}