#include <iostream>
#include <string>

std::string tweetValidator(const std::string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    int i;
    cin >> i;
    if(i ==1){
        string t;cin>>t;
        cout << tweetValidator(t) << endl;
    }
    return 0;
}