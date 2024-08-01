string squareDigits(string input) {
    string output = "";
    for(int i=0; i<input.size(); i++) {
        int digit = (input[i] - '0'); // convert char to int
        long long squared = (long long)digit * digit;
        output += to_string(squared); // convert long long to string and append it to output
    }
    return output;
}