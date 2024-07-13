int main() {
    string tweet;
    getline(cin, tweet);

    int len = tweet.length();
    
    if (len == 0) {
        cout << "You didn't type anything" << endl;
    } else if (len > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << len << " characters" << endl;
    }

    return 0;
}