```cpp
std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                word = std::string(word.rbegin(), word.rend()); // reverse word
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5)
        word = std::string(word.rbegin(), word.rend()); // reverse last word

    return result.substr(0, result.size() - 1);
}