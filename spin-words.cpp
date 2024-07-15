Here is the modified code:

```cpp
std::string spinWords(std::string str) {
    std::vector<std::string> words;
    std::size_t pos = 0;

    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t len = str.find(" ", pos + 1);
        if (len == std::string::npos)
            len = str.length();

        words.push_back(str.substr(pos, len - pos));

        pos = len;
    }

    words.push_back(str);

    for (auto &word : words) {
        if (word.size() >= 5) {
            std::reverse(word.begin(), word.end());
        }
    }

    return std::accumulate(words.begin(), words.end(), "",
                             [](const std::string &a, const std::string &b) {
                                 return a + " " + b;
                             });
}