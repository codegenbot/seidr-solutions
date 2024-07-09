int pairedDigits(const std::string& input) {
    int sum = 0;
    for (int i = 0; i < input.length(); i++) {
        if ((i == input.length() - 1 || input[i] == input[i + 1])) {
            sum += input[i] - '0';
        }
    }
    return sum;
}