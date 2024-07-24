int main() {
    string num;
    cin >> num;
    string result = "";
    for (char digit : num) {
        int d = digit - '0';
        result += to_string(d * d);
    }
    cout << result << endl;
    return 0;
}