string squareDigits(string n) {
    string result = "";
    for (char c : n) {
        int digit = c - '0';
        long long squared = (long long)digit * digit;
        result += to_string(squared);
    }
    return result;
}