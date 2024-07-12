int main() {
    string num;
    cin >> num;
    string result = "";
    for (char digit : num) {
        int square = (digit - '0') * (digit - '0');
        result += to_string(square);
    }
    cout << result << endl;
    return 0;
}