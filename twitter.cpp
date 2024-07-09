```
if (tweet.empty())
    return "You didn't type anything";
else if (tweet.size() > 140)
    return "Too many characters";
else
    return std::to_string(tweet.size()) + " characters";