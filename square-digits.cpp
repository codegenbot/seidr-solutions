string squareDigits(string n) {
    string res = "";
    for(char c : n){
        int digit = (int)(c - '0');
        res += to_string(digit * digit);
    }
    return res;
}