int pairedDigits(const std::string& input) {
    int sum = 0;
    for (int i = 0; i < input.length(); i++) {
        if ((i == input.length() - 1 || input[i] == static_cast<char>(input[i + 1]))) {
            sum += static_cast<int>(input[i]) - '0';
        }
    }
    return sum;
}