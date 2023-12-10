```
string spinWords(string input) {
    vector<string> words = split(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i]);
        }
    }
    return std::accumulate(words.begin(), words.end(), string());
}
```