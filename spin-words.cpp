Here is the solution:

string spinWords(string str) {
    string result = "";
    for (const auto &word : split(str, " ")) {
        if (word.length() >= 5)
            result += word.substr(word.length() - 1) + word.substr(0, word.length() - 1) + " ";
        else
            result += word + " ";
    }
    return result.substr(0, result.length() - 1);
}

string split(const string &str, const string &delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(delimiter)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return join(tokens, " ");
}

string join(const vector<string> &strs, const string &delimiter) {
    string result;
    for (const auto &str : strs)
        result += str + delimiter;
    return result.substr(0, result.length() - delimiter.length());
}