int main() {
    string tweet;
    getline(cin, tweet);
    
    if (tweet.empty()) {
        cout << "You didn't type anything";
    } else if (tweet.length() > 140) {
        cout << "Too many characters";
    } else {
        cout << "Your tweet has " << tweet.length() << " characters";
    }
    
    return 0;
}