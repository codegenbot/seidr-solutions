int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;
}

int main() {
    int result = pairedDigits(std::string("123321"));
    std::cout << "Sum of paired digits: " << result << std::endl;
    return 0;
}