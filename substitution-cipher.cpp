string substitutionCipher(string key1, string key2, string message) {
    string result = "";
    
    for (int i = 0; i < message.length(); i++) {
        if (key1[i] != key2[i]) {
            int pos = 0;
            while (pos < key1.length()) {
                if (key1[pos] == message[i]) {
                    result += key2[pos];
                    break;
                }
                pos++;
            }
        } else {
            result += message[i];
        }
    }
    
    return result;
}