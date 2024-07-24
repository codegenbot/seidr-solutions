std::string cipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string output;
    for (int i = 0; i < input.length(); i++) {
        int index = cipher1.find(input[i]);
        if (index != std::string::npos) {
            output += cipher2[index];
        } else {
            output += input[i];
        }
    }
    return output;
}