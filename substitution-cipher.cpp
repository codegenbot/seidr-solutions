string decipherMessage(string cipher1, string cipher2, string message) {
    for(char &c : message) {
        size_t idx = cipher2.find(c);
        if (idx != string::npos && cipher1.find(c) == string::npos) {
            c = cipher1[idx];
        } else if (idx != string::npos && cipher2.find(c) == string::npos) {
            c = cipher2[idx];
        }
    }
    return message;
}