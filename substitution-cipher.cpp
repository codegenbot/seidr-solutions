std::string cipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string output;
    for (int i = 0; i < input.size(); i++) {
        if (i < cipher1.size() && i < cipher2.size()) {
            size_t pos = 0;
            while (pos < cipher1.size() && pos < cipher2.size() && cipher1[pos] != input[i]) {
                pos++;
            }
            output += cipher2[pos];
        } else {
            output += input[i];
        }
    }
    return output;
}