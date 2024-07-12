string decipher(string cipherText, string key) {
    int k = 0;
    string decrypted = "";
    for (char c : cipherText) {
        for(char tk : key) {
            if(c == tk) {
                decrypted += tk; 
                break;
            }
            k++;
        }
    }
}