```
std::string spinWords(std::string input) {
    std::string output;
    std::size_t pos = 0;

    while ((pos = input.find(' ')) != std::string::npos) {
        std::size_t length = input.length() - pos - 1;
        if (length >= 5) {
            std::string word = input.substr(pos + 1, length);
            for (int i = word.length() - 1; i >= 0; --i)
                output += word[i];
            output += ' ';
        } else {
            output += input.substr(0, pos + 1);
        }
        input.erase(0, pos + 1);
    }

    if (!input.empty())
        output += input;

    return output;
}