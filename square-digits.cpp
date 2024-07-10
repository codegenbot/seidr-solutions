string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int num = (int)(c - '0'); // convert char to integer
        output += to_string(num * num); // calculate square and add it to output
    }
    return output;
}