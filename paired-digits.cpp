Here is the solution:

int pairedDigitsSum(string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    string input;
    cout << "Enter a string of digits: ";
    cin >> input;
    cout << "Sum of paired digits is: " << pairedDigitsSum(input) << endl;
    return 0;
}