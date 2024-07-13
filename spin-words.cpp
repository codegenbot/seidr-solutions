auto spinWords(const char* str) -> std::string {
    std::stringstream s((char*)str);
    std::string word;
    std::string result;

    while (s >> word) {
        if(word.length() >= 5)
            std::reverse(word.begin(), word.end());
        
        result += (result.empty()) ? word : " " + word;
    }

    return result;
}