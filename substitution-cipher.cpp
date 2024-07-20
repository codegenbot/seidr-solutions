string decipher(string cipher_map1, string cipher_map2, string message) {
    map<char, char> mapping;
    for (int j = 0; j < min(cipher_map1.length(), cipher_map2.length()); j++) {
        mapping.insert(make_pair(tolower(cipher_map1[j]), tolower(cipher_map2[j])));
    }
    
    string result = "";
    for (char c : message) {
        if(mapping.find(tolower(c)) != mapping.end()) {
            char temp = mapping[tolower(c)];
            // Check if the original character was uppercase or lowercase
            if(isupper(c))
                result += toupper(temp);
            else
                result += tolower(temp);
        } else {
            result += c; 
        }
    }
    return result;
}