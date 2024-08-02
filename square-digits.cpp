```cpp
string squareDigits(long int num) {
    string str = to_string(num);
    string result;
    
    for (int i = 0; i < str.length(); i++) {
        int digit = str[i] - '0';
        long long squared = (long long)digit * digit;
        char c = (char)(squared + '0');
        result += c;
    }
    
    return result;
}