Here is the solution:

string spinWords(string s) {
    string result = "";
    string word;
    int len;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            if (word.length() >= 5)
                for (int j = word.length() - 1; j >= 0; j--)
                    result += word[j];
            else
                result += word;
            word = "";
        }
    }

    if (word.length() >= 5)
        for (int j = word.length() - 1; j >= 0; j--)
            result += word[j];
    else
        result += word;

    return result;
}