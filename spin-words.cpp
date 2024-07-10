Here is the solution:

string spinWords(string s) {
    string result = "";
    for (const auto& word : split(s)) {
        if (word.length() >= 5)
            result += std::to_string(word).erase(0, 1) + " ";
        else
            result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}

string split(const string& s) {
    vector<string> words;
    for (const auto& c : s) {
        if (c == ' ') {
            words.push_back("");
            continue;
        }
        words.back() += c;
    }
    return join(words);
}

string join(vector<string>& words) {
    string result = "";
    for (const auto& word : words)
        result += word + " ";
    return result.substr(0, result.size() - 1);
}