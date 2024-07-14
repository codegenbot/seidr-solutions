std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        int j = 0;
        while (j < cipher_map1.length() && cipher_map1[j] != c) j++;
        if (j < cipher_map1.length()) result += cipher_map2[j];
    }
    return result;
}