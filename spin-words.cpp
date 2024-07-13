```cpp
string spinWords(string str) {
    string result = "";
    int start = 0;
    for (int end = 0; end <= str.length(); end++) {
        if (end == str.length() || str[end] == ' ') {
            string word = str.substr(start, end - start);
            if (word.length() >= 5) {
                string reversedWord = "";
                for (int j = word.length() - 1; j >= 0; j--)
                    reversedWord += word[j];
                result.append(reversedWord).append(" ");
            } else
                result.append(word).append(" ");
            start = end + 1;
        }
    }
    return result.substr(0, result.length() - 1);
}