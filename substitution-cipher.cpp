string decipher(string cipherText, string key) {
    string decrypted = "";
    string cipherMap(key);
    for (int i = 0; i < cipherText.length(); i++) {
        int j = 0;
        while (j < key.length()) {
            if (cipherText[i] == cipherMap[j]) {
                decrypted += key.substr(j, 1);
                break;
            }
            j++;
        }
    }
    return decrypted;
}