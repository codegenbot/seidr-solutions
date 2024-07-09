int pairedDigits(const std::string& input) {
    int sum = 0;
    for (int i = 0; i < input.length(); ) {
        if (i + 1 < input.length() && input[i] == input[i + 1]) {
            sum += input[i] - '0';
            i++; 
        } else if (input[i] == input[(i + 1) % input.length()]) { 
            sum += input[i] - '0';
        }
        i++;
    }
    return sum;
}