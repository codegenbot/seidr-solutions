int solution(string digits) {
    int sum = 0;
    for (int i = 0; i < digits.size() - 1; i++) {
        if (digits[i] == digits[i + 1]) {
            sum += digits[i] - '0';
        }
    }
    return sum;
}

// Main function to read input and output result
int main() {
    string digits;
    cin >> digits;
    cout << solution(digits) << endl;
    return 0;
}