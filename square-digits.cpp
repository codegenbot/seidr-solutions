Here is the solution:

string squareDigits(long int n) {
    string s = to_string(n);
    string res = "";
    for (char c : s) {
        int num = (c - '0') * (c - '0');
        res += to_string(num);
    }
    return res;
}