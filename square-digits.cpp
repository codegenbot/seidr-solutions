Here is the solution:

string squareDigits(long int N) {
    string res = "";
    while(N > 0) {
        long int digit = N % 10;
        N /= 10;
        res += to_string(digit * digit);
    }
    reverse(res.begin(), res.end());
    return res;
}