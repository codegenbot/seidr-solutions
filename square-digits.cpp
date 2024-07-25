```cpp
string squareDigits(long int n) {
    string s = to_string(n);
    string result;
    
    for (char c : s) {
        int digit = c - '0';
        long long square = pow(digit, 2);
        result += to_string(square);
    }
    
    return result;
}