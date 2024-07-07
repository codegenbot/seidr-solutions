```cpp
string validateTweet(string tweet) {
    int charCount = 0;
    for (char c : tweet) {
        if (!isspace(c)) { 
            charCount++;
        }
    }
    
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (charCount > 140) {
        return "Too many characters";
    }
    std::ostringstream ostr;
    ostr << "Your tweet has " << charCount << " characters";
    return ostr.str();
}