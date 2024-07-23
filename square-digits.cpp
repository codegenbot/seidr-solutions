string squareDigits(string input) {
    string result = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        result += to_string(digit * digit);
    }
    return result;
}