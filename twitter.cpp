int main() {
    string tweet;
    getline(cin, tweet);
    
    int len = tweet.length();
    
    if (len > 140) {
        cout << "Too many characters";
    } else if (len == 0) {
        cout << "You didn't type anything";
    } else {
        cout << "Your tweet has " << len << " characters";
    }
    
    return 0;
}