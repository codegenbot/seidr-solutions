string decipher(string a, string b, string c) {
    string result = "";
    for(int i=0; i<c.length(); i++) {
        for(int j=0; j<a.length(); j++) {
            if(a[j] == c[i]) {
                result += b[j];
                break;
            }
        }
    }
    return result;
}