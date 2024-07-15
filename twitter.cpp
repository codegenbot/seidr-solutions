if (tweet.empty()) {
    cout << "You didn't type anything" << endl;
} else if (tweet.size() > 140) {
    cout << "Too many characters" << endl;
} else {
    cout << "Your tweet has " << tweet.size() << " characters" << endl;
}