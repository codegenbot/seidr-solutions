int main() {
    string tweet;
    cout << "Enter your tweet: ";
    getline(cin, tweet);
    int len = 0;
    for (char c : tweet) {
        if (c >= ' ') { 
            len++;
        }
    }
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    else if (len > 140) {
        return "Too many characters";
    }
    else {
        return "Your tweet has " + to_string(len) + " characters";
    }
}