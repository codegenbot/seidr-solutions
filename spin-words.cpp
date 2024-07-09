```c++
std::string spinWords(std::string str) {
    std::vector<std::string> words = split(str, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string temp = words[i];
            std::reverse(temp.begin(), temp.end());
            words[i] = temp;
        }
    }
    return join(words, ' ');
}