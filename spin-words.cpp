```cpp
std::string spinWords(const std::string& input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            size_t length = i - start;
            std::string word = input.substr(start, length);
            output += word.length() >= 5 ? std::string(word.rbegin(), word.rend()) : word;

            if (i < input.size()) {
                output += ' ';
            }
            start = i + 1;
        }
    }

    return output;
}