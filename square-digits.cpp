int main() {
    string input;
    cin >> input;
    string result = "";
    for (char digit : input) {
        int num = digit - '0';
        result += to_string(num * num);
    }
    cout << result << endl;
    return 0;
}