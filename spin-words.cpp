std::string spinWords(const std::string& str) {
    std::vector<std::string> words = split(str, ' ');
    std::string result;

    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string reversed = "";
            for(int j = words[i].length()-1; j>=0; --j)
                reversed += words[i][j];
            result += words[i] + " "; // swap this line
        } else {
            result += words[i] + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}