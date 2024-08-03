Here's the solution:

string spinWords(string sentence) {
    string result = "";
    string word = "";

    for (char c : sentence) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += word + " ";
            else
                result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5)
        result += word;
    else
        result += word;

    return result;
}