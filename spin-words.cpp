Here's the solution:

string spinWords(string sentence) {
    string result = "";
    vector<string> words;
    size_t prev = 0;

    // split the sentence into words
    for (size_t i = 0; i <= sentence.size(); i++) {
        if ((i == sentence.size()) || (sentence[i] == ' ')) {
            string word = sentence.substr(prev, i - prev);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            words.push_back(word);
            prev = i + 1;
        }
    }

    // concatenate the words
    for (string word : words) {
        result += word + " ";
    }

    return result.substr(0, result.size() - 1); // remove trailing space
}