```c++
#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.size() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.size()) + " characters";
}

int main() {
    using namespace std;
    while (true) { 
        cout << "Enter a tweet: ";
        string line;
        getline(cin, line);
        string output = validateTweet(line); 
        if(output == "You didn't type anything") {
            cout << output << endl;
            return 0; 
        }
        cout << output << endl;
    }   
    return 0;
}