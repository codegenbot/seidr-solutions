#include <string>
std::basic_string<char> validateTweet(const char* tweet) {
    int length = static_cast<int>(tweet ? strlen(tweet) : 0);
    if (length > 140) {
        return "Too many characters";
    }
    if (*tweet == '\0') {
        return "You didn't type anything";
    }
    return std::string("Your tweet has ") + std::to_string(length) + " characters";