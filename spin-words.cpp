Here is the solution:

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) == -1 || i + 1 >= str.length())
            result += str.substr(i);
        else {
            int j = str.find(" ", i);
            string word = str.substr(i, j - i);
            if (word.length() >= 5)
                result += std::string(word.rbegin(), word.rend());
            else
                result += word;
            i = j + 1;
        }
    }
    return result;
}