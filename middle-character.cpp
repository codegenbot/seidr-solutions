string get_middle_character(const string& s) {
    if (s.size() % 2 == 0) {
        return s.substr(s.size() / 2 - 1, 2);
    } else {
        return s.substr(s.size() / 2, 1);
    }
}

int main() {
    string s;
    cin >> s;
    cout << get_middle_character(s) << endl;
    
    return 0;
}