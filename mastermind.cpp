int white_pegs(string s, string t) {
    int count = 0;
    map<char, int> freq_s, freq_t;
    for (int i = 0; i < 4; ++i) {
        if (s[i] == t[i]) {
            count++;
        } else {
            freq_s[s[i]]++;
            freq_t[t[i]]++;
        }
    }
    for (auto iter = freq_s.begin(); iter != freq_s.end(); ++iter) {
        if (freq_t.find(iter->first) != freq_t.end()) {
            count += min(iter->second, freq_t[iter->first]);
        }
    }
    return count;
}

int black_pegs(string s, string t) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (s[i] == t[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    string s, t;
    cin >> s >> t;

    cout << white_pegs(s, t) << endl;
    cout << black_pegs(s, t) << endl;

    return 0;
}