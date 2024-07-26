Here is the solution:

string squareDigits(int n) {
    string res = "";
    while(n > 0){
        int digit = n % 10;
        res = to_string(digit * digit) + res;
        n /= 10;
    }
    return res;
}