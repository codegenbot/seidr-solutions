string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int num = c - '0';
        result += to_string(num * num);
    }
    return result;
}