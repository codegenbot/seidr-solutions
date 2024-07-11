else {
    size_t count = 0;
    for (char c : tweet) {
        if (!std::isspace(c)) {
            ++count;
        }
    }
    
    if(count > 140) {
        cout << "Too many characters" << endl;
    } 
    else {
        cout << "Your tweet has " << (tweet.length() - count) << " characters" << endl;
    }
}