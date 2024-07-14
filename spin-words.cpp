Here's the solution:

string spinWords(string sentence) {
    string result = "";
    int i = 0;
    while (i < sentence.length()) {
        if (sentence[i] == ' ') {
            result += " ";
            i++;
            continue;
        }
        int j = i;
        while (j < sentence.length() && sentence[j] != ' ') {
            j++;
        }
        string word = sentence.substr(i, j - i);
        if (word.length() >= 5) {
            string reversedWord = "";
            for (int k = word.length() - 1; k >= 0; k--) {
                reversedWord += word[k];
            }
            result += reversedWord + " ";
        } else {
            result += word + " ";
        }
        i = j;
    }
    return result.trim();
}

string trim(const string& str) {
    auto firstUnspaced = std::find_if_not(str.begin(), str.end(),
                                          [](unsigned char c){return !isspace(c);});
    auto lastUnspaced = std::find_if_not(std::reverse_iterator(str.end()), std::reverse_iterator(firstUnspaced), 
                                          [](unsigned char c){return !isspace(c);}).base();
    return string(firstUnspaced, lastUnspaced);
}