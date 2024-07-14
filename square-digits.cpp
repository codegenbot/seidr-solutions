string squareDigits(string input) {
    string output = input;
    for(int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        output[i] = to_string(digit * digit);
    }
    return output;
}