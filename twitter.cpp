```cpp
return tweet.size() > 140 ? ("Too many characters") : (tweet.empty() ? "You didn't type anything" : std::to_string(tweet.size()) + " characters");