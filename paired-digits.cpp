int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (std::stoi(s.substr(i, 1)) == std::stoi(s.substr(i + 1, 1))) {
            sum += 2 * std::stoi(s.substr(i, 1));
        }
    }
    return sum;
}