size_t validateTweet(const string& tweet) {
    if(tweet.empty()) return "You didn't type anything";
    size_t count = std::accumulate(tweet.begin(), tweet.end(),
                                    0, [](int c, char ch) { return c + std::char_traits<char>::count(ch); });
    if(count > 140) return "Too many characters";
    return to_string(count);
}