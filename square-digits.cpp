string squareDigits(string n) {
    string result = "";
    for(int i=0; i<n.length(); i++) {
        int digit = (int)(n[i] - '0'); // convert character to integer
        result += to_string(digit * digit); // square the digit and add it to the result
    }
    return result;
}