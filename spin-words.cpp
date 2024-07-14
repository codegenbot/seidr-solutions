Here's the solution:

string spinWords(string sentence) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= sentence.size(); i++) {
        if (i == sentence.size() || sentence[i] == ' ') {
            string word = sentence.substr(start, i - start);
            if (word.size() >= 5) {
                result += std::string(word.rbegin(), word.rend());
            } else {
                result += word;
            }
            if (i < sentence.size()) {
                result += " ";
            }
            start = i + 1;
        }
    }
    return result;
}