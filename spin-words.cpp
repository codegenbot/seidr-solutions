Here's the solution:

string spinWords(string str) {
    string result = "";
    string word = "";

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += newWord(word) + " ";
            else
                result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5)
        result += newWord(word);
    else
        result += word;

    return result;
}

string newWord(string str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--)
        reversed += str[i];
    return reversed;
}