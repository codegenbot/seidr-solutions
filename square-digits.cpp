int main() {
    std::string n;
    cin >> n;
    std::string res = "";
    for (char c : n) {
        int num = c - '0';
        res += to_string(num * num);
    }
    cout << res << endl;
    return 0;
}