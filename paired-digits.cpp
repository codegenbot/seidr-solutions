int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        int digit = s[i] - '0'; 
        sum += digit; // Add the current digit to the sum
        if ((digit == (s[i+1] - '0'))) { // Check if the digits are equal
            return sum;
        }
    }
    return sum;

}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;
    int result = pairedDigits(input);
    std::cout << "Sum of paired digits is: " << result << std::endl;
    return 0;
}