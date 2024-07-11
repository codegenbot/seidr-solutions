int sumOfPairedDigits(const string& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size() - 1; ++i) {
        if (digits[i] == digits[i + 1]) {
            sum += digits[i] - '0';
        }
    }
    return sum;
}

int main() {
    string digits;
    cin >> digits;
    cout << sumOfPairedDigits(digits) << endl;
    return 0;
}