Here is the solution:

int squareDigits(int n) {
    string str = to_string(n);
    string result;
    
    for (char c : str) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    
    return stoi(result);
}