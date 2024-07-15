std::string decipher(std::string key1, std::string key2, std::string message) {
    std::string result = "";
    for (char c : message) {
        int index = 0;
        while (index < key2.length() && c != key2[index]) {
            index++;
        }
        if (index < key2.length()) {
            result += key1[index];
        } else {
            result += c; 
        }
    }
    return result;
}