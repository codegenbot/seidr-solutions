string decipherMessage(string cipher1, string cipher2, string message) {
    string result = "";
    
    for (char c : message) {
        size_t idx = cipher1.find(c);
        if (idx != string::npos) {
            result += cipher2[idx];
        } else {
            idx = cipher2.find(c);
            if (idx != string::npos) {
                result += cipher1[idx];
            } else {
                result += c;
            }
        }
    }
    
    return result;
}