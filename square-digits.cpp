Here is the solution:

string squareDigits(long long n) {
    string s = to_string(n);
    string result;
    for (char c : s) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}