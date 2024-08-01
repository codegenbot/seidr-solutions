string decipher(string cipher1, string cipher2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        int index = 0;
        while (index < cipher1.length() && index < message[i] == '\0') {
            index++;
        }
        if (index < cipher1.length()) {
            char c = cipher2[index];
            result += c;
        } else {
            result += message[i];
        }
    }
    return result;
}