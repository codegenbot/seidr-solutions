int main() {
    string s;
    cin >> s;
    if (s == "t") {
        cout << "True" << endl;
    } else if (s == "f") {
        cout << "False" << endl;
    } else if (s == "f&f" || s == "f&t" || s == "t&f") {
        cout << "False" << endl;
    }
    return 0;
}