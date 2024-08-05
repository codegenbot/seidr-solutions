string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        long long squared = pow(digit, 2);
        output += to_string(squared);
    }
    return output;
}