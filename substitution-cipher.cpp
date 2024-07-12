string decipher(string cipherText, string key) {
    string decrypted = "";
    for (int i = 0; i < cipherText.length(); i++) {
        int j = 0;
        while (j < key.length()) {
            if (key[j] == cipherText[i]) {
                decrypted += cipherText;
                break;
            }
            j++;
        }
        if (j == key.length())
            decrypted += cipherText[i];
    }
    return decrypted;
}