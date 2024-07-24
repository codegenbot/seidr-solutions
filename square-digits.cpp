int main() {
    string num;
    cin >> num;
    string result = "";
    for (char c : num) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    cout << result << endl;
    return 0;
}