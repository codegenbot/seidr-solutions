#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    tweet.erase(remove(tweet.begin(), tweet.end(), ' '), end(tweet)), 
              tweet.erase(remove(tweet.begin(), tweet.end(), '\r'), end(tweet));
    cout << validateTweet(tweet) << endl;
    return 0;
}