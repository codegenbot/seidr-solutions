```cpp
string squareDigits(string input) {
    string result = input; 
    for (char c : result) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}