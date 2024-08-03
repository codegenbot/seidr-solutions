string squareDigits(string n) {
    string result = "";
    for(int i=0; i<n.length(); i++){
        int digit = n[i] - '0';
        int squaredDigit = digit * digit;
        char c = (char)('0' + squaredDigit);
        result += c;
    }
    return result;
}