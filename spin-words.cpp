Here is the solution:

string spinWords(string str) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if (word.length() >= 5) {
                result += std::string(word.rbegin(), word.rend());
            } else {
                result += word;
            }
            if (i < str.length()) {
                result += " ";
            }
            start = i + 1;
        }
    }
    return result;
}