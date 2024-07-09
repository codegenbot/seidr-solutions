int main() {
    string input;
    cin >> input;
    string output = "";
    for (char digit : input) {
        int num = digit - '0';
        output += to_string(num * num);
    }
    cout << output << endl;
    return 0;
}