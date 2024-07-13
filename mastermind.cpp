int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < code.size(); ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> freq;
    for (char c : code) {
        freq[c]++;
    }
    for (int i = 0; i < guess.size(); ++i) {
        if (code[i] == guess[i] && freq[guess[i]] > 0) {
            count++;
            freq[guess[i]]--;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}