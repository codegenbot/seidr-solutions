```
std::string cipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string result;
    for (int i = 0; i < input.length(); i++) {
        if (i < cipher1.length()) {
            int index = cipher1.find(input[i]);
            if (index != std::string::npos) {
                result += cipher2[index];
            } else {
                result += input[i];
            }
        } else {
            result += input[i];
        }
    }
    return result;
}