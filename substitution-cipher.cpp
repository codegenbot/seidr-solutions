string decipher(string cipherText, string key) {
    string decrypted = "";
    for (int i = 0; i < cipherText.length(); i++) {
        bool found = false;
        for (int j = 0; j < key.length(); j++) {
            if (key[j] == cipherText[i]) {
                decrypted += key[(key.find(key[j])) % key.length()];
                found = true;
                break;
            }
        }
        if (!found) {
            decrypted += cipherText[i];
        }
    }
    return decrypted;
}