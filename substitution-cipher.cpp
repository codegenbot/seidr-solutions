std::string cipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string output;
    for (int i = 0; i < input.length(); i++) {
        if (i < cipher1.length()) {
            int index = cipher1.find(input[i]);
            if (index != std::string::npos && index < cipher2.length())
                output += cipher2[index];
            else
                output += input[i];
        } else
            output += input[i];
    }
    return output;
}