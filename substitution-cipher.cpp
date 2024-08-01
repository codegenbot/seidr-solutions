string decipher(string cipherText1, string cipherText2, string message) {
    string result = "";
    
    for(int i = 0; i < message.length(); i++) {
        int index = find(cipherText2.begin(), cipherText2.end(), message[i]) - cipherText2.begin();
        if(index != string::npos)
            result += cipherText1[index];
        else
            result += message[i];
    }
    
    return result;
}