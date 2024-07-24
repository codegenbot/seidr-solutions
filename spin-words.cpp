Here is the solution:

string spinWords(string str) {
    string result = "";
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if (word.size() >= 5) {
                result += std::string(word.rbegin(), word.rend());
            } else {
                result += word;
            }
            if (i < str.size()) {
                result += " ";
            }
            start = i + 1;
        }
    }
    return result;
}