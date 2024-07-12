```cpp
string decipher(string cipherText, string key) {
    string decrypted = "";
    for (int i = 0; i < cipherText.length(); i++) {
        for (int j = 0; j < key.length(); j++) {
            if (cipherText[i] == key[j]) {
                decrypted += key[(j - i) % key.length()];
                break;
            }
        }
    }
    return decrypted;
}