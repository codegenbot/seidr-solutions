std::vector<std::string> words = split(str, ' ');
    std::string result; 
    for (int i = 0; i < words.size(); i++) {
        std::string temp = words[i];
        if (words[i].length() >= 5) {
            std::reverse(temp.begin(), temp.end());
            if (i > 0) { // add space only for long words
                result += " ";
            }
            result += temp;
        } else {
            result += temp + " ";
        }
    }
    return join(std::vector<std::string>{result}, ' ');
}