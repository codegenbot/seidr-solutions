string squareDigits(string input) {
    string output = "";
    for(int i=0; i<input.length(); i++) {
        int digit = (int)(input[i]-'0');
        long long squaredDigit = (long long)digit*digit;
        char c = (char)(squaredDigit + '0');
        output += c;
    }
    return output;
}