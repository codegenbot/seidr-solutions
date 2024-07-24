int main() {
    string tweet;
    getline(cin, tweet);

    int length = tweet.length();

    if (length > 140) {
        cout << "Too many characters";
    } else if (length == 0) {
        cout << "You didn't type anything";
    } else {
        cout << "Your tweet has " << length << " characters";
    }

    return 0;
}