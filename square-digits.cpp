string squareDigits(string n) {
    string res = "";
    for(int i=0; i<n.length(); i++) {
        int digit = (n[i] - '0');
        res += to_string(digit * digit);
    }
    return res;
}