string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        long long square = (long long)digit * digit;
        output += to_string(square);
    }
    return output;
}