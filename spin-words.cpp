Here is the solution:

string spinWords(string str) {
    string result = "";
    int length = 0;
    for (char c : str) {
        if (c == ' ') {
            if (length >= 5) {
                for (int i = length - 1; i >= 0; --i)
                    result += str[i];
            } else
                result += c;
            length = 0;
        } else {
            result += c;
            ++length;
        }
    }
    if (length >= 5) {
        for (int i = length - 1; i >= 0; --i)
            result += str[i];
    }
    return result;
}