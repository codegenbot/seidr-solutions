int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            int currentSum = (s[i] - '0') * 10 + (s[i+1] - '0');
            while(currentSum > 9) {
                currentSum = (currentSum / 10) + (currentSum % 10);
            }
            sum += currentSum;
        }
    }
    return sum;
}