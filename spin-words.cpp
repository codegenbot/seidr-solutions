std::string spinWords(std::string str) {
    std::vector<std::string> words = split(str, ' ');
    std::string resultBeforeReversal; 
    for (int i = 0; i < words.size(); i++) {
        std::string temp = words[i];
        if (words[i].length() >= 5) {
            std::reverse(temp.begin(), temp.end());
            resultBeforeReversal += temp + " ";
        } else {
            resultBeforeReversal += temp;
        }
    }
    return join(std::vector<std::string>{resultBeforeReversal}, ' ');
}