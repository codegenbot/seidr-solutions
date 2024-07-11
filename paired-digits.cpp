int pairedDigits(const std::string& s) {
    int sum = 0;
    for (size_t i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;

}

int main() {
    int sum = pairedDigits("123212");
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}